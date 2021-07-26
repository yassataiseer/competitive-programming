#include <iostream>
#include <map>
#include <string>

#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
#include <math.h>
#include <cmath>
#include <cfloat>

using namespace std;


void solve(int numbers[][2],int size){
    for(int i=0;i<size;i++){
        cout << numbers[i][0]<<" "<<numbers[i][1]<<endl;
        // divide by first converting to double
        // check the length after decimal, if it is greater than 
        cout << isinf((float)numbers[i][1]/(float)numbers[i][0])<<endl;
        if(isfinite((float)numbers[i][0]/(float)numbers[i][1])){
            double data = (float)numbers[i][0]/(float)numbers[i][1];
            string string_data = to_string(data);
            int decimal_point = string_data.find(".");
            string new_string = string_data.substr(decimal_point+1);
            int num =0;
            for(int x=new_string.length();x>0;x--){
                if(new_string[x]=='0'){
                    
                    num++;
                }
            }
            new_string = new_string.substr(0,new_string.length()-num);

            cout << new_string.length()<<endl;
            
        }
        else{
                cout << -1<<endl;

        }


        
    }
    
}


int main(){
    // int cases;
    // cin >> cases;
    // int numbers[cases][2];
    // for(int i=0;i<cases;i++){
    //     cin >> numbers[i][0]>>numbers[i][1];
    // }
    // solve(numbers,cases);
    double result = 1.0 / 3.0;
    cout << "The result is " << result << "\n";
    
    return 0;
}






