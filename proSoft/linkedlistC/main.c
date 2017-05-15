#include <stdio.h>
#include <stdlib.h>
#include "linkedlistc.h"

int main(int argc, char *argv[])
{
    LinkedList linkedList;

    Employee *samuel = (Employee*) malloc(sizeof(Employee));
    strcpy(samuel->name, "Samuel");
    samuel->age = 32;
    Employee *sally = (Employee*) malloc(sizeof(Employee));
    strcpy(sally->name, "Sally");
    sally->age = 28;
    Employee *susan = (Employee*) malloc(sizeof(Employee));
    strcpy(susan->name, "Susan");
    susan->age = 45;

    initializeList(&linkedList);

    addHead(&linkedList, samuel);
    addHead(&linkedList, sally);
    addHead(&linkedList, susan);

    displayLinkedList(&linkedList, (DISPLAY)displayEmployee);

    deleted(&linkedList, samuel);
    deleted(&linkedList, sally);
    deleted(&linkedList, susan);

    displayLinkedList(&linkedList, (DISPLAY)displayEmployee);
//---------------------------------------------------------------
    return 0;
}
