#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>
#include<algorithm>
#include<iterator> 

using namespace std;

bool Check_Prime(int num){
    for(int i =2;i<round(num/2);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int solve(int number){
    int answer = 0;
    int sqr = floor(sqrt(number));
    if (Check_Prime(number)){
        answer = (number*2)+2;
        return answer;
    }
    if(sqrt(number)== sqr){
        return sqrt(number)*4;
    }
    answer += 2*sqr;
    answer += 2*(number/sqr);
    return answer;

}


int main(){
    int num;
    cin >> num;

    cout << solve(num)<<endl;
    return 0;
}