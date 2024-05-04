#include<iostream>
using namespace std;
// C++ Program to Demonstrate the Concept of Dynamic binding
#include <iostream>
using namespace std;

class EXP {
public:
    void call_Function() // function that call print
    {
        print();
    }
    void print() // the display function
    {
        cout << "Printing the Base class Content" << endl;
    }
};
class EXP2 : public EXP // EXP2 inherit a publicly
{
public:
    void print() // EXP2's display
    {
        cout << "Printing the Derived class Content"
             << endl;
    }
};
int main()
{
    EXP geeksforgeeks; // Creating EXP's object
    geeksforgeeks.call_Function(); // Calling call_Function
    EXP2 geeksforgeeks2; // creating EXP2 object
    geeksforgeeks2.call_Function(); // calling call_Function
                                    // for EXP2 object
    return 0;
}
