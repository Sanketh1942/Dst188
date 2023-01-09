#include<stdio.h>
#include<stdlib.h>

void display();
void delete_at_begin();
void delete_at_pos();

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
int len;
void main(){
    int ch;
   
    while(ch!=4){
         printf("1)delete at begin\n2)delete at position\n3)exit\n");
         scanf("%d",&ch);
        
        switch(ch){
          
            case 1: delete_at_begin();
                   break;
            case 2: delete_at_pos();
                   break;
            case 3: exit(0);
            
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

void delete_at_begin(){
    struct node * temp;
    temp = head;
    head = temp->next;
    temp->next = NULL; //important to remove both the connections
    free(temp);  //removing memory location
}
    
void delete_at_pos(){
    int pos;
    printf("ENter the position: ");
    scanf("%d",&pos);
    struct node* temp,* q;
    len = length();
    if(pos>len){
        printf("operations not possible");
    }
    else{
        temp = head;
        int i=1;
        while(i<pos-1){// for deleting we need previous address
            temp = temp->next;
            i++;
            
        }
        q = temp->next;
        temp->next = q->next;
        q->next = NULL;
        free(q);
        
    }
}
    

