#include <iostream>
#include "node.h"
using namespace std;
int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(5);
    list.insertAtEnd(7);
    list.insertAtEnd(4);

    cout << "Initial list: ";
    list.display();
    list.insertAtBeginning(8);
    cout << "After inserting 8 at the beginning: ";
    list.display();
    list.insertAtEnd(8);
    cout << "After inserting 8 at the end: ";
    list.display();
    int value = 8;
    int k = 4;
    list.insertAtPosition(value, k);
    cout << "After inserting " << value << " at position " << k << ": ";
    list.display();

    return 0;
}
