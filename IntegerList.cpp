#include <iostream>
#include "IntegerList.h"

IntegerList::IntegerList()    // constructor
    : head(NULL), n(0) { }

int& IntegerList::front() {    // return front element

    if (n==0) throw length_error("empty list");
    return head->getElement();
}

IntegerList::~IntegerList() {    // destructor

    while (n > 0) removeFront();
}

void IntegerList::addFront(int e) {    // add to front of list
    IntListNode* v = new IntListNode(e, head);    // create new node
    head = v;    // v is now the head
    n++;
}

void IntegerList::removeFront() {    // remove front item
    if (n == 0) throw length_error("empty list");
    IntListNode* old = head;    // save current head
    head = old->getNext();    // skip over prev head
    delete old;    // delete old head
    n--;
}

void IntegerList::print() {    // print all elements
    IntListNode* current = head;
    while (current != NULL) {
        std::cout << current->getElement() << " ";
        current = current->getNext();
    }
}

int IntegerList::size() const {    // list size
    return n;
}

void IntegerList::AddAtPosition(int e, int p) {    // add int e and position p
    IntListNode* current = head;
    IntListNode* next = current->getNext();
    if (p == 0){
        return addFront(e);
    }
    for (int i = 1; i < p && next != NULL; ++i) {
        current = next;
        next = current->getNext();
    }
    IntListNode* v = new IntListNode(e, next);
    current->setNext(v);
    
}

int  IntegerList::sum() {    // returns the sum of the nodes in the list
    return sum(head);
}

int  IntegerList::sum(IntListNode* node) {    // recursive function, used by above function
    if (node == NULL) {
        return 0;
    }
    return node->getElement() + sum(node->getNext());
}
