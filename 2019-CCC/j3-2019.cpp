#include <iostream>
#include <string>
using namespace std;

int solve(string decrypt[],int size){
    for(int i=0;i<size;i++){
        //cout << decrypt[i] <<'\n';
        string character = "";
        for (int x=0; x<decrypt[i].length();x++){
            //cout << decrypt[i][x] << '\n';
            if (character==""){
                character+=decrypt[i][x];
            }

            else{
                if (decrypt[i][x]==character[0]){
                    character+=decrypt[i][x];               
                    }
                else{
                    cout << character.length() << " "<<character[0] << " ";
                    character = decrypt[i][x];
                }   
            }
        }
        cout << character.length() << " "<<character[0] << " ";
        cout << "\n";
    }
    return 0;
}
int main(){
    int test_cases;
    cin >> test_cases;
    string values[test_cases];
    for (int i=0; i<test_cases; i++){
        cin >> values[i];
    }
    solve(values,test_cases);

    return 0;
}

