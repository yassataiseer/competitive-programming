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

int shortest_route(vector<vector<int> > routes,int page){
    int route;
    for(int i=0;i<routes[page].size();i++){
        if (routes[page][i]==0){
            return page;
        }
        int new_page =shortest_route(routes,page+1); 
        route=new_page;
    }
    return route;

}


int main(){
    int pages;
    cin >> pages;

    
    map<int, bool> possible_page;
    vector<vector<int> > routes;
    for (int y=0;y<pages;y++){
        possible_page[y+1]=false;
    }
    for (int i=0;i<pages;i++){
        int page_num;
        cin >> page_num;
        if(page_num==0){
            vector<int> page_data;
            page_data.push_back(page_num);
            routes.push_back(page_data);  
            possible_page[page_num+1] = true;
        }
        else{
        for(int x=0;x<page_num;x++){
            vector<int> page_data;
            int current_page;
            cin >>current_page;
            
            if(current_page<=pages){
                possible_page[current_page] = true;
            }
            
            page_data.push_back(current_page);
            routes.push_back(page_data);
        }
        }

    }
    int shortest_num=362604816;
    for (int x=0;x<pages;x++){
        int current = shortest_route(routes,x);
        if(current<shortest_num){
            shortest_num = current;
        }
    }
    char possible = 'Y';
    map<int, bool>::iterator it;

    for (it = possible_page.begin(); it != possible_page.end(); it++)
    {
        if(it->second==false){
            possible = 'N';
        }
    }

    cout << possible<<endl;
    cout << shortest_num<<endl;




    return 0;
}

