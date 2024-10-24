// link list basics
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void link_list_traversal(struct node *ptr){
    while(ptr != NULL){
    printf("elements:%d \n",ptr->data);
    ptr=ptr->next;
    }
}

/*void reverse_link_list(struct node* rev){
    for(int i=)
    printf("element:%d \n",rev->data);
    rev
}*/

void newhead(struct node * F1,struct node* F2){
    F1->next= F2;
    F1->data= 4;  
}

void enter_inbetween(struct node* down,struct node* up,struct node* middle){
    down->next=middle;
    middle->data=13;
    middle->next=up;
}
int main(){
    struct node *head;
    struct node*second;
    struct node * third;
    struct node* forehead;
    struct node* mid;

    forehead=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    mid=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data = 4;
    head->next= second;


    second->data=8;
    second->next=third;

    third->data=5;
    third->next=NULL;

    //link_list_traversal(head);
    //reverse_link_list(third)
    newhead(forehead,head);
    enter_inbetween(second,third,mid);
    link_list_traversal(forehead);
    return 0;
}


// reversing the link list
// sort an linklist
