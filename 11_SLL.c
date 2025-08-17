#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void traverse(){
    struct node* ptr=head;
    while(ptr->next!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
void create(){
    int n;
    printf("enter the size of list:");
    scanf("%d",&n);
    struct node*ptr=NULL;
    for(int i=1;i<=n;i++){
        struct node* newnode =(struct node*)malloc(sizeof(struct node));
        printf("enter value of node%d:",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            ptr=newnode;
        }
        else{
            ptr->next=newnode;
            ptr=newnode;
        }
    }
    traverse();
}
void insert(){
    struct node* noddy=(struct node*)malloc(sizeof(struct node));
    int pos;
    printf("enter position of new data:");
    scanf("%d",&pos);
    printf("enter its value:");
    scanf("%d",&noddy->data);
    noddy->next=NULL;
    struct node* ptr=head;
    if(pos==1){
        noddy->next=head;
        head=noddy;
    }
    else{
    for(int i=1;i<pos-1;i++){
        ptr=ptr->next;
    }
    noddy->next=ptr->next;
    ptr->next=noddy;
    
}
traverse();
}
void delete(){
    int pos;
    printf("enter position of data to be deleted:");
    scanf("%d",&pos);
    struct node* ptr=head;
    if(pos==1){
        head=ptr->next;
    }
    else{
        for(int i=1;i<pos-1;i++){
            ptr=ptr->next;
        }
        ptr->next=ptr->next->next;
    }
    traverse();
}
void count(){
    int i=0;
    struct node* ptr=head;
    while(ptr!=NULL){
        i++;
        ptr=ptr->next;
    }
    printf("\nthere are %d nodes in the list",i);
}
void search(){
    printf("enter value of data to find:");
    int d;
    int i=1;
    scanf("%d",&d);
    struct node* ptr=head;
    while(ptr!=NULL){
        if(ptr->data==d){
            printf("%d is stord in node%d",d,i);
            break;
        }
        else{
            ptr=ptr->next;
            i++;
        }
    }
    if(ptr==NULL){
        printf("data not found");
    }
}
void sort(){
    int temp;
    struct node* i;
    struct node* j;
    for(i=head;i->next!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
            if (i->data > j->data){
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
    printf("ascending order:\n");
    traverse();
}
void reverse(){
    struct node* cur=head;
    struct node* prev=NULL;
    struct node* next=NULL;
    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
    traverse();
}
int main(){
    create();
    printf("\n");
    printf("choose number corresponding to your choice:\n");
    printf("1.INSERT\n2.DELETE\n3.TRAVERSE\n4.COUNT\n5.SEARCH\n6.SORT\n7.REVERSE\n8.EXIT\n");
    int op;
    scanf("%d",&op);
    switch(op){
        case 1:
    insert();
    printf("\n");
    break;
    case 2:
    delete();
    break;
    case 3:
    traverse();
    break;
    case 4:
    count();
    break;
    case 5:
    search();
    break;
    case 6:
    sort();
    break;
    case 7:
    reverse();
    break;
    case 8:
    printf("exiting the program...");
    break;
    }
    return 0;
}
