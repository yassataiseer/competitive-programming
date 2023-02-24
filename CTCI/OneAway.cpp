/*
O(N) time
O(N) space
*/

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


bool solveSize(string Longstr,string Shortstr){
    map<char,int> Datamap;
    
    for(int i=0;i<Longstr.size();i++){
        Datamap[Longstr[i]]+=1;
    }
    for(int i=0;i<Shortstr.size();i++){
        Datamap[Shortstr[i]]-=1;
        if(Datamap[Shortstr[i]]<0){
            return false;
        }
    }
    return true;
    

}


bool solve(string s1, string s2){
    if(s1==s2){
        return true;
    }
    int difference = s1.size()-s2.size();
    if( abs(difference)>1 ){
        return false;
    }
    if(s1.size()==s2.size()){
        int counter = 0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                counter++;
            }
        }
        if(counter>1){
            return false;
        }
        return true;
    }

    if(s1.size()>s2.size()){
        return solveSize(s1,s2);
    }
    return solveSize(s2,s1);
    


    
} 

int main(){

    cout<< solve("pale","ple")<<endl;
    cout<< solve("pales","pale")<<endl;
    cout<< solve("pale","bale")<<endl;
    cout<< solve("pale","bake")<<endl;

/*

pale,ple true
pales, pale true
pale, bale true
pale, bake false  
*/

//1 for true, 0 for false
    return 0;
}