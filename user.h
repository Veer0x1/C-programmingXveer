int fact(int x)
{
    int factorial=1;
    for(int i=1;i<=x;i++){
        factorial=factorial*i;
    }
    return factorial;
}
void fib(int n)
{
    int fib[n];
    fib[0]=1 ;
    fib[1]=1;
    for (int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("Fibonaci term is:%d",fib[n-1]);
}

