#include<iostream>
using namespace std;
// Encapsulation example: Person class
class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person person1("Alice", 30);
    person1.displayInfo();
    return 0;
}
