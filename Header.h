//
//  Header.h
//  ReverseLinkedList
//
//  Created by Sumitha on 6/3/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#ifndef Header_h
#define Header_h

struct node{
    int data;
    struct node* next;
};
static struct node* head = NULL;

node* insert(struct node* head,int data){
    struct node* ptr = new node;
    ptr -> data= data;
    ptr -> next=NULL;
    if(head == NULL){
        head = ptr;
    }
    
    else{
        struct node* temp = head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
    }
    return head;
}

node* reverse(node* head){
    
    //If the linked list is empty
    if(head == NULL){
    return head;
    }
    
    //Initializing previous, current and next pointers
    struct node* prev = NULL;
    struct node*current = head;
    struct node* next = NULL;
   
    //Reverse the pointer for each link by traversing through the list
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
    return head;
}

//Display items in the linked list
void displayList()
{
    //Initializing a pointer temp and pointing it to head
    struct node* temp=head;
    
    //Traversing through the list until the last item is reached
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

#endif /* Header_h */
