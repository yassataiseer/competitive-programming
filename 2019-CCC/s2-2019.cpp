#include <iostream>
#include <string>
#include<math.h>
using namespace std;


bool check(int number){
    for (int i=2;i<=sqrt(number);i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
int solve(int number1, int number2){
    while (true){
        if (check(number1) and check(number2)){
            cout << number1 <<" "<<number2 << endl;
            break;
        }
        number1++;
        number2--;
    }
    return 0;
}

int main(){

    int test_cases;
    cin >> test_cases;
    int number1[test_cases];
    for (int i =0; i< test_cases;i++){
        cin >> number1[i];
    }
    for (int x=0; x<test_cases;x++){
        solve(number1[x],number1[x]);
    }
    //solve(8,8);

    return 0;
}






