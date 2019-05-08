// Solution to sample test provided by Chary Vielma
#pragma once

class IntListNode {    // singly linked list node
    public:
        IntListNode(int e, IntListNode *nextptr): 
            elem(e), next(nextptr) { }
        int &getElement() {return elem;}
        IntListNode *getNext() {return next;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setNext(IntListNode* n) {next = n;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
    private:
        int elem;    // linked list element value
        IntListNode *next;    // next item in the list
};
