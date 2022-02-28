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




int main(){
    int constraints = 0;
    int allow;
    cin>>allow;
    map<string,vector<string> > AllowMap;
    map<string,vector<string> > DisallowMap;

    for(int i=0;i<allow;i++){
        vector<string> Possible;
        for(int x=0;x<2;x++){
            string Current;
            cin>>Current;
            Possible.push_back(Current);
        }
        bool otherwise = false;
        if(AllowMap.find(Possible[0])!=AllowMap.end()){
            vector<string> MapVector = AllowMap[Possible[0]];
            MapVector.push_back(Possible[1]);
            AllowMap[Possible[0]] = MapVector;
            otherwise=true;
        }
        if(AllowMap.find(Possible[1])!=AllowMap.end()){
            vector<string> MapVector = AllowMap[Possible[1]];
            MapVector.push_back(Possible[0]);
            AllowMap[Possible[0]] = MapVector;
            otherwise=true;
        }
        if(!otherwise){
            vector<string> MapVector;
            MapVector.push_back(Possible[1]);
            AllowMap[Possible[0]] = MapVector;
            MapVector.clear();
            MapVector.push_back(Possible[0]);
            AllowMap[Possible[1]] = MapVector;   
        }
    }
    int disallow;
    cin>>disallow;
    for(int i=0;i<disallow;i++){
        vector<string> NotPossible;
        for(int x=0;x<2;x++){
            string Current;
            cin>>Current;
            NotPossible.push_back(Current);
        }
        bool otherwise = false;
        if(DisallowMap.find(NotPossible[0])!=DisallowMap.end()){
            vector<string> MapVector = DisallowMap[NotPossible[0]];
            MapVector.push_back(NotPossible[1]);
            DisallowMap[NotPossible[0]] = MapVector;
            otherwise=true;
        }
        if(DisallowMap.find(NotPossible[1])!=DisallowMap.end()){
            vector<string> MapVector = DisallowMap[NotPossible[1]];
            MapVector.push_back(NotPossible[0]);
            DisallowMap[NotPossible[0]] = MapVector;
            otherwise=true;
        }
        if(!otherwise){
            vector<string> MapVector;
            MapVector.push_back(NotPossible[1]);
            DisallowMap[NotPossible[0]] = MapVector;
            
            MapVector.clear();
            MapVector.push_back(NotPossible[0]);
            DisallowMap[NotPossible[1]] = MapVector;
        }




    }
    int groupsnum;
    cin>>groupsnum;
    for(int i=0;i<groupsnum;i++){
        vector<string> CurrentGroup;
        for(int y=0;y<3;y++){
            string Name;
            cin>>Name;
            CurrentGroup.push_back(Name);
        }
        vector<string> found;
        vector<string> found2;
 
        for(string CurrentString : CurrentGroup){
            found.push_back(CurrentString);
            if(AllowMap.find(CurrentString)!=AllowMap.end()){
                for(string StringMap: AllowMap[CurrentString]){
                    
                if(find(found.begin(), found.end(), StringMap) != found.end()){}
                else{
                        if (find(CurrentGroup.begin(), CurrentGroup.end(), StringMap) != CurrentGroup.end())
                        {
                        }else{
                            constraints++;
                            cout<<"key: "<<CurrentString<<" value: "<<StringMap<<endl;

                        }
                        found.push_back(StringMap);

                }


                    

                }
            }
            if(DisallowMap.find(CurrentString)!=DisallowMap.end()){
                for(string StringMap: DisallowMap[CurrentString]){
                    if(find(found2.begin(), found2.end(), CurrentString) != found2.end()){}
                    else{
                        if (find(DisallowMap[CurrentString].begin(), DisallowMap[CurrentString].end(), StringMap) != DisallowMap[CurrentString].end())
                        {
                            



                    }else{
                        found2.push_back(CurrentString);
                        constraints++;
                        cout<<"key: "<<CurrentString<<" value: "<<StringMap<<endl;
                    }
                    }

                }
            }         
    }
    }

    cout<<constraints<<endl;
    return 0;
}