#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v = {{2,3,4},{4,5,6},{6,7,8}};
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }

vector<string> Board(5);
for(int i=0;i<5; i++)
 for(int j =0;j<5;j++)
     Board[i].push_back('.');

for(int i=0;i<5; i++){
     for(int j =0;j<5;j++){ 
    cout<<Board[i][j]<<" ";
     }
     cout<<endl;
}

vector<bool>column(5,0);
for(int i=0;i<5; i++){
    cout<<column[i]<<" ";

}
}