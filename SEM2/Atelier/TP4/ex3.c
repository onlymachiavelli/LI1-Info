#include <stdio.h>
#include <string.h>



typedef struct {
    int hour, sec, minute; 

}TIME ;


typedef struct {
    int num ;
    char begin[50] , end[50] ;
    TIME beginT, endT; 

}BUS ; 


void addBusses(int n, BUS busses[n]) {
    //adding busses 
    char b[50], e[50] ; 
    for (int i = 0 ; i<n;i++) {
        printf("Enter the number of buss ! \n") ; 
        scanf("%d", &busses[i].num);
        printf("Enter the begin location of the bus ! \n") ;
        scanf("%s",&b);
        strcpy(busses[i].begin, b);
        printf("Enter the end location of the bus ! \n") ;
        scanf("%s",&e);
        strcpy(busses[i].end, e);
        printf("Enter the begin time of the bus ! (hh/mm/ss) \n") ;
        scanf("%d %d %d", &busses[i].beginT.hour, &busses[i].beginT.minute, &busses[i].beginT.sec);
        printf("Enter the end time of the bus ! (hh/mm/ss)  \n") ;
        scanf("%d %d %d", &busses[i].endT.hour, &busses[i].endT.minute, &busses[i].endT.sec);

    }
}

void printBus(int n , BUS busses[n], TIME begin , TIME end, char BEGIN[50], char END[50] ) {


    for (int i = 0; i < n; i++) {
    if (strcmp(busses[i].begin, BEGIN) == 0 && strcmp(busses[i].end, END) == 0 && 
        busses[i].beginT.hour == begin.hour && busses[i].beginT.minute == begin.minute && busses[i].beginT.sec == begin.sec &&
        busses[i].endT.hour == end.hour && busses[i].endT.minute == end.minute && busses[i].endT.sec == end.sec) {
        printf("Found one\n");
    }
}
}

void print(int n , BUS busses[n]) {
    for (int i = 0; i< n; i ++) {
        printf("The bus number is %d and it starts from %s and ends in %s and it starts at %d:%d:%d and it ends at %d:%d:%d \n", busses[i].num, busses[i].begin, busses[i].end, busses[i].beginT.hour, busses[i].beginT.minute, busses[i].beginT.sec, busses[i].endT.hour, busses[i].endT.minute, busses[i].endT.sec);
    }
}



void printHourBus(int n , BUS busses[n],char depart[50], char arrival [50] , TIME dep) {

    for (int i = 0; i < n; i++) {
    if (strcmp(busses[i].begin, depart) == 0 && strcmp(busses[i].end, arrival) == 0 &&
        busses[i].beginT.hour == dep.hour && busses[i].beginT.minute == dep.minute && busses[i].beginT.sec == dep.sec) {
        printf("The bus number is %d and it starts from %s and ends in %s and it starts at %d:%d:%d and it ends at %d:%d:%d\n", busses[i].num, busses[i].begin, busses[i].end, busses[i].beginT.hour, busses[i].beginT.minute, busses[i].beginT.sec, busses[i].endT.hour, busses[i].endT.minute, busses[i].endT.sec);
    }
}

    printf("\n") ; 
}
int main () {

    int n = 2 ; 

    BUS busses[n];
    //addBusses(n, busses);
    busses[0].num=42069;
    busses[1].num=5150;

    strcpy(busses[0].begin, "Nabeul") ; 
    strcpy(busses[0].end, "Tunis") ; 
    busses[0].beginT.hour = 12;
    busses[0].beginT.minute= 15;
    busses[0].beginT.sec=00;
    busses[0].endT.hour = 15;
    busses[0].endT.minute=20;
    busses[0].endT.sec=0;
    strcpy(busses[1].begin, "Sousse") ; 
    strcpy(busses[1].end, "Tunis") ; 
    busses[1].beginT.hour = 15;
    busses[1].beginT.minute= 30;
    busses[1].beginT.sec=00;
    busses[1].endT.hour = 18;
    busses[1].endT.minute=20;
    busses[1].endT.sec=0;
    TIME begin , end ; 
    begin.hour= 12; 
    begin.minute = 15  ; 
    begin.sec = 0; 
    end.hour = 15; 
    end.minute = 20; 
    end.sec = 0;
    print(2, busses) ; 
    printBus(2 , busses, begin, end ,"Nabeul", "Tunis");

    begin.hour = 15;
    begin.minute= 30;
    begin.sec = 0;
    printHourBus(2,busses, "Sousse", "Tunis" , begin) ; 




    return 0 ; 
}
