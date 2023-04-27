#include <stdio.h>
#include <stdlib.h>


typedef struct Node  {
    int data ; 
    struct Node *next ;

}Node; 



struct Node *fill(int n ){
    //declare head 
    struct Node *head = NULL; 
    struct Node *tmp = NULL;
    for (int i=0;i<n;i++) {
        struct Node *nw = (struct Node*)malloc(sizeof(Node)) ; 
        printf("Enter Data ! \n") ;
        scanf("%d", &nw->data );

        if (!head) {
            head = nw;
            tmp = head; 
        }
        else {
            tmp->next = nw;
            tmp = tmp->next;
        }
        
    }
}
int main ()  {


    Node *datas = fill(5);
    
    return 0 ;
}