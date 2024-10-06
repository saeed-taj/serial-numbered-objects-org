This project features a C++ class designed to automatically assign a unique serial number to each object instantiated from the class. The serial number starts from 1 and increments with each new object created. This implementation highlights the use of static member variables to maintain a count of all objects created.

Features
Unique Serial Numbers: Each object has a unique serial number that reflects its creation order.
Static Member Variable: A static data member keeps track of the number of objects created, ensuring each object receives the correct serial number.
Self-Reporting: Each object can report its own serial number through a member function.
Example
When three objects are created, the output will indicate their respective serial numbers:

I am object number 1
I am object number 2
I am object number 3

Code Explanation
The class uses a static member variable to keep track of the total number of objects.
Each object's constructor increments this static variable and assigns the current count as the serial number for the new object.
A member function allows each object to return its assigned serial number.
