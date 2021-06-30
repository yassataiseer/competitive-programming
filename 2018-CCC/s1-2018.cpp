#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>

using namespace std;

double solve( int numbers[], int size){
    //vector<double> potential_answers;
    string potential_answers[size];
    sort(numbers, numbers+size);
    double final_answer=0.0;
    for (int i=0; i<size;i++){
        if(i==0||i+1==size){
        }
        else{
            double answer = 0;
            double mid = numbers[i]/1.0;
            double front = numbers[i+1]/1.0;
            double back = numbers[i-1]/1.0;//not ideal ik
            answer += ((mid-back)/2.0);
            answer += ((front-mid)/2.0);
            if (answer<final_answer||final_answer==0){
                final_answer = answer/1.0;
            }
        }
    }
    return final_answer;

}

int main(){
    cout << setprecision(1) << fixed;
    int test_cases;
    cin >> test_cases;
    int numbers[test_cases];
    for (int i= 0;i<test_cases;i++){
        cin >> numbers[i];
    }
    
    double answer = solve(numbers,test_cases)/1.0;
    cout << answer/1.0 << endl;
    return 0;
}





