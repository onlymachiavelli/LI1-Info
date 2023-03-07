#include <stdio.h>
#include <string.h>


typedef struct {
    int day, month, year; 
}date; 


typedef struct {
    char name[50], lname[50] , mat[10]; 
    date birth;

}person; 
int main () {

        person p ;
        strcpy(p.name, "Amer") ;
        strcpy(p.lname, "Salem") ; 
        strcpy(p.mat, "A32") ;
        p.birth.day = 3;
        p.birth.month = 4;
        p.birth.year = 1998; 

        // print 
        printf("Name: %s And last name %s your MAT is %s and your bday is %d/%d/%d", p.name, p.lname, p.mat, p.birth.day, p.birth.month , p.birth.year ); 

        return 0 ; 
}


