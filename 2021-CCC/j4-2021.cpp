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

struct Books{
    int L=0;
    int M=0;
    int S=0;
    
};
int main(){
    string order;
    cin>>order;
    int answer = 0;
    int L=0;
    int M=0;
    int S=0;
    for(int i=0;i<order.size();i++){
        if(order[i]=='L'){
            L++;
        }else if(order[i]=='M'){
            M++;
        }else{
            S++;
        }
    }


    Books BookL;
    for(int i=0;i<L;i++){
        if(order[i]=='L'){
            BookL.L++;
        }else if(order[i]=='M'){
            BookL.M++;
        }else{
            BookL.S++;
        }        
    }
    Books BookM ;
    for(int i=L;i<M+L;i++){
        if(order[i]=='L'){
            BookM.L++;
        }else if(order[i]=='M'){
            BookM.M++;
        }else{
            BookM.S++;
        }        
    }
    if(BookM.M==M&&BookL.L==L){
        cout<<answer<<endl;
        return 0;
    }

    Books BookS;
    for(int i=M;i<M+L+S;i++){
        if(order[i]=='L'){
            BookS.L++;
        }else if(order[i]=='M'){
            BookS.M++;
        }else{
            BookS.S++;
        }        
    }
    if(M==0){
        cout<<BookL.S<<endl;
        return 0;
        
    }

    if(BookL.L!=L){
        while(BookM.L>0){
            bool Mexists=false;
            if(BookL.M>0){
                Mexists=true;
            }
            if(Mexists){
                BookL.L++;
                BookM.L--;
                BookM.M++;
                BookL.M--;
                answer++;
            }else{
                if(BookL.S>0){
                    BookL.L++;
                    BookM.L--;
                    BookM.S++;
                    BookL.S--;
                    answer++;
                }
            }
        }
    }


    while(BookM.M!=M){
            if(BookS.M>0){
                BookS.S++;
                BookS.M--;
                BookM.M++;
                BookM.S--;
                answer++;
            }
    }

    cout<<answer<<endl;
    
    return 0;
 }