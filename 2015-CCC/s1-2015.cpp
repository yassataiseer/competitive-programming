
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>

using namespace std;

int solve(int size, int data[]){
    vector<int> fixed_data;
    for (int i=0;i<size;i++){
        if (data[i]!=0){
            fixed_data.push_back(data[i]);
        }
        else{
            fixed_data.pop_back();
        }
    }
    return accumulate(fixed_data.begin(),fixed_data.end(),0);
}


int main(){
    int test_cases;
    cin >>test_cases;
    int data[test_cases];
    for (int i=0;i<test_cases;i++){
        cin >> data[i];
    }
    cout << solve(test_cases,data)<<endl;
    return 0;
}