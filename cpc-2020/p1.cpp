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

char solve(string letters){
    vector<char> alphabet;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    for(int x=0;x<alphabets.length();x++){
        alphabet.push_back(alphabets[x]);
    }
    for(int i=0;i<letters.length();i++){
        remove(alphabet.begin(),alphabet.end(),letters[i]);
    }
    return alphabet[0];
}



int main(){
    string text;
    cin >> text;
    cout << solve(text)<<endl;
    //cout <<solve("zdeac")<<endl;
    return 0;
}




