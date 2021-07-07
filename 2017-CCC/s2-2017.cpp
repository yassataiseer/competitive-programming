#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;
void solve(int size, vector<int> data){
    vector<int> big;
    vector<int> small;
    for (int i=0;i<size;i++){
        int big_num= *max_element(data.begin(), data.end());
        int small_num= *min_element(data.begin(), data.end());
        big.push_back(big_num);
        small.push_back(small_num);
        data.erase(remove(data.begin(), data.end(), big_num), data.end());
        data.erase(remove(data.begin(), data.end(), small_num), data.end());
    }

    for(int x=round(size/2-1);-1<x;x--){
        cout << small[x] << " " <<big[x]<<" ";
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
    solve(sizes,data);


    return 0;
}