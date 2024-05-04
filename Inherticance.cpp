#include<iostream>
using namespace std;
// Inheritance example: Base class Animal and derived class Dog
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.bark();
    return 0;
}
