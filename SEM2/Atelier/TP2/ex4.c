#include <stdio.h> 
int Interval() {
    int n ; 
    printf("Enter The number ! \n") ; 
    scanf("%d" , &n); 
    if (n > 0) return n ; 
    return Interval () ; 
}


int main () {
    int n = Interval();
    int arr[n] ; 
    int *PP = arr ; 
    while (PP < arr + n) {
        printf("Enter a data ! "); 
        scanf("%d", PP) ; 
        ++PP ; 
    }
    int *P = arr ; 
    while (P < arr+n) {
        printf("%d , " , *P) ; 
        ++P ; 
    }
    printf("\n");
    int x ; 
    printf("Enter the targetted Data ! \n") ; 
    scanf("%d" , &x) ;

    int count = 0 ; 


    int *Po = arr ; 
    while (Po < arr + n) {
        if (*Po == x ) {

            int *P1 = Po ; 
            while (P1 < arr + n - 1) {
                *P1 = *(P1+1) ; 
                ++P1 ; 
            }
            ++count ; 
        }
        ++Po ;
    }

    n = n-count  ; 
    int *Pr = arr ; 
    while (Pr < arr+n) {
        printf("%d , " , *Pr) ; 
        ++Pr ; 
    }
    return 0 ; 
}

