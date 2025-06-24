#include<stdio.h>
int main(){
int row,col;
printf("enter the number of rows and columns respectively:\n");
scanf("%d %d",&row,&col);
int arr[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("enter term [%d][%d]:",i+1,j+1);
scanf("%d",&arr[i][j]);
printf("\n");
}
}
int rsum=0;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
rsum=rsum+arr[i][j];}
printf("the sum of R%d:%d\n",i+1,rsum);
}
int csum=0;
for(int j=0;j<col;j++){
for(int i=0;i<row;i++){
csum=csum+arr[i][j];
}
printf("the sum of C%d:%d\n",j+1,csum);
}
return 0;
}
