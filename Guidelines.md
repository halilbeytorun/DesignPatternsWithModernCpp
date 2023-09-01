##  Gudideline 1: Understand the Importance of Software Design
### Features are not software design
The essential code properties we can say are probably: readability, testability, maintainability, extensiblity, reusability and scalability.
But to achieve these properties does not come from features of the language. The structure of the program is responsible for these properties.
Good software is not primarily about the proper use of any feature; rather, it is about solid architecture and design. Good software design can tolerate some bad implementation decisiions, but bad software design cannot be saved by the heroic use of features alone.
### Software Design: The Art of Managing Dependencies and Abstractions
The software design is so important because the change is on the way always. In a good design, that change can be made easily while it can be painful in a bad design.
- Dependency is the key problem in software development at all scales.
There are unavoidable dependencies and artificial dependencies. The software developer's primary concern is to minimize artificial dependencies.

### The Three Levels of Software Development
**Software Architecture**, **Software Design** and **Implementation Details** are the three levels of software development.
- Implementation Detail is the concern of how a solution is implemented.
- Software Design is the focus of big picture. Questions about maintainability, changeability, extensiblity, testability and scalability are more pronounced on this level. It's the level of design patterns such as Visitor, Strategy and Decorator that define a dependency structure among software entities.
- Software Architecture is defined as key decisions that is nearly impossible to changle later.

The concept of idiom can make the seperation of the three levels a little bit harder. An *idiom* is a commonly used but language-specific solution for a recurring problem. As such, an idiom also represents a pattern, but it could be either an implementation pattern or a design pattern. We can say that C++ idioms are the best practices of the C++ community for either design or implementation. In C++, most idioms fall into the category of implementation details. For instance, there is *copy-and-swap* and *RAII* idiom. *Non-Virtual Interface* idiom and *Pimpl* idiom are in the category Software Design. These two design idioms are based on two classic design patterns: the Template Method design pattern and Bridge design pattern, respectively.

### The Focus on Features
