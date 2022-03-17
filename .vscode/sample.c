#include<stdio.h>
#include"fact.h"
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("factorial is:%d",factorial(n));
    return 0;
}