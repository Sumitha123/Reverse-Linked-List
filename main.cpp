//
//  main.cpp
//  ReverseLinkedList
//
//  Created by Sumitha on 6/3/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Header.h"
int main() {
    
    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    head = insert(head,5);
    head = insert(head,6);
    
    cout << "Linked List : ";
    displayList();
    head = reverse(head);
    
    cout << "Reversed Linked List : ";
    displayList();

    
    return 0;
}
