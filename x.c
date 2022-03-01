#include <stdio.h>
#include<stdlib.h>
int main(int argc,char const *argv[]) {
   int num1,num2,sum;
   num1=atoi(argv[1]);
   num2=atoi(argv[2]);
   sum=num1+num2;
   printf("The sum is %d",sum);
    return 0;
}