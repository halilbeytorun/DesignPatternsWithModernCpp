##  Guideline 1: Understand the Importance of Software Design
- Treat software design as an essential part of writing software.
- Focus less on C++ language details and more on software design.
- Avoid unnecessary coupling and dependencies to make software more adaptable to frequent changes.
- Understand software design as the art of managing dependencies and abstractions.
- Consider the boundary between software design and software architecture as fluid.


### Features are not software design
The essential code properties we can say are: readability, testability, maintainability, extensiblity, reusability and scalability.
But achieving these properties does not come from features of the language. The structure of the program is responsible for these properties.
Good software is not primarily about the proper use of any feature; rather, it is about solid architecture and design. Good software design can tolerate some bad implementation decisions, but bad software design cannot be saved by the heroic use of features alone.
### Software Design: The Art of Managing Dependencies and Abstractions
The software design is so important because the change is on the way always. In a good design, that change can be made easily because good design is extensible and scalable while it can be painful in a bad design.
- Dependency is the key problem in software development at all scales.
There are unavoidable dependencies and artificial dependencies. The software developer's primary concern is to minimize artificial dependencies.

### The Three Levels of Software Development
**Software Architecture**, **Software Design** and **Implementation Details** are the three levels of software development.
- Implementation Detail is the concern of how a solution is implemented.
- Software Design is the focus of big picture. Questions about maintainability, changeability, extensiblity, testability and scalability are more pronounced on this level. It's the level of design patterns such as Visitor, Strategy and Decorator that define a dependency structure among software entities.
- Software Architecture is defined as key decisions that is nearly impossible to changle later.

The concept of idiom can make the seperation of the three levels a little bit harder. An *idiom* is a commonly used but language-specific solution for a recurring problem. As such, an idiom also represents a pattern, but it could be either an implementation pattern or a design pattern. We can say that C++ idioms are the best practices of the C++ community for either design or implementation. In C++, most idioms fall into the category of implementation details. For instance, there is *copy-and-swap* and *RAII* idiom. *Non-Virtual Interface* idiom and *Pimpl* idiom are in the category Software Design. These two design idioms are based on two classic design patterns: the Template Method design pattern and Bridge design pattern, respectively.

### The Focus on Features
There are three main 
- There are so many features, we need to talk about them.
- Expectations from features are high, hoping to solve design issues which is not the case.
- Complexity in them is small comparing to software designs since the former has set of rules while latter depends on many things.
Features alone cannot solve project.

### The Focus on Software Design and Design Principles
While features are important, software design is more important.

##  Guideline 2: Design for Change
- Expect change in software.
- Design for easy change and make software more adaptable.
- Avoid combining unrelated, orthogonal aspects to prevent coupling.
- Understand that coupling increases the likelihood for change and makes changes harder.
- Adhere to the Single-Reponsibility Principle (SRP) to separate concerns.
- Follow the Don't Repeat Yourself (DRY) principle to minimize duplication.
- Avoid premature abstraction if you are not sure about the next change.


One of the essential expectations from software is its ability to change easily in comparison with hardware. However, from experiance, it may be hard to change it.

### Seperations of Concerns
Seperation of concerns is named different thinhs which of them mean nearly the same. The most common one is SRP in SOLID principles.
The idea is to group only those things that truly belong together, and seperate everything that does not strictly belong. Or, seperate those things that change for different reasons.
By doing this, artificial coupling is reduced and the code is more adaptable to change.

### Don't Repeat Yourself

### Avoid Premature Separation of Concerns
Don't try to achieve SOLID, use SOLID to achieve maintainability.


##  Guideline 3: Seperate Interfaces to Avoid Artificial Coupling


### Segregate Interfaces to Separate Concerns
Interface Segregation Principle, clients should not be forced to depend on methods that they do not use.

### Minimizing Requirements of Template Arguments


##  Guideline 4: Design for Testability
##  Guideline 5: Design for Extension
