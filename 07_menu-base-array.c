#include<stdio.h>
void traversal(int ar[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
}
void insert(int ar[],int size,int num,int pos){
    for(int i=pos+1;i<size;i++){
     ar[i]=ar[i-1];
    }
    size++;
    ar[pos]=num;
    traversal(ar,size);
}
void delete(int ar[],int size,int pos){
    for(int i=pos;i<size;i++){
        ar[i]=ar[pos+1];
    }
    size--;
    traversal(ar,size);
}
int ls(int ar[],int size,int ele){
    for(int i=0;i<size;i++){
        if(ar[i]==ele){
            return i;
        }
    }
   return size;
}
void sort(int ar[],int size){
    for(int i=0;i<size-1;i++){
        if(ar[i]>ar[i+1]){
            int temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
    traversal(ar,size);
}
void update(int ar[],int size,int rep,int pl){
    int result=ls(ar,size,rep);
    if(result==size){
        printf("thr number to be replaced in not present in the array\n");
    }
    else{
        ar[result]=pl;
    }
    printf("the array after updation:\n");
    traversal(ar,size);
}
int main()
{
    printf("enter size of array:");
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
        printf("enter term%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the original arrat is:\n");
    for(int i=0;i<s;i++){
        printf("%d ",arr[i]);
    }
    printf("choose the number corresponding to the function of your choice:\n");
    printf("1.INSERT\n");
    printf("2.DELETE\n");
    printf("3.TRAVERSE\n");
    printf("4.LINEAR SEARCH\n");
    printf("5.SORT\n");
    printf("6.UPDATE\n");
    printf("\n7.EXIT\n");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1:{
            int num1,pos1;
        printf("enter number and its position to be inserted at\n");
        scanf("%d %d",&num1,&pos1);
        insert(arr,s,num1,pos1);
        break;
    }
        case 2:{
            int pos2;
            printf("position of number to be deleted:\n");
            scanf("%d",&pos2);
            delete(arr,s,pos2);
            break;
        }
        case 3:
        printf("the array is:\n");
        traversal(arr,s);
        break;
        
        case 4:
        {
        printf("enter the element to be searched:");
        int ele;
        scanf("%d",&ele);
        int ans=ls(arr,s,ele);
        if(ans==s){
            printf("the number is not available in the array");
        }
        else{
            printf("the number is saved at arr[%d]",ans);
        }
        break;
    }
    case 5:
    printf("the elemnts sorted in ascending order:\n");
    sort(arr,s);
    break;
    case 6:
    {
        int rnum,pnum;
        printf("enter number to be replaced:");
        scanf("%d",&rnum);
        printf("enter the number tom be places instead:");
        scanf("%d",&pnum);
        update(arr,s,rnum,pnum);
        break;
    }
    case 7:
    printf("the code is exited\n");
    break;

}
return 0;
        
}
