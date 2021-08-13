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
    int square;
    int circle;
    cin >> square>>circle;
    if ((square^2)>circle*3.14*circle){
        cout<<"SQUARE";
    }
    else{
        cout << "CIRCLE"<<endl;
    }


}


