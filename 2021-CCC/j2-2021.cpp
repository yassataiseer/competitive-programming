#include <iostream>
#include <map>
#include <string>
using namespace std;


string solve(int prices[],string names[],int people){
    int cost = 0;
    string name = "";
    for(int x=0;x<people;x++){
        if (prices[x]>cost){
            cost = prices[x];
            name = names[x];
        }
    }
    return name;
}


int main(){
    int people;
    cin >> people;
    string names[people];
    int prices[people];
    string name;
    int price;
    for(int i=0;i<people;i++){
        cin >> name;
        cin >> price;
        names[i] = name;
        prices[i] = price;
    }
    cout << solve(prices,names,people) << endl;



}