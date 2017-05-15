#ifndef LINKEDLISTC_H
#define LINKEDLISTC_H

typedef struct _employee{
    char name[32];
    unsigned char age;
} Employee;
//-----------------------------------------
typedef struct _node {
    void *data;
    struct _node *next;
} Node;
//------------------------------------------
typedef struct _linkedList {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;
//------------------------------------------
typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);
//------------------------------------------
int compareEmployee(Employee*, Employee*);
//-------------------------------------------------
void displayEmployee(Employee*);
//--------------------------------------------------
void initializeList(LinkedList*);
//---------------------------------------------------
void addHead(LinkedList*, void*);
//-----------------------------------------------------
void addTail(LinkedList*, void*);
//------------------------------------------------------
Node *getNode(LinkedList*, COMPARE, void*);
//-------------------------------------------------------
void deleted(LinkedList*, Node*);
//----------------------------------------------------------
void displayLinkedList(LinkedList*, DISPLAY);


#endif // LINKEDLISTC_H
