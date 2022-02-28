#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;


struct Choice{
    int steps;
    int x;
    int y;
};
int answer = 0;
void Traverse(Choice Current,vector<int> Destination){
    if(Current.x<0||Current.y<0||Current.x>=8||Current.y>=8||Current.steps>6){
        return;
    }
    if(Current.x==Destination[0]&&Current.y==Destination[1]){
        if(answer == 0){
            answer = Current.steps;
        }
        if(Current.steps<answer){
            answer = Current.steps;
        }
        return;
    }
    Current.steps++;
    Choice Choice1 = Current;
    Choice1.y+=1;
    Choice1.x+=2;
    Traverse(Choice1, Destination);

    Choice Choice2 = Current;
    Choice2.y-=1;
    Choice2.x+=2;
    Traverse(Choice2, Destination);

    Choice Choice3 = Current;
    Choice3.y+=2;
    Choice3.x+=1;
    Traverse(Choice3, Destination);

    Choice Choice4 = Current;
    Choice4.y+=2;
    Choice4.x-=1;
    Traverse(Choice4, Destination);


    Choice Choice5 = Current;
    Choice5.y-=2;
    Choice5.x+=1;
    Traverse(Choice5, Destination);

    Choice Choice6 = Current;
    Choice6.y-=2;
    Choice6.x-=1;
    Traverse(Choice6, Destination);

    Choice Choice7 = Current;
    Choice7.y+=1;
    Choice7.x+=2;
    Traverse(Choice7, Destination);

    Choice Choice8 = Current;
    Choice8.y+=1;
    Choice8.x-=2;
    Traverse(Choice8, Destination);
}
int main(){
    vector<Choice> Current;
    vector<int> Destination;
    Choice CurrentChoice;
        
        int x;
        int y;
        cin>>x;
        cin>>y;
        CurrentChoice.x =x;
        CurrentChoice.y =y;
        CurrentChoice.steps =0;
        Current.push_back(CurrentChoice);
    
        int x2;
        int y2;
        cin>>x2;
        cin>>y2;
        Destination.push_back(x2);
        Destination.push_back(y2);
    
    Traverse(CurrentChoice,Destination);
    cout<<answer<<endl;
    return 0;
}
