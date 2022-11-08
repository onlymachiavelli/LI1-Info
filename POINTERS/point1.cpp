#include <bits/stdc++.h>

using namespace std; 


struct Node{ 


    int head; 
    struct Node*next ; 
} ; 
int main () {
    struct Node*TopG ; 
    struct Node*data; 

    TopG = (struct Node *) malloc(sizeof(struct Node)) ; 
    data = (struct Node*) malloc(sizeof(struct Node)) ; 
    TopG->head = 1; 
    TopG->next->head=2; 
    TopG->next->next->head = 3 ; 

    data->head = TopG->head; 
    while (data) {
        printf("%dhello world" , data->head) ; 
        data->head = TopG->next->head;


    }
    return 0 ; 
} 