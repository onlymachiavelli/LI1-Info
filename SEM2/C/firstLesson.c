#include <stdio.h>

int main () {

    int n = 5, counter = 0 ; 
    for (int i =0; i< n ; i++) {
        for (int j=0;j<i;j++) {
            ++counter ; 
        }
    }

    printf("%d", counter) ; 
    return 0 ; 
}