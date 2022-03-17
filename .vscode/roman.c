#include <stdio.h>
void roman(int a)
{while(a!=0)
   { if (a >= 1000)
    {
        printf("m");
        a = a - 1000;
    }
    else if(a>=900){
        printf("cm");
        a=a-900;
    }
    else if (a >= 500)
    {
        printf("d");
        a = a - 500;
    }
    else if(a>=400){
        printf("cd");
        a=a-400;
    }
     else if(a >=100)
    {

        printf("c");
        a = a -100;
    }
    else if(a>=90){
        printf("cd");
        a=a-90;
    }
    else if (a >= 50)
    {
        printf("l");
        a = a -50;
    }
    else if(a>=40){
        printf("xl");
        a=a-40;
    }
    else if (a >= 10)
    {
        printf("x");
        a = a -10;
    }
    else if(a>=9){
        printf("ix");
        a=a-9;
    }
    else if (a >=5)
    {
        printf("v");
        a = a -5;
    }
    else if(a>=4){
        printf("iv");
        a=a-4;
    }
    else if  (a >=1)
    {
        printf("i");
        a=a-1;
    }}
}
int main()
{
    int n1;
    printf("Enter. number:");
    scanf("%d", &n1);
    roman(n1);
    
    return 0;
}