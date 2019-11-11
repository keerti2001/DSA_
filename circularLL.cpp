#include <stdio.h>
#include <stdlib.h>


typedef struct node node;

struct node{
  
  int data;
  struct node* next;     
       
};

struct node* head = NULL;

void insertAtEnd(int key){

     //printf("inserat end %d\n",key);
     
    if (!head){
        
        head = (struct node*) malloc(sizeof(struct node));
        head->data = key;
        head->next=head;
        
       // printf("inser at end first node %d\n",key);
                 
    }     
    else {
         //printf("insert at end non first node %d\n",key);
     
        struct node* temp = head;
        while(temp->next != head)
            temp = temp->next;
            
        temp->next = (struct node*) malloc(sizeof(struct node));
        temp->next->next = head;
        temp->next->data = key;
         
    }
     
}

void insertAtFirst(int key){


     struct node* temp2 = head;
     while ( temp2->next!= head )
         temp2 = temp2->next;
         
     struct node* temp = (struct node*) malloc(sizeof(struct node));
     temp->data = key;
     if (head == NULL) { 
         
         head = temp;
         temp->next = head;    
     }
     else {
          
         temp->next = head;
         head= temp;
         temp2->next = head;  //update head
         
              
     } 
     
     
     
}


void removeNode(int key){
     
     if (head->data == key) {
        struct node* temp = head;
        head= head->next;
        free(temp);                
                    
     } 
     else {
          
         struct node* temp = head;
         while (temp->next->data !=key)
             temp = temp->next;
             
         struct node* temp2 = temp->next;
         temp->next = temp2->next;
         free(temp2);     
          
     }
     
}

void printList(){
     
    struct node* temp = head;
    int count = 1;
    printf("Printing the linked list\n");
    
    if ( head!=NULL){
       printf("data number %d is = %d\n",count++,temp->data);
       temp=temp->next;
    }
    while (temp !=head){
          
        printf("data number %d is = %d\n",count++,temp->data);
        temp=temp->next;       
    }
    //printf("data number %d is = %d\n",count++,temp->next->data);
    printf("\n");     
}


int main(){
    
 insertAtEnd(3);   
 insertAtEnd(2);
 insertAtEnd(8);
 insertAtEnd(5);
 insertAtEnd(15);
 
 printList();

 removeNode(8);
 insertAtFirst(1);
 insertAtFirst(19);
 printList();
 getchar();
   
}

