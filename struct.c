#include<stdio.h>
#include<stdlib.h>
#pragma pack(2)

struct test
{
	int a;
	char b;
	int e;
	char c;
};
void main()
{
	printf("size of struct %ld\n",sizeof(struct test));
}

