#ifndef MYLIB_H     // include guard จากชื่อไฟล์เป็นตัวพิมพ์ใหญ่ทั้งหมด
#define MYLIB_H     // define ด้วยชื่อเดียวกัน

#include <stdio.h>
#include <stdlib.h>

int readInt();
float readFloat();
char *readStr(int size);
void printIntArray(int[], int);

#endif              // stop include guard