#include<stdio.h>
int main(){
printf("welcome costumer\n");
printf("\n");
printf("click 1 to proceed\n \n");
int c;
scanf("%d",&c);
if(c!=1){
printf("invalid entry");}
else{
printf("Menu\n");
printf("1.check balance\n2.deposit money\n3.withdraw money\n4.Exit\n");
printf("\n");
int x;
printf("choose the corresponding number to your choice:\n");
scanf("%d",&x);
switch(x){
case 1:
printf("custumer 245XXX\n \n balance:\n Rs XXXXX\n");
break;
case 2:
printf("enter the amount to be deposited:\n\n");
int m;
scanf("%d",&m);
printf("enter your pincode\n");
int a;
scanf("%d",&a);
printf("%d accepted from your account\n",m);
break;
case 3:
printf("enter the amount to be withdrawn:\n");
int n;
scanf("%d",&n);
if(n%100!=0){
printf("the amount must be a multiple of 100 to be withdrawn\n kindly retry w>else{
printf("enter your pincode\n");
int b;
scanf("%d",&b);
printf("amount Rs %d has been withdrawn from your account , remember to colle>break;
case 4:
printf("exiting window");
default:
printf("invalid option try again");
}
printf("\n \n");
printf("thank you for visiting us , hope you have a great day");
}
return 0;
}

