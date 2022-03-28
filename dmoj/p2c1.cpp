//link: https://dmoj.ca/problem/aac1p2
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;
vector<int> Races;



void Traverse(int P,int K, int X){

    int maxVal = Races[0];
    //cout<<Races[1]<<endl;

    if(P>maxVal){
        return;
    }
    if(K<=0){
        return;
    }
    maxVal = maxVal*((100-X)/100);
    Races[0] = maxVal;
    K--;
    sort(Races.begin(),Races.end());
    reverse(Races.begin(),Races.end());
    Traverse(P,K,X);
}

int main(){
    int N,D,K,X;
    cin>>N>>D>>K>>X;

    for(int i=0;i<N;i++){
        int speed;
        cin>>speed;
        Races.push_back(speed);
    }
    int P;
    cin>>P;
    sort(Races.begin(), Races.end());
    reverse(Races.begin(),Races.end());
    if(Races[0]<P){
        cout<<"YES"<<endl;
    }else{
            Traverse(P,K,X);
           if(*max_element(Races.begin(),Races.end())<P){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            } 
    }

    return 0;
}

