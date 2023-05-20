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



string Solve(string Line){
    string answer = "";
    string PrevStr = "";
    bool Spaces = false;
    for(int i=0;i<Line.size();i++){
        if(Line[i]==' ' && !Spaces){
            Spaces=true;
            answer+= "%20";
        }else if(Line[i]==' ' && Spaces){
            
        }
        else{
            Spaces=false;
            answer+=Line[i];
        }
    }
    return answer;

}


int main(){

    cout<<Solve("Mr.Hethrington         Math Class")<<endl;

    return 0;
}