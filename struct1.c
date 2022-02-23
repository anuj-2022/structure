#include<stdio.h>
#include<stdlib.h>

struct data
{
	char name[6];
	int id;
	char degnisation[10];
};

void main()
{
int i=0,j=0,k=2;
struct data a[k];
printf("Enter the Name Id and degnisation\n");

for(i=0;i<k;i++)
scanf("%s %d %s",a[i].name,&a[i].id,a[i].degnisation);


for(i=0;i<k;i++)
printf("%s %d %s\n",a[i].name,a[i].id,a[i].degnisation);
}


	
