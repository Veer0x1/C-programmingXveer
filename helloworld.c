#include <stdio.h>
void swap(int *a,int *b){
    int x;
     x=*a;
     *a=*b;
     *b=x;
}
int main(){
    int i=69,j=96;
    swap(&i,&j);
    printf("i=%d and j=%d",i,j);
}  