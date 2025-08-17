#include<stdio.h>
void pri(int ar[],int d){
    for(int i=0;i<d;i++){
        printf("%dx^%d",ar[i],i);
        if(i<d-1){
            printf("+");
        }
    }
}
void add(int ar[],int br[],int d1,int d2){
    int d;
    if(d1>d2){
        d=d1;
    }
    else{
        d=d2;
    }
    int cr[d];
    int i=0;
    int j=0;
    int k=0;
    while(i<d1&&j<d2){
        if(i==j){
            cr[k]=ar[i]+br[j];
            k++;
            i++;
            j++;
        }
    }
    while(i<d1){
        cr[k]=ar[i];
        k++;
        i++;
    }
    while(j<d2){
        cr[k]=br[j];
        j++;
        k++;
    }
    printf("sum of the given polynomials:\n");
    pri(cr,d);
}
void mul(int ar[],int br[],int d1,int d2){
    int d=d1+d2-1;
    int cr[d];
    int k=0;
    for(int i=0;i<d1;i++){
        for(int j=0;j<d2;j++){
            cr[i+j]=0;
        }
    }
    
    for(int i=0;i<d1;i++){
        for(int j=0;j<d2;j++){
            cr[i+j]=cr[i+j]+(ar[i]*br[j]);
        }
    }
    printf("the product is:\n");
    pri(cr,d);
    
}

int main(){
    printf("enter degree of polynomial1:");
    int d1;
    scanf("%d",&d1);
    d1++;
    int a1[d1];
    for(int i=0;i<d1;i++){
        printf("enter coeff of x^%d:",i);
        scanf("%d",&a1[i]);
    }
    printf("enter degree of polynomial2:");
    int d2;
    scanf("%d",&d2);
    d2++;
    int a2[d2];
    for(int i=0;i<d2;i++){
        printf("enter coeff of x^%d:",i);
        scanf("%d",&a2[i]);
    }
    printf("the polynomials are\n");
    pri(a1,d1);
    printf("\n");
    pri(a2,d2);
    printf("enter operation to be performed:\n");
    printf("1.ADDITION\n2.MULTIPLICATION\n3.EXIT");
    int op;
    scanf("%d",&op);
    switch (op){
        case 1:
        add(a1,a2,d1,d2);
        break;
        case 2:
        mul(a1,a2,d1,d2);
        break;
        case 3:
        printf("exiting the program.....");
        break;

    }
    return 0;
}
