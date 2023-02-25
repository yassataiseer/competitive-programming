/*
O(N) time
O(1) space
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



bool solveSize2(string Longstr,string Shortstr){
    int p1 = 0;
    int p2 = 0;
    while(p2<Shortstr.size()){
        if(Longstr[p1]!=Shortstr[p2]){
            p1++;
            if(abs(p1-p2)>=2){
                return false;
            }
            
        }else{
            p1++;
            p2++;
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
        return solveSize2(s1,s2);
    }
    return solveSize2(s2,s1);
    


    
} 

int main(){

    cout<< solve("pale","ple")<<endl;
    cout<< solve("pales","pale")<<endl;
    cout<< solve("pale","bale")<<endl;
    cout<< solve("pale","bake")<<endl;
    cout<< solve("pale","ple")<<endl;
/*

pale,ple true
pales, pale true
pale, bale true
pale, bake false  
*/

//1 for true, 0 for false
    return 0;
}