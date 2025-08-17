#include<stdio.h>
void traverse(int arr[][3],int r){
    for(int i=0;i<r;i++){
            printf("%d %d %d",arr[i][0],arr[i][1],arr[i][2]);
            printf("\n");
        }
    
}
void add(int arr[][3],int brr[][3],int num1,int num2){
    int crr[100][3];
    if(arr[0][0]==brr[0][0]&&arr[0][1]==brr[0][1]){
        int i=1,j=1,k=1;
        while(i<num1&&j<num2){
             if(arr[i][0]==brr[j][0]){
                if(arr[i][1]==brr[j][1]){
                   crr[k][0]=arr[i][0];
                   crr[k][1]=arr[i][1];
                   crr[k][2]=arr[i][2]+brr[j][2];
                   k++;
                   i++;
                   j++;
                }
                else if(arr[i][1]<brr[j][1]){
                    crr[k][0]=arr[i][0];
                    crr[k][1]=arr[i][1];
                    crr[k][2]=arr[i][2];
                    k++;
                    i++;

                }
                else{
                    crr[k][0]=brr[j][0];
                    crr[k][1]=brr[j][1];
                    crr[k][2]=brr[j][2];
                    k++;
                    j++;
                }
             }
             else if(arr[i][0]<brr[j][0]){
                crr[k][0]=arr[i][0];
                crr[k][1]=arr[i][1];
                crr[k][2]=arr[i][2];
                k++;
                i++;
             }
             else{
                crr[k][0]=brr[j][0];
                crr[k][1]=brr[j][1];
                crr[k][2]=brr[j][2];
                j++;
                k++;
             }
        }
        while(i<num1){
            crr[k][0]=arr[i][0];
            crr[k][1]=arr[i][1];
            crr[k][2]=arr[i][2];
            k++;
            i++;
        }
        while(j<num2){
            crr[k][0]=brr[j][0];
            crr[k][1]=brr[j][1];
            crr[k][2]=brr[j][2];
            j++;
            k++;
        }
        crr[0][0]=arr[0][0];
        crr[0][1]=arr[0][1];
        crr[0][2]=k-1;
        traverse(crr,k);

    }
    else{
        printf("addition not possible");
    }

}

int main(){
    int r1,c1,n1,r2,c2,n2;
    printf("enter the number of rows and columns of matrix1:");
    scanf("%d %d",&r1,&c1);
    printf("number of non zero elements:\n");
    scanf("%d",&n1);
    int arr[100][3];
    arr[0][0]=r1;
    arr[0][1]=c1;
    arr[0][2]=n1;
    n1++;
    for(int i=1;i<n1;i++){
        printf("enter row and column of nonzero%d:",i);
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        printf("enter its value:\n");
        scanf("%d",&arr[i][2]);
    }
    printf("enter the number of rows and columns of matrix2:");
    scanf("%d %d",&r2,&c2);
    printf("number of non zero elements:\n");
    scanf("%d",&n2);
    int brr[100][3];
    brr[0][0]=r2;
    brr[0][1]=c2;
    brr[0][2]=n2;
    n2++;
    for(int i=1;i<n2;i++){
        printf("enter row and column of nonzero%d:",i);
        scanf("%d %d",&brr[i][0],&brr[i][1]);
        printf("enter its value:\n");
        scanf("%d",&brr[i][2]);
}
traverse(arr,n1);
printf("\n    +    \n");
traverse(brr,n2);
printf("\n");
add(arr,brr,n1,n2);
return 0;

}
