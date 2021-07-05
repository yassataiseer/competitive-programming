#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>

using namespace std;
char solve(int charge, int initial_pos[],int final_pos[]){
    int x_sums = abs(initial_pos[0]-final_pos[0]);
    int y_sums = abs(initial_pos[1]-final_pos[1]);
    charge = charge - x_sums-y_sums;
    if (charge<0||charge%2!=0){
        return 'N';
    }
    return 'Y';


}


int main(){
    int initial_pos[2];
    int final_pos[2];
    cin >> initial_pos[0]>>initial_pos[1];
    cin >> final_pos[0]>>final_pos[1];

    int charge;
    cin >> charge;
    cout << solve(charge,initial_pos,final_pos)<<endl;
    return 0;
}