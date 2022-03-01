int factorial(int n){
    if(n==1){
        return 1;
    }
    else{return n*factorial(n-1;)}
}
void fib(int a){
    int x=0;
    int y=1;
    int ans;
    if(a==1){
        printf("0");
        return;
    }
    else if(a==2){
        printf("i");
        return;

    }
    else{
        for(int i=0;i<(a-2);i++){
            ans=x+y;
            x=y;
            y=ans;
        }
    }
}