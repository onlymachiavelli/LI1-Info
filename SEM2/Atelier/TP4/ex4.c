#include <stdio.h>


typedef struct{
    float x,y; 

}POINT;

void fillPoint (POINT *p){
    printf("Enter x \n"); 
    scanf("%f", &(p->x));
    printf("Enter y \n");
    scanf("%f", &(p->y));

    //clean the buffer 

    getchar();    
}

void print(POINT p){
    printf("The point is (%f, %f) \n", p.x, p.y);
}

void Replace (POINT *p , float a, float b)  {
    p->x += a;
    p->y += b; 
}

POINT Mid(POINT p, POINT w){

    POINT mid; 
    mid.x = (p.x + w.x)/2;
    mid.y = (p.y + w.y)/2; 
    return mid; 
}

int main () {

    //enter a point 
    POINT p, w;
    fillPoint(&p);
    fillPoint(&w);

    //replace
    Replace(&w, 3, 8);
    //middle 
    POINT mid = Mid(p, w);
    //print
    printf("The A point is : ");
    print(p);
    printf("\nThe B point is : ");
    print(w);
    printf("\nThe middle point is : ");
    print(mid);




    return 0; 
}

