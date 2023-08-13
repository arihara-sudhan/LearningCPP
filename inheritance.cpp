#include <iostream>
#include <string>  // Include for std::string

using namespace std;

class Animal {
public:
    int age;
    string color;  // Use std::string
    void sound();
    void init();
};

void Animal::sound() {
    cout << "YEAHHHHH" << "\n";
}

void Animal::init() {
    age = 20;
    color = "red";
}

class Cat : public Animal {
public:
    void eat() {
        cout << "CAT EATS FISH" << "\n";
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "DOG EATS BISCUITS" << "\n";
    }
};

int main() {
    Dog dog;
    Cat cat;
    dog.init();
    cat.init();
    dog.eat();
    cout << " " << dog.age;
    cat.eat();
    cout << " " << cat.age;
    return 0;
}
