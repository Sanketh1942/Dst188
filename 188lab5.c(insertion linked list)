#include<stdio.h>
#include<stdlib.h>

void append();
void add_at_begin();
void add_at_after();
void display();
int length();



struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
int len;
void main(){
    int ch;
   
    while(ch!=9){
         printf("single linked list operations\n1)insert at end\n2)insert at begin\n3)insert at after\n4)display\n5)length\n6)delete at begin\n7)delete at position\n");
         scanf("%d",&ch);
        
        switch(ch){
            case 1: append();
                   break;
            case 2: add_at_begin();
                   break;
            case 3: add_at_after();
                   break;
            case 4: display();
                    break;
            case 5: len = length();
                   printf("the length of the list is %d",len);
                   break;
           
            default:printf("ENter the valid choice");
        }
    }
    
    
}
int length(){
    struct node *p;
    p = head;
    int count = 0;
    
    while(p != NULL){ //we want to count the total number so we go till end
        count++;
        p = p->next;
    }
    return count;
}

void append(){
    struct node *temp ;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:  ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
    }
    else
    {
        struct node *p;
        p = head;
        while(p->next != NULL){
            p = p->next; //we want previous address so that we can append at last
        }
        p->next = temp;
        
    }
}

void add_at_begin(){
    struct node *temp ;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:  ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    
     if(head == NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}
        
void add_at_after(){
     struct node *temp ;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:  ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    
    int pos;
    printf("Enter the position after which you have to add: ");
    scanf("%d",&pos);
    len = length();
    
    if(pos>len){
        printf("operations not possible");
    }
    else{
        int i=1;
        struct node* p;
        p = head;
        while(i<pos){ //for add_at_before while(i<pos-1)
            p = p->next;
            i++;
        }
        temp->next = p->next;
        p->next = temp;
    }
}
void display(){
    struct node * temp;
    if(head == NULL){
        printf("The list is empty");
    }
    else{
        temp = head;
        while(temp != NULL){ //we have to go to last element 
            printf("%d->",temp->data);
            
            temp = temp->next;
        }
        printf(" ");
    }
}


        
    
    

