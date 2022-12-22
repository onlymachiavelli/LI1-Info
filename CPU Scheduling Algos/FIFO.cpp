#include  <bits/stdc++.h>

using namespace std ; 
typedef struct CPU{
    string name ; 
    int duration ; 
    int arrival ; 
}cpu;


int getData() {
    int n; 
    cout << "Enter the data ! " << endl ; 
    cin >> n ; 

    if (n > 0 ) return n ; 
    return getData() ; 
}

string notEmpty () {
    cout << "Enter the datas ! " << endl; 
    string data ; 
    cin >> data ; 
    if (data.length() > 0) {
        return data ; 
    }
    return notEmpty() ; 
}
int main () {
    

    vector <CPU> PROCESSORS ; 
    unsigned int n , CPU_NUMBER; 
    cout << "How many datas are they ? " << endl; 
    n = getData() ; 
    cout << "How many CPU are they ? " << endl ; 
    CPU_NUMBER = getData() ; 
    CPU def ; 
    unsigned int i = n ; 
    float Res = 0 ; 

    while (i--) {
        cout << "Enter the Name of the CPU ! " << endl ; 
        def.name = notEmpty() ; 
        cout << "Enter the duration of this CPU's data ! " << endl ; 
        def.duration = getData() ; 
        cout << "Enter the Arrival time of this CPU's data ! " << endl ; 
        def.arrival = getData() ; 
        PROCESSORS.push_back(def) ; 
    }
    
    return 0 ; 
}