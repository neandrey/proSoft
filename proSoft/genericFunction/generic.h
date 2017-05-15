#ifndef GENERIC_H
#define GENERIC_H
//--------------------------------------
typedef void* (*funcPtr)(void*, void*, size_t);
//---------------------------------------
void* search(funcPtr, void*, void*, size_t size);
//---------------------------------------
void* numArray(int*, int*, size_t);
//---------------------------------------
void* doubleArray(double*, double*, size_t);
//---------------------------------------
void* charArray(char*, char*, size_t);
//--------------------------------------
void* stringArray(char **, char **, size_t);
//-------------------------------------

#endif // GENERIC_H
