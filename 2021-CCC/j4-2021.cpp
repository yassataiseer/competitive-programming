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

int solve(vector<int> values){
    int answer=0;
    cout<<values.size()<<endl;
    for(int i=0;i<values.size();i++){
        if(values[i]==3){

        }else{
        int max_val = *max_element(values.begin()+i,values.end());
            if(max_val>values[i]){
                answer++;
                auto index = find(values.begin()+i, values.end(), max_val);
                int max_index = index-values.begin();
                int prev_val = values[i];
                values[i] = max_val;
                values[max_index] = prev_val;
            }
        }

    }    
    return answer;
}

int main(){
    map<char,int> mapped_vals;
    mapped_vals['L'] = 3;
    mapped_vals['M'] = 2;
    mapped_vals['S'] = 1;
    vector<int> values;

    string input;
    cin>>input;
    for(char letter: input){
        values.push_back(mapped_vals[letter]);
    }
    cout<<solve(values)<<endl;
    return 0;
 }