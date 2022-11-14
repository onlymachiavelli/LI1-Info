#include <bits/stdc++.h> 
using namespace std; 


struct Node{
    int data ; 
    struct Node *next ; 
};




int main () {

    struct Node*head= NULL ;
    head= (struct Node*) (malloc(sizeof(struct Node))) ; 
    struct Node * headd; 

    head->data = 1 ; 
   head->next->data =2 ; 
   head->next->next->data = 3 ; 

    headd = head; 
    while (headd != NULL) {
        printf("%d \n ", headd->data) ; 
        headd = headd->next ; 
    
    }
    
    


    return 0; 
}