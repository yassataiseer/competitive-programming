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
    int m,n;
    cin>>m;
    cin>>n;
    int answer = 0;
    vector<vector<char> > Grid(m, vector<char> (n, 'B'));
    int strokes;
    cin >> strokes;
    for(int i=0;i<strokes;i++){
        char action;
        cin>>action;
        int length;
        cin>>length;
        if(action=='R'){
            for(int i=0;i<n;i++){
                if(Grid[length-1][i]=='B'){
                Grid[length-1][i]='G';
                answer++; 
                }else{
                Grid[length-1][i]='B';
                answer--;                
                }

            }
        }
        else if(action=='C'){
            for(int i=0;i<m;i++){
                if(Grid[i][length-1]=='B'){
                Grid[i][length-1]='G';
                answer++; 
                }else{
                Grid[i][length-1]='B';
                answer--;                
                }

            }
        }
        
    }
    cout<<answer<<endl;
    return 0;
}