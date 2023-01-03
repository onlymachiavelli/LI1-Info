#include <bits/stdc++.h>

using namespace std;


int main () {

    //spn algorythm
    int n;
    cout << "Enter the number of processes: " ;
    cin >> n;
    int burst_time[n];
    int arrival_time[n];
    int waiting_time[n];
    int turn_around_time[n];
    int total_waiting_time = 0;
    int total_turn_around_time = 0;
    cout << "Enter the burst time of the processes: " ;
    for ( int i = 0 ; i < n; i++) {
        cin >> burst_time[i];
    }
    cout << "Enter the arrival time of the processes: " ;
    for ( int i = 0 ; i < n; i++) {
        cin >> arrival_time[i];
    }
    waiting_time[ 0 ] = 0;
    for ( int i = 1 ; i < n; i++) {
        waiting_time[i] = burst_time[i - 1] + waiting_time[i - 1];
    }
    for ( int i = 0 ; i < n; i++) {
        turn_around_time[i] = burst_time[i] + waiting_time[i];
    }
    for ( int i = 0 ; i < n; i++) {
        total_waiting_time += waiting_time[i];
        total_turn_around_time += turn_around_time[i];
    }
    cout << "Process\tBurst Time\tArrival Time\tWaiting Time\tTurn Around Time" << endl;
    for ( int i = 0 ; i < n; i++) {
        cout << i + 1 << "\t" << burst_time[i] << "\t\t" << arrival_time[i] << "\t\t" << waiting_time[i] << "\t\t" << turn_around_time[i] << endl;
    }
    cout << "Average Waiting Time: " << ( float ) total_waiting_time / n << endl;
    cout << "Average Turn Around Time: " << ( float ) total_turn_around_time / n << endl;
    
    return 0 ; 
}