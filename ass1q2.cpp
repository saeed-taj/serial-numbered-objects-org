#include <iostream>

class SerialNumberedObject {
private:
    static int objectCount; // Static data member to keep track of the number of objects
    int serialNumber; // Instance data member to hold the serial number for the object

public:
    // Constructor that increments the object count and assigns a serial number
    SerialNumberedObject() {
        serialNumber = ++objectCount;
    }

    // Member function to report the serial number
    void reportSerialNumber() const {
        std::cout << "I am object number " << serialNumber << std::endl;
    }
};

// Initialize the static data member
int SerialNumberedObject::objectCount = 0;

int main() {
    // Create three objects
    SerialNumberedObject obj1;
    SerialNumberedObject obj2;
    SerialNumberedObject obj3;

    // Query each object about its serial number
    obj1.reportSerialNumber(); // Output: I am object number 1
    obj2.reportSerialNumber(); // Output: I am object number 2
    obj3.reportSerialNumber(); // Output: I am object number 3

    return 0;
}
