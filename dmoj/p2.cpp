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
    int C,M;
    cin >>C;
    cin>>M;
    int answer = 0;
    map<int,int> datamap;
    vector<int> Princesses;
    for(int i=0;i<C;i++){
        int N,K;
        cin>>N;
        cin>>K;
        if(K<=M){
            datamap[N]=K;
        }
    }
    map<int,int>::iterator it;
     

    cout<<answer<<endl;
    return 0;
}