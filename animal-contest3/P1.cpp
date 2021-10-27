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


string solve(int A, int B, int C, int D){
    string answer = "Stay home";
    if(A<B){
        answer = "Go to the grocery store";
        if(C<D){
            answer = "Go to the department store";
        }
    }else if(C<D){
        answer = "Go to the pharmacy";
    }
    
    
    return answer;
}

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    cout<<solve(A,B,C,D)<<endl;
}