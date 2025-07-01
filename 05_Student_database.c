#include<stdio.h>
#include<string.h>
struct stu{
int roll;
float marks;
char name[100];
};
int main(){
int a;
printf("input of: ");
scanf("%d",&a);
struct stu s[a];
for(int i=0;i<a;i++){
printf("enter roll %d:",i+1);
scanf("%d",&s[i].roll);
printf("\n enter marks %d:",i+1);
scanf("%f",&s[i].marks);
printf("\n enter name:");
scanf("%s",s[i].name);
}
  printf("\n");
for(int i=0;i<a;i++){
printf("info of student %d: ",i+1);
printf("\nroll: %d",s[i].roll);
printf("\nmarks: %f",s[i].marks);
printf("\nname: %s",s[i].name);
printf("\n\n");
}
return 0;
}
