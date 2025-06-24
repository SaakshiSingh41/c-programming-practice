#include<stdio.h>
int main(){
int row,col;
printf("enter the number of rows and columns respectively:\n");
scanf("%d %d",&row,&col);
int arr[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("enter term [%d][%d]: ",i+1,j+1);
scanf("%d",&arr[i][j]);
printf("\n");
}
}
printf("the original matrix is:\n");
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("\ntranspose:\n");
for(int i=0;i<col;i++){
for(int j=0;j<row;j++){
printf("%d ",arr[j][i]);
}
printf("\n");
}
return 0;
}
