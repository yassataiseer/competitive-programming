#include <iostream>
#include <map>
#include <string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
#include <set>
#include <stack>    
using namespace std;
int answer = 0;

void traverse(int CurrentSum){


}

int main(){
    int number;
    cin>>number;
    if(number%5==0){
        answer++;
    }
    
    //traverse(number);
    while(number>0){
        number-=4;
        if(number%5==0){
            
            answer++;
        }
    }
    cout<<answer<<endl;
    return 0;
}