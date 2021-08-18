#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;


void solve(map<string, string> table,int steps, string init_string,string final_string){
    string current_string = init_string;
    
    for(int i=0;i<steps;i++){
        string temp_string = ""; 
        for(int x=current_string.size();x>0;x--){
            string substring ;
            string startstring;
            int value;
            if(x==current_string.size()){
                substring = current_string.substr(x-1,current_string.size());
                startstring = current_string.substr(0,x-1);
                value = x-1;
            }
            else{
                substring = current_string.substr(x,current_string.size());
                startstring = current_string.substr(0,x);
                value = x;
            }
            string finalstr = startstring+substring;
            if(table.find(substring)!=table.end()){
                if((startstring+table[substring]).size()>final_string.size()){
                    
                }
                else{
                    temp_string = startstring+table[substring];
                    cout << distance(table.begin(),table.find(substring))+1<<" "<<value+1<<" "<<temp_string<<endl;
                    if(temp_string!=current_string){
                        break;
                    }
                }

            } 
        }
        current_string = temp_string;
    }
}



int main(){
   map<string, string> table; 
    for(int i=0;i<3;i++){
        string key;
       string value;
       cin >> key>>value;
       table[key] = value;
    }
    int steps;
    string init_string;
    string final_string;
    cin >> steps>>init_string>>final_string;
    solve(table,steps,init_string,final_string);
}
