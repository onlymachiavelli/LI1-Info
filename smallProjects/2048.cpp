#include <bits/stdc++.h> 


using namespace std ; 

int getSize (int min , int max ){
    int n ; 
    cout << "Enter the Number " << endl;
    cin >> n ; 
    if (min <= n <= max ) 
        return n ; 
    return getSize(min , max); 
}



int main (){
    int n ; 

    
    
}