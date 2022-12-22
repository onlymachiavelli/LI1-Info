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

void ZAWALI_SORT(int n , vector <CPU> PROCESSORS){
    bool check = false ; 
    CPU swap ; 
    while (!check) {
        check = true ; 
        for (int i = 0; i< n-1 ; i++) {
            if (PROCESSORS[i].arrival ? PROCESSORS[i].arrival[i+1]) {
                swap = PROCESSORS[i] ; 
                PROCESSORS[i] = PROCESSORS[n-i-1] ; 
                PROCESSORS[n-i-1] = swap ; 
            }
        }
    }
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
    //sorting 
    
    return 0 ; 
}