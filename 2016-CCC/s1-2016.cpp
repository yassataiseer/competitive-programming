#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;

bool solve( string line1,string line2){
    int asterick_count = count(line2.begin(), line2.end(), '*');

    string prev_char = "";
    for(int i=0;i<line2.length();i++){
        
       int line1_amount = count(line1.begin(), line1.end(), line1[i]);
       int line2_amount = count(line2.begin(), line2.end(), line1[i]); 
        

        if(count(prev_char.begin(),prev_char.end(),line1[i])>0){
        }
        else{
            if(line1_amount==line2_amount){
                
            }
            else{
                asterick_count -= abs(line1_amount-line2_amount);

            }

        }
        if(asterick_count<0){
            return false;
        }
        prev_char+=line1[i];
    }
    return true;



}


int main(){
    string line1;
    string line2;
    cin >> line1;
    cin >> line2;
    if(solve(line1,line2)){
        cout << "A"<<endl;
    }
    else{
        cout << "N"<<endl;
    }
}