## Design Explained
* An Electric Car design with an engine inside. We don't want to show the Engine type, therefore a base Engine class is created with an ElectricEngine subclass.
* Loose coupling is essential in Bridge Design Pattern.
* A change in one of the Engine class won't effect the ElectricCar (implementation), seperating concerns. SRP in action.