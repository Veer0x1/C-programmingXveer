#include<stdio.h>
int main(){
    int n;
    float TotalMarks[]={8,9,7,10};
    float phyMarks[]={4,5,5,5};
    float chyMarks[]={4,4,2,5};
    printf("Enter your roll.no:");
    scanf("%d",&n);
    printf("Total marks are:%f\n",TotalMarks[(n-1)]);
    printf("Physics:%f\n",phyMarks[(n-1)]);

    printf("Chemistry:%f",chyMarks[(n-1)]);
    return 0;
}