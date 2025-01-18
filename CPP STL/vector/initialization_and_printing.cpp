#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {23,45,67,80,90};
    vector<float>v2({3.4,5.6,67.7,78.9});
    vector<string>v3(4,"Ankit");

    vector<int>v4;
    cout<<"Enter value:";
    for(int i =0; i<5;i++){
        int ele;
        cin>>ele;
        v4.push_back(ele);
    }
    int n; 
    cout<<"Enter size:";
    cin>>n;
    vector<int> v5(n); 
    cout<<"Enter element:";
    for(int &value :v5){
        cin>>value;
    }


    for(int i =0; i< v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    cout<<"\n";
    for(auto a = v2.begin(); a!=v2.end(); a++){
        cout<<*a<<" ";
    }
      

       cout<<"\n";
    for( const string &x:v3){
        cout<<x<<" ";
    }

        cout<<"\n";
    for(int val : v4){
        cout<<val*2<<" ";
    }

        cout<<"\n";
    for(const int &f : v5){
        cout<<f<<" ";
    }
} 