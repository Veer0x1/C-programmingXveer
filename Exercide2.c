#include<stdio.h>
//recurtion
int fib(int n){
     int fibo[n];
      if (n>=2){
     fibo[0]=0;
     fibo[1]=1;
     fibo[n]=fibo[fib(n-1)]+fibo[fib(n-2)];
     return fibo[n];
     }
else return 1;

}
int main(){
    int a;
    printf("Which term of fibonacci you want?");
    scanf("%d",&a);
    printf("%d term of fibonacci is:%d",a,fib(a));

    return 0;
}
