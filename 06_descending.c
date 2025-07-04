#include<stdio.h>
int main(){
int s;
printf("enter size of the array: ");
scanf("%d",&s);
int arr[s];
for(int i=0;i<s;i++){
printf("enter term %d : ",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<s;i++){
int max = i;
for(int j=i+1;j<s;j++){
if(arr[j]>arr[max]){
max=j;}
}
if(max!=i){
int temp = arr[i];
arr[i] = arr[max];
arr[max] = temp;
}
}
printf("the descending array is:\n");
for(int i=0;i<s;i++){
printf("%d ",arr[i]);
}
return 0;
}
