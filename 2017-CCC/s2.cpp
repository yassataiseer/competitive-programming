#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;

void solve(int size, vector<int> data){
    int small = size/2;
    int big = (size/2)+1;
    if(size%2==0){
        small--;
        big--;
    }

	
    for(int i =0;i<size;i++){
        if(i%2==0){

            cout << data[small]<<" ";
            small--;
        }
        else{
            cout << data[big]<<" ";
            big++;
        }


    }
    cout << endl;
}

int main(){
    int sizes;
    cin >> sizes;
    vector<int> data;
    for(int i=0;i<sizes;i++){
        int amount;
        cin >> amount;
        data.push_back(amount);
    }
    sort(data.begin(),data.end());
    solve(sizes,data);
    return 0;
}