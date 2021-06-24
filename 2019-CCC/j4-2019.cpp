#include <iostream>
#include <string>

using namespace std;

int solve(string input){
    int line1[2] = {1,2};
    int line2[2] = {3,4};
    for (int i=0; i<input.length();i++){
        if(input[i]=='V'){
            swap(line1[0],line1[1]);
            swap(line2[0],line2[1]);
        }
        else{
            swap(line1,line2);
        }
    }
    cout << line1[0] << " "<< line1[1] << '\n';
    cout << line2[0] << " "<< line2[1] << '\n';
    return 0;
}
int main(){
    string input;
    cin >> input;
    solve(input);
    return 0;
}