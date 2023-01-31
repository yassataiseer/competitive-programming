#include <iostream>
#include <map>
#include <string>

#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>
#include<queue>	
using namespace std;



int main(){

    double answer = 0;

    map<int,int> Datamap;

    int rounds = 0;
    cin>>rounds;
    for(int i=0;i<rounds;i++){
        int time,distance;
        cin>>time>>distance;
        //Datamap[time] = distance;
        Datamap.insert(pair<int, int>(time, distance));
    }
    map<int, int>::iterator coordinate;
    double time,location;
    double counter = 0;

    for (coordinate = Datamap.begin(); coordinate != Datamap.end(); coordinate++)
    {
        
        if(counter==0){
            time=coordinate->first;
            location=coordinate->second;
        }
        else{
            double time_diff = abs(time-coordinate->first);
            double location_diff = abs(location-coordinate->second);
            double newSpeed = (location_diff/time_diff);
            
            answer = max(newSpeed,answer);
            time=coordinate->first;
            location=coordinate->second;
        }
        counter++;
    }

        cout << fixed << showpoint;
    cout << setprecision(1);
    cout<<answer<<endl;
    return 0;
}