## Visitor
To extend Operations on a closed set of types, reach for the Visitor design pattern. (possibly realized by std::variant).

## Strategy
To configure the behaviour and "inject" it from outside, pick the Strategy design pattern (aka policy-based design)

## Command
To abstract from different kionds of operations, possibly undoable operations, utilize the Command design pattern.

## Observer
To observe state change in some entities, choose the Observer design pattern.

## Adapter
To adapt one interface to another one, nonintrusively, without changing code, use the Adapter design pattern.

## CRTP
For a static abstraction, free of virtual functions (and you can't employ C++20 concepts yet), then apply the CRTP design pattern. CRTP might also prove to be useful to create compile-time mixing classes.

## Bridge
To hide implementation details and reduce physical dependencies, make use of the Bridge design pattern.

## Prototype
To create a virtual copy, the Prototype design pattern is the right choice.

## External Polymorphism
To promote loose coupling by adding polymorphic behavior externally, remember the External Polymorphism design pattern.

## Type Erasure
For the power of External Polymorphism in combination with the advantages of value semantics, consider the Type Erasure design pattern.

# Decorator
To nonintrusively add responsiblities to an object, opt for the benefits of the Decorator design pattern.

