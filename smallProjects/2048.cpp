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


void printGrid (vector<vector<int>> gridSurf, int n ) {
    for (int i = 0; i< n;i++) {
        for (int j=0;j<n;i++) {
            cout << gridSurf[i][j]  << " ";  
        }
        cout << endl; 
    }
}


void initialGrid (vector <vector<int>> gridSurf, int n ) {
for (int i = 0; i< n;i++) {
        for (int j = 0; j< n ; j++) {
            gridSurf[i][j] = 0;

        }
    }
}

int main (){
    int n ; 
    //declare the matrix 
    vector <vector<int>> gameGrid ; 
    
    cout << "Enter N ! " << endl ; 

    n = getSize(3, 10) ; 
    
    
}