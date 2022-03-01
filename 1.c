//Q.1-Use recursive function to find the length of a string.
#include<stdio.h>
#include<string.h>
int lenght(char a[],int size){
    if(a[size]=='\0')
    return 0;
    return(1+lenght(a,size+1));

}
int main(){
    char str[100],l;
    printf("Enter the string:");
    scanf("%s",str);
    l=lenght(str,0);
    return 0;
}