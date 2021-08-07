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



int main(){
    int cases;
    cin >> cases;
    string action[cases];
    int time[cases];
    map<int, int> time_sheet;
    map<int, int> other_sheet;
    vector<int> no_reply;
    int current_time = 0;
    for(int i=0;i<cases;i++){
        char current_action;
        int friend_num;
        cin >> current_action>>friend_num;
        if(current_action=='W'){
            current_time+=friend_num-1;
        }
        else if(current_action=='R'){
            if(time_sheet.find(friend_num)!=time_sheet.end()){
                other_sheet[friend_num]=current_time;

            }
            else{
            time_sheet[friend_num] = current_time;
            }
            no_reply.push_back(friend_num);
            current_time++;
        }
        else{
           // cout << "current_time "<<current_time<<endl;
            if(other_sheet.find(friend_num)!=other_sheet.end()){
                time_sheet[friend_num] += abs(current_time-other_sheet[friend_num]);
                other_sheet.erase(friend_num);
            }
            else{
                time_sheet[friend_num] = abs(current_time-time_sheet[friend_num]);
            }
                no_reply.erase(remove(no_reply.begin(), no_reply.end(), friend_num), no_reply.end());

            
            
            current_time++;
        }
        
    }
    
    for(int i=0;i<no_reply.size();i++){
        time_sheet[no_reply[i]]= -1;
    }

    map<int, int>::iterator time_sheets;
    for (time_sheets = time_sheet.begin(); time_sheets != time_sheet.end(); time_sheets++)
    {
        cout << time_sheets->first<<" "<<time_sheets->second<<endl;
    }
}