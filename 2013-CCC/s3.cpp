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
#include <queue>
#include <sstream>
using namespace std;



int main(){
    int favTeam;
    cin>>favTeam;
    int currentScoreLen;
    cin>>currentScoreLen;
    vector<int> score;
    score.push_back(0);
    score.push_back(0);
    score.push_back(0); 
    score.push_back(0);   
    
    vector<int> plays;
    plays.push_back(3);
    plays.push_back(3);
    plays.push_back(3); 
    plays.push_back(3);

    for(int i=0;i<currentScoreLen;i++){
        int a;
        int b;
        int scorea;
        int scoreb;
        cin>>a;
        cin>>b;
        cin>>scorea;
        cin>>scoreb;
        plays[scorea]-=1;
        plays[scoreb]-=1;
        if(scorea>scoreb){
            score[a-1]+=3;
        }else if(scorea<scoreb){
            score[b-1]+=3;
        }else{
            score[a-1]+=1;
            score[b-1]+=1;
        }
    }
    int answer = 0;
    int timeLeft = 6-currentScoreLen;
    for(int i=0;i<timeLeft;i++){
        int max_val = *max_element(score.begin(),score.end());
        int current_score = score[favTeam-1];
        int current_plays = 3-plays[favTeam-1];
        int tempCurrent_plays =  3-plays[favTeam-1];
        while(current_plays!=0){
            int potential = current_plays*3;
            if(max_val<potential+current_score){
                answer++;
                potential = potential+(tempCurrent_plays-current_plays);
                if(potential>max_val){
                    if(max_val==score[favTeam-1]){
                        answer++;
                    }else{
                        if(max_val){
                            
                        }   
                    }
                }                
            }
        }

    }
    
    cout<< answer<<endl;
    return 0;
}