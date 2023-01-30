#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
#include<queue>
#include <cmath>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    int answer = 0;
	for(int i = sqrt(a); i <= sqrt(b); ++i){
		for(int j = cbrt(a); j <= cbrt(b); ++j){
			if(i * i == j * j * j){
				answer++;
			}
				

			if(j * j * j > i * i){
				break;
			}
				
		}
	}

	cout << answer << endl;   
	return 0;
}



