#include <iostream>
#include <string>

// Define a simple struct called Person
struct Person {
    // Member variables
    std::string name;
    int age;
    double height;

    // Member function to display person's details
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Height: " << height << " meters" << std::endl;
    }
};

int main() {
    // Create instances of the Person struct
    Person person1, person2;

    // Initialize values for person1 using member access operator '.'
    person1.name = "Alice";
    person1.age = 25;
    person1.height = 1.65;

    // Initialize values for person2 using member access operator '.'
    person2.name = "Bob";
    person2.age = 30;
    person2.height = 1.80;

    // Display details of person1 and person2 using member function
    std::cout << "Details of Person 1:" << std::endl;
    person1.displayInfo();
    std::cout << std::endl;

    std::cout << "Details of Person 2:" << std::endl;
    person2.displayInfo();
    std::cout << std::endl;

    return 0;
}
