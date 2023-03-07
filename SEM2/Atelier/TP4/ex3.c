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

    for (int i = 0 ; i<n;i++) {
        printf("Enter the number of busses ! \n") ; 
        scanf("%d", &busses[i].num);
        printf("Enter the begin of the bus ! \n") ;
        scanf("%s", busses[i].begin);
        printf("Enter the end of the bus ! \n") ;
        scanf("%s", busses[i].end);
        printf("Enter the begin time of the bus ! \n") ;
        scanf("%d %d %d", &busses[i].beginT.hour, &busses[i].beginT.minute, &busses[i].beginT.sec);
        printf("Enter the end time of the bus ! \n") ;
        scanf("%d %d %d", &busses[i].endT.hour, &busses[i].endT.minute, &busses[i].endT.sec);

    }
}

void printBus (int n , BUS busses[n], TIME begin , TIME end, char BEGIN[50], char END[50] ) {
    for (int i = 0; i< n; i++) {
        if (busses[i].begin == BEGIN && busses[i].end == END && busses[i].beginT.hour == begin.hour && busses[i].beginT.minute == begin.minute && busses[i].beginT.sec == begin.sec && busses[i].endT.hour == end.hour && busses[i].endT.minute == end.minute && busses[i].endT.sec == end.sec) {
            //print the bus 
            printf("The bus number is %d and it starts from %s and ends in %s and it starts at %d:%d:%d and it ends at %d:%d:%d", busses[i].num, busses[i].begin, busses[i].end, busses[i].beginT.hour, busses[i].beginT.minute, busses[i].beginT.sec, busses[i].endT.hour, busses[i].endT.minute, busses[i].endT.sec);
        }
    }
}



void printHourBus(int n , BUS busses[n]) {
    


}
int main () {

    //n ins the number of busses ! 
    int n ; 
    printf("Enter the number of the busses \n") ;
    scanf("%d", &n);

    BUS busses[n];
    addBusses(n, &busses);


    return 0 ; 
}
