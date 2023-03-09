#include <stdio.h>


typedef struct {
    int head ; 
    NODE *next ; 
}NODE;



NODE *fill (int n) {\
    //allocating the list 
    NODE *node = (NODE*) malloc(sizeof(NODE*)) ; 
    node->head = 0; 
    node->next = NULL ; 
    int e ;
    for (int i = 0; i<n;i++) {
        printf("Enter data ! \n") ; 
        scanf("%d", &e) ; 
        NODE*tmp= (NODE*)malloc(sizeof(NODE*)) ; 
        tmp->head = e; 
        tmp->next = node ; 
        node = tmp; 

        
    }

    return node ; 
}
int main () {

    NODE *Node = fill(10) ; 



    return 0; 
}