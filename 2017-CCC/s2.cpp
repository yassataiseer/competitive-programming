#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;


int main(){

    int N;
    cin>>N;
    vector<int> data;
    for(int i=0;i<N;i++){
        int val;
        cin>>val;
        data.push_back(val);
    }
    sort(data.begin(),data.end());
    if(N%2!=0){
        
        int pointer1 = N/2;
        int pointer2 = N/2+1;

        while(pointer2!=N){
            cout<< data[pointer1]<<" "<<data[pointer2]<<" ";
            pointer1--;
            pointer2++;
        }

        if(pointer1==0){
            cout<<data[0];
        }
    }else{

        int pointer1 = N/2-1;
        int pointer2 = N/2;

        while(pointer2!=N){
            cout<< data[pointer1]<<" "<<data[pointer2]<<" ";
            pointer1--;
            pointer2++;
        }
        //2 3 7 10 40 50 90 110
    }

    cout<<endl;
    return 0;
}