#include <iostream>
using namespace std;

class Animal {
public:     // Public members can be accessed from anywhere
    int age_public;

    void sound_public() {
        cout << "Animal makes a sound!" << "\n";
    }

protected:  // Protected members are accessible within the class and its subclasses
    int age_protected;

    void sound_protected() {
        cout << "Animal protected sound!" << "\n";
    }

private:    // Private members are accessible only within the class
    int age_private;

    void sound_private() {
        cout << "Animal private sound!" << "\n";
    }

public:
    void init(int a, int b, int c) {
        age_public = a;
        age_protected = b;
        age_private = c;
    }
};

class Cat : public Animal {
public:
    void showInfo() {
        cout << "Cat info: ";
        cout << age_public << " ";  // Accessing the inherited public member
        // cout << age_protected << " ";  // Protected members are not accessible directly
        // cout << age_private << " ";    // Private members are not accessible directly
        sound_public();  // Accessing the inherited public member function
        sound_protected(); // Accessing the inherited protected member function
        // sound_private();  // Private members are not accessible even in subclasses
        cout << "\n";
    }
};

int main() {
    Cat cat;
    cat.init(3, 4, 5);
    cat.showInfo();
    return 0;
}
