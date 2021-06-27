#include <iostream>
#include <string>
using namespace std;
string solve(int fence_length[],int fence_width[],int fence){
    double total = 0;
    for (int i=0;i<fence;i++){
        double length = fence_length[i]+fence_length[i+1];
        length = length/2;
        total += length*fence_width[i];
    }
    string str = to_string(total);
    return str;
}


int main(){
    int fence;
    cin >> fence;
    int fence_length[fence+1];
    int fence_width[fence];
    for (int i=0;i<fence+1;i++){
        cin >> fence_length[i];
    }
    for (int x =0;x<fence;x++){
        cin >> fence_width[x];
    }
    cout << solve(fence_length,fence_width,fence)<<endl;
    return 0;
}


