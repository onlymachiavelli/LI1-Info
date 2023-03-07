#include <stdio.h>




typedef struct {
    int x, y; 

}POINT;


void fillPoint(POINT p) {
    printf("Enter the x and y of the point ! \n") ;
    scanf("%d %d", &p.x, &p.y);
}

void printPoint(POINT p) {
    printf("The point is (%d, %d) \n", p.x, p.y);
}

void Transi(POINT p ) {
    //replace point to another point 
    int temp = p.x;
    

    
}
int main () {
    POINT p1, p2;


    return 0 ; 
}