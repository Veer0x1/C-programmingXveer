#include<stdio.h>
#include"user.h"
int main(){
    int a,n;
    printf("Enter the number for factorial:");
    scanf("%d",&a);
    int ans=fact(a);
    printf("Factorial is:%d",ans);
    printf("Enter the term of fibonacci:");
    scanf("%d",&n);
    fib(n);
    return 0;
}