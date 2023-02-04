#include<stdio.h>
#include<stdlib.h>

#define MAX_IRINGBUF 32
#define MAX_ONE_IRINGBUF 128

typedef struct
{
    char **mat;
    int m;
    int ip;
} Matrix;

void InitialMatrix(Matrix *T,int m);
void FreeMatrix(Matrix *T);
void SetMatrix(Matrix *T, int m, char *value);
void PrintMatrix(Matrix *T);






