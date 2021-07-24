#include <iostream>
#include <map>
#include <string>

#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;

float solve(map<int, int> coordinates,int size){
    vector<float> answers;
    int counter=0;
    int time;
    int location;
    //sort (coordinates.begin(), coordinates.end()); 
    map<int, int>::iterator coordinate;
    for (coordinate = coordinates.begin(); coordinate != coordinates.end(); coordinate++)
    {
        if(counter==0){
            time=coordinate->first;
            location=coordinate->second;

        }
        else{
            float time_diff = abs(time-coordinate->first);
            float location_diff = abs(location-coordinate->second);
            float speed = (location_diff/time_diff)/1.0;
            answers.push_back(speed);
            time=coordinate->first;
            location=coordinate->second;
        }
        counter++;
    }


    return *max_element(answers.begin(),answers.end());
}


int main(){
    int size;
    cin >> size;
    map<int, int> coordinates;
    for(int i=0;i<size;i++){
        int time;
        int location;
        cin >>time >> location;
        coordinates.insert(pair<int, int>(time, location));

    }
    cout << fixed << showpoint;
    cout << setprecision(1);
    cout << solve(coordinates,size) <<endl;
    return 0;
}