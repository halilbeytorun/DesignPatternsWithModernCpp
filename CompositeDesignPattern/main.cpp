#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class API
{
public:
	API(string name) : name_(name) {}
  virtual void draw() const = 0;
  virtual ~API() = default;
protected:
	string name_;
};

class Dot : public API
{
public:
	Dot(string name) : API(name) {
		
	}
  void draw() const override
  {
    cout << "Actual dot class named: " << name_ << "\n";
  }
};

class Window : public API
{
public:
	Window(string name) : API(name) {}
  std::vector<unique_ptr<API>> elems;
  void add_element(unique_ptr<API>&& ele)
  {
    elems.push_back(std::move(ele));
  }
  void draw() const override
  {
    cout << name_ << " calling childs\n";
    for(auto& ele : elems)
    {
      ele->draw();
    }
  }
};

int main()
{
//      win1
//    /     \
//  dot1      win2
//          /   |   \
//        dot2  dot3  dot4

  unique_ptr<API> dot1 = make_unique<Dot>("dot1");
  unique_ptr<API> dot2 = make_unique<Dot>("dot2");
  unique_ptr<API> dot3 = make_unique<Dot>("dot3");
  unique_ptr<API> dot4 = make_unique<Dot>("dot4");

  Window win1("win1");
  win1.add_element(move(dot1));

  unique_ptr<Window> win2 = make_unique<Window>("win2");
  win2->add_element(move(dot2));
  win2->add_element(move(dot3));
  win2->add_element(move(dot4));
  
  win1.add_element(move(win2));
  win1.draw();

  return 0;
}
