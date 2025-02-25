#include <memory>
#include <stack>
#include <iostream>

class CalculatorCommand
{
public:
  virtual ~CalculatorCommand() = default;
  virtual int execute(int i) const = 0;
  virtual int undo(int i) const = 0;
};

class Add : public CalculatorCommand
{
public:
  explicit Add(int operand): operand_(operand) {}
  int execute(int i) const override
  {
    return i + operand_;
  }
  int undo(int i) const override
  {
    return i - operand_;
  }
private:
  int operand_;
};


class Subtract : public CalculatorCommand
{
public:
  explicit Subtract(int operand): operand_(operand) {}
  int execute(int i) const override
  {
    return i - operand_;
  }
  int undo(int i) const override
  {
    return i + operand_;
  }
private:
  int operand_;
};

// Invoker
class Calculator
{
public:
  void compute(std::unique_ptr<CalculatorCommand> command);
  void undoLast();
  int result() const;
  void clear();
private:
  using CommandStack = std::stack<std::unique_ptr<CalculatorCommand>>;
  int current_;
  CommandStack stack_;
};

void Calculator::compute(std::unique_ptr<CalculatorCommand> command)
{
  current_ = command->execute(current_);
  stack_.push(std::move(command));
}

void Calculator::undoLast()
{
  if (stack_.empty()) return;
  auto command = std::move(stack_.top());
  stack_.pop();
  current_ = command->undo(current_);
}

int Calculator::result() const
{
  return current_;
}
void Calculator::clear()
{
  current_ = 0;
  CommandStack{}.swap( stack_ );
}

int main()
{
  Calculator calculator{};

  auto opt1 = std::make_unique<Add>(3);
  auto opt2 = std::make_unique<Add>(7);
  auto opt3 = std::make_unique<Subtract>(4);
  auto opt4 = std::make_unique<Subtract>(2);

  calculator.compute(std::move(opt1));
  calculator.compute(std::move(opt2));
  calculator.compute(std::move(opt3));
  calculator.compute(std::move(opt4));

  calculator.undoLast();
  int const res = calculator.result();
  std::cout << res << std::endl;
}
