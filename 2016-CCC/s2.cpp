//better implementation 

#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;



int main(){

    int option;
    cin>>option;
    int contestants;
    cin>>contestants;
    vector<int> Line1;
    vector<int> Line2;
    for(int i=0;i<contestants;i++){
        int n;
        cin>>n;
        Line1.push_back(n);
    }
    for(int i=0;i<contestants;i++){
        int n;
        cin>>n;
        Line2.push_back(n);
    }
    sort(Line1.begin(),Line1.end());
    sort(Line2.begin(),Line2.end());
    if(option==2){
        reverse(Line2.begin(),Line2.end());
    }
    int answer = 0;
    for(int i=0;i<contestants;i++){
        answer+=max(Line1[i],Line2[i]);
    }
    cout<<answer<<endl;
    /*
    5 1 4
    6 2 4

    1 4 5
    6 4 2

    202 177 189 589 102
    17 78 1 496 540

    102 177 189 202 589
    540 496  78  17  1 

    */
    return 0;
}