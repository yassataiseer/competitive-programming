#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;


int max_solve(int size, vector<int> dmojistan,vector<int> pegland){
    int answer = 0;
    for(int i=0;i<size;i++){
        int max_value = *max_element(dmojistan.begin(),dmojistan.end());
        int min_value = *min_element(pegland.begin(),pegland.end());
        answer+=max(max_value,min_value);
        dmojistan.erase(remove(dmojistan.begin(), dmojistan.end(), max_value), dmojistan.end());
        pegland.erase(remove(pegland.begin(), pegland.end(), min_value), pegland.end());
    }

    return answer;
}

int min_solve(int size, vector<int> dmojistan,vector<int> pegland){
    int answer = 0;
    for(int i=0;i<size;i++){
        int min_value_dmoj = *max_element(dmojistan.begin(),dmojistan.end());
        int min_value_pegland = *max_element(pegland.begin(),pegland.end());
        answer+=max(min_value_dmoj,min_value_pegland);
        dmojistan.erase(remove(dmojistan.begin(), dmojistan.end(), min_value_dmoj), dmojistan.end());
        pegland.erase(remove(pegland.begin(), pegland.end(), min_value_pegland), pegland.end());
    }

    return answer;
}   


int main(){
    int option;
    cin >> option;
    int people;
    cin >> people;
    vector <int> dmojistan;
    vector <int> pegland;
    for(int i=0;i<people;i++){
        int num;
        cin >> num;
        dmojistan.push_back(num);
    }
    for(int x=0;x<people;x++){
        int num1;
        cin >> num1;
        pegland.push_back(num1);
    }
    if(option==1){
        cout << min_solve(people,dmojistan,pegland)<<endl;
    }
    else{
        cout << max_solve(people,dmojistan,pegland)<<endl;
    }
    return 0;
}

