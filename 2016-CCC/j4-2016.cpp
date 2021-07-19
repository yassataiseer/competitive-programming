#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <string>

using namespace std;


int solve(int hour, int minutes){
    int total_minutes=240;
    while (true){
        if (total_minutes==0){
            break;
        }
        if(((7 <= hour) && ( hour<10))||((15 <= hour) && ( hour<19))){
            total_minutes--;
        }
        else{
            total_minutes=total_minutes-2;
        }
        minutes++;
        if(minutes>=60){
            minutes=0;
            hour++;
        }
        if(hour>24){
            hour=1;
        }
    }
    if (hour < 10){
       cout << "0"<<hour;}
    else{
        cout <<hour;
    }
    cout << ":";
    if(minutes < 10){
        cout <<"0"<<minutes<<endl;
    }
    else{
        cout <<minutes<<endl;
    }
    return 0;
}


int main(){
    string hour;
    string min;
    string data;
    cin >> data;
    for(int i=0;i<5;i++){
        if(data[i]==':'){

        }
        else if(i<3){
            hour+=data[i];
        }
        else{
            min+=data[i];
        }
    }
    solve(stoi(hour),stoi(min));
    return 0;
}
