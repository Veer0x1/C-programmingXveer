// 5. Write a C program that uses the pointer increment operations to demonstrate the scale factor.
#include <stdio.h>
int main()
{
    int var,*ptr;
    ptr=&var;
    printf("Address of int  variable before  increment is:%d\n",ptr);
    ptr++;
    printf("Address of int variable after increment is:%d",ptr);
    return 0;
    char a;
    ptr=&a;
    printf("Address of char variable before increment is:%d\n ",ptr);
    ptr++;
    printf("Address of char variable after increment is:%d\n ",ptr);
}
