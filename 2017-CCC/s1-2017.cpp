#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;
int solve(int size, vector<int> swifts, vector<int> semaphores){
    int answer = 0;
    int sum =0;
    int sum2 = 0;
    if (accumulate(swifts.begin(),swifts.end(),sum)==accumulate(semaphores.begin(),semaphores.end(),sum2)){
        return size;
    }
    sum =0;
    sum2=0;
    for (int i=0;i<size;i++){
        sum += swifts[i];
        sum2+=semaphores[i];
        if (sum==sum2){
            answer=i+1;
        }

    }
    return answer;
}
int main(){
    int test_cases;
    cin >>  test_cases;
    vector<int> swifts;
    vector<int> semaphores;
    int test;
    for(int i=0;i<test_cases;i++){
        cin >> test;
        swifts.push_back(test);
    }
    for(int i=0;i<test_cases;i++){
        cin >> test;
        semaphores.push_back(test);
    }
    cout << solve(test_cases,swifts,semaphores)<<endl;
}