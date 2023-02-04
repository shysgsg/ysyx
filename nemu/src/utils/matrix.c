#include <stdio.h>
#include <stdlib.h>
#include "../../include/matrix.h"
#include <string.h>


void InitialMatrix(Matrix *T,int m)
{
	int i;
	T->mat=(char**)malloc(m*sizeof(char*));
	for(i=0;i<m;i++)
    {
		T->mat[i]=(char*)malloc(128*sizeof(char));
        SetMatrix(T,i,"(kong)");
    }
    T->ip = 0;
	T->m=m;				// m行
}

void FreeMatrix(Matrix *T)
{
	int i;
	for(i=0;i<(T->m);i++)
		free(T->mat[i]);
	free(T->mat);
}

void SetMatrix(Matrix *T, int ip, char *value)
{
	strcpy(T->mat[ip], value);
    // T->mat[ip] = value;
}

void PrintMatrix(Matrix *T)
{
	int i;
	for(i=0;i<(T->m);i++)
	{
        int ni = (i+1)%T->m;
        if( ni == T->ip)
            printf(" --> %s\n",T->mat[i]);
        else
    		printf("     %s\n",T->mat[i]);
	}
}


