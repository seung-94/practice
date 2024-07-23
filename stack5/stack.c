#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "stack.h"

void initStack(Stack *ps, int size, int eleSize)
{
	ps->pArr = malloc(eleSize * size);
	assert(ps->pArr /*!= NULL*/);
	
	ps->eleSize = eleSize;
	ps->size = size;
	ps->tos = 0;
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}

void push (Stack *ps, const void *pData)
{
	assert(ps->tos != ps->size);
	
	//ps->pArr[ps->tos] = data;
	memcpy((unsigned char*)ps->pArr + ps->tos * ps->eleSize, pData, ps->eleSize);
	++ps->tos;
}

void pop(Stack *ps, void *pRe)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	//*pRe = ps->pArr[ps->tos];
	//memcpy(pRe, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pRe, (unsigned char*)ps->pArr + ps->tos * ps->eleSize, ps->eleSize);
}

/*int pop(Stack *ps)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	return ps->pArr[ps->tos];
}

void pop(Stack *ps, void *pRe)
{
	assert(ps->tos != 0);
	
	--ps->tos;
	*pRe = ps->pArr[ps->tos];
}*/
