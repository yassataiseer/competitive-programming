#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;

bool solve(vector<int> positions, int length){
    stack<int> pushed_cars;
    stack<int> done_cars;

    int smallest = *min_element(positions.begin(), positions.end());

    for (int i=0;i<length;i++){
        //cout << "small "<< smallest<<endl;
        if(!done_cars.empty()){
            if((done_cars.top()+1)==positions.at(i)){
            done_cars.push(positions.at(i));
            }
        }
        else if(smallest==positions.at(i)&&done_cars.empty()){
            //cout <<"hi"<<endl;
            done_cars.push(smallest);
        }

        else if(smallest!=positions.at(i)&&pushed_cars.empty()){
            //cout <<"hi3"<<endl;
            pushed_cars.push(smallest);

        }
            //cout <<"hi2"<<endl;
        else if((pushed_cars.top()-1)==positions.at(i))
            {
                pushed_cars.push(positions.at(i));
            }   
        else{    //cout <<"false " <<pushed_cars.top()<<endl;
            return false;
        }

    }
    return true;
}


int main(){
    int cases;
    cin >> cases;
    char answers[cases];
    int length;
    vector<int> positions;
    for (int i=0;i<cases;i++){
        positions.clear();
        cin >> length;
        for(int x=0;x<length;x++){
            int num;
            cin >> num;
            positions.push_back(num);
        }
        //cout << "help"<<endl;
        reverse(positions.begin(), positions.end());
        //cout <<"positions: "<<positions[0]<<endl;
        bool answer = solve(positions,length);
        ///cout << "BOOL"<<answer<<endl;
        if(answer){
            answers[i]='Y';
        }
        else{
            answers[i] = 'N';
        }
    }
    for(int i=0;i<cases;i++){
        cout << answers[i]<<endl;
    }
    return 0;
}