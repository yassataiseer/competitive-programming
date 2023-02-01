#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;




int main(){

    vector<int> villages;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int village;
        cin>>village;
        villages.push_back(village);

    }
    sort(villages.begin(), villages.end());
    double answer = 0;
    
    double first;
    double scnd;
    double third;
    for(int i=0;i<villages.size();i++){
        if(i==0){
            first= villages[i];   
        }else if(i==1){
            scnd = villages[i];
        }else{
            third = villages[i];
            double distance = abs(scnd-first)/2+abs(third-scnd)/2;

            if(answer==0){
                answer = distance;
            }else{
                answer= min(answer,distance);
            }
            first = scnd;
            scnd = third;
        }
    }
        cout << fixed << showpoint;
    cout << setprecision(1);
    cout<<answer<<endl;

}