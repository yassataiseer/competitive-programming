#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <string>

using namespace std;

int solve(string line){
    int answer=0;
    string rline(line.rbegin(), line.rend());
    if(rline==line){
        return line.length();
    }
    for(int i=0;i<line.length();i++){
        int amount = line.length()-i;
        amount = abs(amount);
        for(int x=0;x<amount;x++){
            int amount2 = amount-x;
            string newLine = line.substr(i,abs(amount2));
            
            string newrLine(newLine.rbegin(), newLine.rend());
            if(newLine==newrLine){
                if(answer<newLine.length()){
                    answer = newLine.length();
                }
            }
        }
    }
    return answer;
}

int main(){
    string data;
    cin >> data;

    cout << solve(data)<<endl;
    return 0;
}