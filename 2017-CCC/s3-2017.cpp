#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <map>
using namespace std;
void solve(vector<int> wood_pieces){
    int wood_sum = accumulate(wood_pieces.begin(),wood_pieces.end(),0);
    map<int,int> boards;
    for(int i=0;i<wood_pieces.size();i++){
        for(int x=i+1;x<wood_pieces.size();x++){
            int current_length = wood_pieces[i]+wood_pieces[x];

            map<int, int>::iterator it = boards.find(current_length); 
            if (it != boards.end()){
                it->second += 1;
            }else{
                boards[current_length] = 1;
            }
        }
    }
    int counter = 0;
    int max_num = 0;
    map<int, int>::iterator it;
    
    for (it = boards.begin(); it != boards.end(); it++)
    {
        if (it->second>max_num){
            max_num = it->second;
            counter = 0;
        }
        if(max_num==it->second){
            counter++;
        }
    }   
    cout<<max_num<<" "<<counter<<endl;

}
int main(){
    int testcases;
    cin >> testcases;
    vector<int> wood_pieces;
    for(int i=0;i<testcases;i++){
        int wood;
        cin >> wood;
        wood_pieces.push_back(wood);
    }
    solve(wood_pieces);
    return 0;
}