#include <stdexcept>
#include <iostream>
#include "IntegerList.h"

using namespace std;

int main() {

    IntegerList mylist;

    for (int i = 0; i < 5; i++) {
        mylist.addFront(i);
    }

    mylist.print();
    cout << endl;
    mylist.AddAtPosition(10,2);
    mylist.print();
    cout << endl;
    cout << "The Sum is: " << mylist.sum() << "." << endl;

    mylist.AddAtPosition(15,30);
    mylist.print();
    cout << endl;
    mylist.AddAtPosition(20,0);
    mylist.print();
    cout << endl;
    cout << "The Sum is: " << mylist.sum() << "." << endl;
}
