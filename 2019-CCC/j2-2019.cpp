#include <iostream>
using namespace std;

int solve(int testcases,int numbers[],string character[]){
    for (int i=0; i<testcases;i++)
    {
        for(int x = 0; x<numbers[i];x++){
            cout << character[i];
        }
        cout << "\n";
    }
    return 0;
}
int main() {
    int test_cases;
    //string answer(3,'x');
    //cout << answer;
    cin >> test_cases;
    int numbers[test_cases];
    string character[test_cases];
    for(int i=0;i<test_cases;i++){
        cin >> numbers[i] >> character[i];
    }

    solve(test_cases,numbers,character);
    return 0;
}