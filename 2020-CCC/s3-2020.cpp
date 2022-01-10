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



int assimulate(vector<string> Combinations,string H){
    int answer = 0;
    int size = H.size();
    int i=0;
    int NeedleSize = Combinations[0].size();
    set<string> PreVal;
    while(i+NeedleSize<=size){
        string TmpVal = H.substr(i,NeedleSize);
        int tmpSize = PreVal.size();
        PreVal.insert(TmpVal);
        if(PreVal.size()>tmpSize){
            if (find(Combinations.begin(), Combinations.end(),TmpVal)!=Combinations.end()){
                answer++;
            }
        }
        

        i++;
    }

    return answer;
}

vector<string> Permutations(string Text){
    vector<string> answer;
    do{
        //cout<<Text<<endl;
        answer.push_back(Text);
    }while(next_permutation(Text.begin(),Text.end()));
    return answer;
}

int main(){
    string N;
    cin>>N;
    string H;
    cin>>H;
    vector<string> Combinations = Permutations(N);
    cout<<assimulate(Combinations,H)<<endl;
    return 0;
}