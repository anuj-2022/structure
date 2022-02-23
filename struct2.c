#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    char phone[10];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  int i=0;
    struct employee emp[2];  
    printf("Enter employee information name city pin phone?\n");
for(i=0;i<2;i++)  
    scanf("%s %s %d %s",emp[i].name,emp[i].add.city, &emp[i].add.pin,emp[i].add.phone);  
    printf("Printing the employee information....\n");  
for(i=0;i<2;i++)
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s\n",emp[i].name,emp[i].add.city,emp[i].add.pin,emp[i].add.phone);  
}  
