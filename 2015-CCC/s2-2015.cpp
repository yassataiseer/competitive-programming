
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>
#include <algorithm>

#include<map> 
using namespace std;

int solve(int stats_amount, int stats[], int school_size[], int jersies_size[]){
    int answer = 0;
    map<int, int> used; 
    for (int i=0; i<stats_amount;i++){
        if((stats[i]<=school_size[i])&& !(used.count(jersies_size[i])))
        {
            used[jersies_size[i]] = jersies_size[i];
            answer++;
        }
    }
    return answer;
}


int main(){
    int stats_amount;
    int team_amout;
    cin >> stats_amount;
    cin >> team_amout;
    int stats[team_amout];
    int school_size[stats_amount];
    int jersies_size[team_amout];
    for (int i=0;i<stats_amount;i++){
        string input;
        int add ;
        cin >> input;
        if (input=="S"){
            add = 1;
        }
        else if(input=="M"){
            add = 2;
        }
        else if(input=="L"){
            add= 3;
        }
        school_size[i] = add;
    }
    for (int x=0;x<team_amout;x++){
        string input1;
        cin >> input1 >> jersies_size[x];
        int add1;
        if (input1=="S"){
            add1 = 1;
        }
        else if(input1=="M"){
            add1 = 2;
        }
        else if(input1=="L"){
            add1= 3;
        }
        stats[x] = add1;
    }
    cout << solve(team_amout, stats,school_size,jersies_size) << endl;
    return 0;
}