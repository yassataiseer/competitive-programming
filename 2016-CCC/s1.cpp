// better version

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <map>
#include <set>
using namespace std;




int main(){

    string line1;
    string line2;
    cin>> line1;
    cin>> line2;
    int astrecksCount = count(line2.begin(), line2.end(), '*');
    set<char> PrevTrack;
    for(int i=0;i<line2.size();i++){
        int TrackSize = PrevTrack.size();
        if(TrackSize==0){
            PrevTrack.insert(line1[i]);
            int line1count = count(line1.begin(), line1.end(), line1[i]);
            int line2count = count(line2.begin(), line2.end(), line1[i]); 
            if(line1count!=line2count){
                int difference = abs(line1count-line2count);
                if(astrecksCount-difference<0){
                    cout<<'N'<<endl;
                    return 0;
                }else{
                    astrecksCount-= difference;
                }
            }
        }else{
            PrevTrack.insert(line1[i]);
            if(PrevTrack.size()!=TrackSize){
                int line1count = count(line1.begin(), line1.end(), line1[i]);
                int line2count = count(line2.begin(), line2.end(), line1[i]); 
                if(line1count!=line2count){
                    int difference = abs(line1count-line2count);
                    if(astrecksCount-difference<0){
                        cout<<'N'<<endl;
                        return 0;
                    }else{
                        astrecksCount-= difference;
                    }
                }                
            }
        }
    }

    cout<<'A'<<endl;
    return 0;
}



