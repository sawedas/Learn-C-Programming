#ifndef MYLIB_H  // include guard เพื่อไม่ให้ include ซ้ำได้
#define MYLIB_H

#include <stdio.h>
#include <stdlib.h>

int readInt();
float readFloat();
char *readStr(int size);
void printIntArray(int[], int);

#endif