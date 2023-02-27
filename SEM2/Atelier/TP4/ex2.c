#include  <stdio.h>


typedef struct  person {
    char *name ;
    char *lname; 
    char *date ; 

    char *mat; 
}person;
int main () {


    person p ; 
    p.name = "Amer"; 
    p.lname = "Salem" ;
    p.date = "03/04/1998";
    p.mat = "A32" ;

    printf("Welcome %s %s , your bday is in %s and your matri is %s", p.name, p.lname, p.date, p.mat) ;  

    

}