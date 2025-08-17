 #include<stdio.h>
void zero(int ar[][100],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i][j]!=0){
                ans=ans+1;
            }
            else{
                ans=ans+0;
            }
        }
    }
    printf("the number of all non zero elements is %d",ans);
}
void up(int ar[][100],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(j>=i){
                printf("%d ",ar[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    

}
void diag(int ar[][100],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                printf("  ");
            }
            else{
                printf("%d ",ar[i][j]);
            }
        }
        printf("\n");
    }
}
int main(){
    printf("enter the size for square matrix:");
    int size;
    scanf("%d",&size);
    int arr[100][100];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("enter term%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nchoose number corresponding to the function of your choice:\n");
    printf("1.number of non zero elements\n");
    printf("2.display upper triangular matrix\n");
    printf("3.elements just above and below main diagonal\n");
    int op;
    printf("\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        zero(arr,size);
        break;
        case 2:
        up(arr,size);
        break;
        case 3:
        diag(arr,size);
        break;

    }
    return 0;

}
