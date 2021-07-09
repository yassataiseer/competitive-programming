#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>
#include<algorithm>
#include<iterator> 

using namespace std;


int solve(int size, int weights[]){
    int sum = 0;
    int car_count = 0;
    for(int i=0;i<size;i++){

        sum = accumulate(weights+i, weights+i+4, 0);
        if (sum>size){
            if(i==0){
                sum = 0;
                for (int x=0;x<3;x++){
                    sum = accumulate(weights, weights+x, 0);
                    if(sum>size){
                        if(car_count==0){
                            return car_count;
                        }
                        return car_count-1;
                    }
                    car_count++;
                }
            }
            return car_count;
        }
        if (i==0){
            car_count+=4;
        }
        else{
        car_count++;
        }
        
    }
    if(car_count>size){
        car_count=size;
    }
    return car_count;
    
}

int main(){
    int max_weight;
    cin >> max_weight;
    int size;
    cin >> size;
    int weights[size];
    for (int i= 0;i<size;i++){
        cin >> weights[i];
    }
    cout <<solve(max_weight,weights)<<endl;

}