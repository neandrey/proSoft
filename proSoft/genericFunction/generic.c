#include <stdlib.h>
#include "generic.h"
//--------------------------------------
void* numArray(int* s1, int* s2, size_t max){
    for(int i = 0; i < max; i++){
        if(*(s1 + i) == *s2){
            void* p1 = (s1 + i);
            return p1;
        }
    }
}
//-----------------------------------------
void* doubleArray(double* s1, double* s2, size_t max){
    for(int i = 0; i < max; i++){
        if(*(s1 + i) == *s2){
            void* p1 = (s1 + i);
            return p1;
        }
    }
}
//-----------------------------------------
void* charArray(char * s1, char * s2, size_t max){
    for(int i = 0; i < max; i++){
        if(*(s1 + i) == *s2){
            void* p1 = (s1 + i);
            return p1;
        }
    }
}
//-----------------------------------------
void* stringArray(char** s1, char** s2, size_t max){
    for(int i = 0; i < max; i++){
        if(*(s1 + i) == *s2){
            void* p1 = (s1 + i);
            return p1;
        }
    }
}

//-------------------------------------------------
void* search(funcPtr operator, void* arr, void* n, size_t max){
  return (operator(arr, n, max));
}
//-----------------------------------------------
