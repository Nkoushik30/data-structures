#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *link;
};

void display(struct node *head) {

    struct node *ptr;
    ptr=head;

    while(ptr!=NULL) {

        printf("%d  ",ptr->data);
        ptr=ptr->link;

    }

}
struct node* add_at_beginning(struct node *head,int data) {

    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    temp->link=head;
    head=temp;
    return head;
}
struct node* delete_at_beginning(struct node *head) {

    struct node *temp;

    temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    return head;
}
struct node* add_at_position(struct node *head, int data, int pos) {

    if(pos==1) {

        head=delete_at_beginning(head) ;
        return head;

    }

    else {
        struct node *ptr,*temp;
        ptr=head;
        temp=malloc(sizeof(struct node));
        temp->data=data;
        temp->link=NULL;
        pos--;

        while(pos>1) {

            ptr=ptr->link;
            pos--;
        }
        temp->link=ptr->link;
        ptr->link=temp;
        head=ptr;
        return head;

    }
}



struct node* delete_at_position(struct node *head, int pos) {

    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    if(head==NULL) {
        printf("List is already empty");
    }
    else if(head->link==NULL) {
        free(head);
        head=NULL;
    }


    if(pos==1) {

        head=delete_at_beginning(head) ;
        return head;

    }

    else {

        while(pos!=1) {

            ptr=temp;
            temp=temp->link;
            pos--;
        }
        ptr->link=temp->link;
        free(temp) ;
        return head;

    }

}
void add_at_end(struct node *head,int data) {

    struct node *ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL) {

        ptr=ptr->link;
    }

    ptr->link=temp;

}
struct node* delete_at_end(struct node *head) {


    if(head==NULL) {
        printf("List is already empty");
    }
    else if(head->link==NULL) {
        free(head);
        head=NULL;
    }

    else {
        struct node *temp=head;
        struct node *ptr=head ;
        while(temp->link!=NULL) {
            ptr=temp;
            temp=temp->link;

        }
        ptr->link=NULL;

        free(temp) ;
        temp=NULL;


    }
    return head;
}

int count_nodes(struct node *head) {

    struct node *ptr;
    ptr=head;
    int count=0;
    while(ptr!=NULL) {
        ptr=ptr->link;
        count++;


    }
    return count;

}

int search(struct node *head, int key) {
    struct node *ptr, *temp;
    temp=(struct node*)malloc(sizeof(struct node*)) ;
    ptr=head;
    int node, pos;
    while(ptr!=NULL) {
        if(ptr->data==key) {
            temp=ptr;
            return node;
        }
        node++;
        ptr=ptr->link;
        
    }
    if(pos<=0) {
        return -1;

    }
}

int main()
{
    int size;
    struct node *head;
    head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *current;
    current=malloc(sizeof(struct node));

    current->data=20;
    current->link=NULL;

    head->link=current;

    current=malloc(sizeof(struct node));

    current->data=30;
    current->link=NULL;

    head->link->link=current;

    head=add_at_beginning(head,5);
    display(head);
    size=count_nodes(head);
    printf("\nNo of nodes:%d",size);
    int key;
    printf("\nenter the element to search:");
    scanf("%d", &key);
    int node=search(head, key);
    if(node==-1) {
        printf("Element is not found\n");
    }
    else {
        printf("Element is found at %d", 1+node);

    }

    return 0;
}
