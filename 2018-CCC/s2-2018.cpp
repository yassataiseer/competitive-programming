
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>
#include<algorithm>
#include<iterator> 

using namespace std;

bool check(vector<vector<int> >array,int array_size){
    for (int i=0;i<array_size;i++){

        vector<int>copy_data;
        //copy_data.assign(array.begin(),array.end());
        copy(array[i].begin(),array[i].end(),back_inserter(copy_data));
        vector<int>sort_data;
        copy(array[i].begin(),array[i].end(),back_inserter(sort_data));
        sort(sort_data.begin(), sort_data.end()); 
        if (sort_data!=copy_data){
            return false;
        }
        copy_data.clear();
        sort_data.clear();
        
        for (int x=0;x<array_size;x++){
            copy_data.push_back(array[x][i]);
            sort_data.push_back(array[x][i]);
        }
        sort (sort_data.begin(), sort_data.end()); 

        if (sort_data!=copy_data){
            return false;
        } 
    }
    return true;
}


int solve(int array_size, vector<vector<int> >array){
    while (true){
        bool x = check(array,array_size);
        if (x){
            for (int i=0;i<array_size;i++){
                    for (int x=0;x<array_size;x++){
                        cout << array[i][x] <<" ";
                    }
                    cout << endl;
                }
                break;
        }

        else{
            vector<vector<int> >new_array;
            vector<int> temp_array;
            for (int j=array_size-1;j>-1;j--){
                temp_array.clear();
                //cout << array[0][2]<<endl;
                //cout << array[0][2]<<endl;
                for (int z=0;z<array_size;z++){
                    temp_array.push_back(array[z][j]);
                    //cout << array[z][j]<<endl;
                }
                new_array.insert(new_array.begin(), temp_array);
                //new_array.push_back(temp_array);
                
            }
            //break;
            reverse(new_array.begin(), new_array.end());
            array=new_array;

        }

    }
    return 0;
}

int main(){
    int array_size;
    cin >> array_size;
    vector< vector<int> > array;
    vector<int> row;
    int temp_array[array_size];
    for(int i=0;i<array_size;i++){
        row.clear();
        for (int x=0;x<array_size;x++){
            cin >> temp_array[x];
            row.push_back(temp_array[x]);
        }
        array.push_back(row);
    }
    solve(array_size,array);

    return 0;
}


