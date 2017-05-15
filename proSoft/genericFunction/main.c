#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generic.h"
//-------------------------------------
#define MAX 5
//--------------------------------------
int main(int argc, char *argv[])
{
    //------------------------------------------------------------
    int integers[] = {2, 3, 4, 3, 5};
    int number1 = 5;
    int* integ = (search(numArray, &integers, &number1, MAX));
    printf("%d\n", *integ);
    //-------------------------------------------------------------
    double integer[] = {2.0, 3.0, 4.2, 3.4, 5.2};
    double number = 5.2;
    double* in = search(doubleArray, &integer, &number, MAX);
    printf("%2.1f\n", *in);
    //--------------------------------------------------------------
    char chars[] = {'a', 'b', 'c', 'd', 'h'};
    char chr = 'h';
    char* chrIn = search(charArray, &chars, &chr, MAX);
    printf("%c\n", *chrIn);
    //--------------------------------------------------------------
    char* strings[] = {"hello", "ret", "tanos", "restruct", "hat"};
    char* sStr = "tanos";
    char** s = search(stringArray, &strings, &sStr, MAX);
    printf("%s\n", *s);
    //--------------------------------------------------------------

    return 0;
}


