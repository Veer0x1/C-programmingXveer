#include<stdio.h>
int maxElement(int m,int n){
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int max=mat[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (mat[i][j]>max)
            max=mat[i][j];
            else;
        }
    }
    return max;
}
int main(int argc,char const *argv[]){
    int m,n;
    printf("Enter the size of matrix:");
    scanf("%dx%d",&m,&n);
    int ans=maxElement(m,n);
    printf("The largest element is:%d",ans);
    return 0;
}