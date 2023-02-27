#include <stdio.h>


struct HORAIRE{
    int min , hour, sec; 

    
};
struct BUS{
    int num;
    char *locDepart;
    char *locArr;
    struct HORAIRE depart ; 
    struct HORAIRE arrivee; 
};



void fillBus(int n, struct BUS busses[n]) {
    for (int i=0;i<n;i++){
            printf("Enter the num ! \n ") ; 
            scanf("%d",busses[i].num );
            printf("Enter the Starting Local ! \n ") ; 
            scanf("%s",busses[i].locDepart );
            printf("Enter the ending local ! \n ") ; 
            scanf("%s",busses[i].locArr );
            printf("Enter the Starting Hour ! \n ") ; 
            scanf("%d",busses[i].depart.hour );
            printf("Enter the Starting Min ! \n ") ; 
            scanf("%d",busses[i].depart.min );
            printf("Enter the Starting Sec ! \n ") ; 
            scanf("%d",busses[i].depart.sec );
            printf("Enter the Ending Hour ! \n ") ; 
            scanf("%d",busses[i].arrivee.hour );
            printf("Enter the Ending Min ! \n ") ; 
            scanf("%d",busses[i].arrivee.min );
            printf("Enter the Ending Sec ! \n ") ; 
            scanf("%d",busses[i].arrivee.sec );
            
        
    }
}


void printBusses(int n, struct BUS busses[n], struct HORAIRE depart, struct HORAIRE arriv) {

    for (int i = 0; i<n;i++) {
        if (
            busses[i].depart.hour == depart.hour &&1 
        ){
            printf("BUS NUM : %d, BUS STARTS FROM : %s, BUS ENDS AT %s, BUS STARTS AT %d-%d-%d AND ENDS AT %d-%d-%d \n", 
            busses[i].num, busses[i].locDepart, busses[i].locArr, busses[i].depart.hour,busses[i].depart.min, busses[i].depart.sec, busses[i].arrivee.hour,busses[i].arrivee.min, busses[i].arrivee.sec
        );
        }

    }
}
int main () {

    return 0 ;
}