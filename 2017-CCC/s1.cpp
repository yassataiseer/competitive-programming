#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;
int main(){
    int answer = 0;

    int N;
    cin>>N;
    int sum1=0;
    int sum2=0;
    vector<int> Line1;
    vector<int> Line2;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        Line1.push_back(x);
    }
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        Line2.push_back(x);
    }
    for(int i=0;i<N;i++){
        sum1+=Line1[i];
        sum2+=Line2[i];
        if(sum2==sum1){
            answer = i+1;
        }
    }    

    cout<<answer<<endl;
    return 0;
}