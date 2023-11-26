#include <iostream>
#include <string>

// Define a simple class
class Person {
public:
    // Constructor to initialize the object
    Person(std::string name, int age) : name(name), age(age) {}

    // Member function to display information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Public member variable (without getter)
    std::string name;
private:
    // Private member variable
    int age;
};

int main() {
    // Create objects of the Person class
    Person person1("John", 25);
    Person person2("Jane", 30);

    // Call member functions on the objects
    std::cout << "Information for person1:" << std::endl;
    person1.displayInfo();

    std::cout << "\nInformation for person2:" << std::endl;
    person2.displayInfo();

    // Access public member variable directly
    std::cout << "\nDirect access example: Name of person1 is " << person1.name << std::endl;
    //std::cout << "\nDirect access example: Age of person1 is " << person1.age << std::endl;

    return 0;
}
