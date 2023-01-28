#include<stdio.h>
#include<stdlib.h>

void stack();
void queue();
void push();
int pop();
void display();
void enqueue();
int dequeue();
void display1();

struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;

struct node1{
    int data;
    struct node1* next;
}; 
struct node1* front=NULL;
struct node1* rear=NULL;
void main(){
    int ch;
    printf("1)stack using linked list\n 2)queue using linked list\n");
    printf("enter the choice : ");
    scanf("%d",&ch);
    switch(ch){
        case 1: stack();
               break;
        case 2: queue();
               break;
    }
}

void stack(){
    int ch,temp;
     printf("stack operations...\n");
    while(ch != 5){
       
        printf("1)push\n 2)pop\n 3)display\n 4)exit\n");
        printf("enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
                   break;
            case 2: temp = pop();
                   printf("poped element is %d\n",temp);
                   break;
            case 3: display();
                   break;
            case 4: exit(9);
            
        }
    }
}

void push(){
    struct node* temp;
    int n;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the element to be pushed: ");
    scanf("%d",&n);
    temp->data = n;
    temp->next = top;
    
    top = temp;
}
int pop(){
    struct node *temp;
    temp = top;
    top = top->next;
    return temp->data;
    free(temp);
}
void display(){
    struct node *p;
    p = top;
    while(p != NULL){
        printf("\t%d\n",p->data);
        p = p->next;
    }
    
}
    
void queue(){
    int ch,temp;
     printf("queue operations...\n");
    while(ch != 5){
       
        printf("1)enqueue\n 2)dequeue\n 3)display\n 4)exit\n");
        printf("enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();
                   break;
            case 2: temp = dequeue();
                    printf("The removed element is %d\n",temp);
                   break;
            case 3: display1();
                   break;
            case 4: exit(9);
            
        }
    }
}  
void enqueue(){
    struct node1 *temp;
    int n;
    temp = (struct node1 *)malloc(sizeof(struct node1));
    printf("enter the element: ");
    scanf("%d",&n);
    temp->data = n;
    temp->next=NULL;
    
    if(front==NULL || rear==NULL){
        front=temp;
        rear=temp;
    }
    else{
        struct node1* p;
        p = front;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
        rear = rear->next;
    }
    
}

int dequeue(){
    struct node1* r;
    r = front;
    front = front->next;
     return r->data;
    free(r);
   
}
void display1(){
    struct node1* p;
    p = front;
    while(p != NULL){
        printf("\t%d",p->data);
        p = p->next;
    }
    printf("\n");
}
    
    
    
    
    
    
    
    
