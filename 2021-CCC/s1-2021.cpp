#include <iostream>
#include <string>
using namespace std;
float solve(int fence_length[],int fence_width[],int fence){
    float total = 0;
    for (int i=0;i<fence;i++){
        float length = fence_length[i]+fence_length[i+1];
        length = length/2;
        total += length*fence_width[i];
    }
    return total;
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


