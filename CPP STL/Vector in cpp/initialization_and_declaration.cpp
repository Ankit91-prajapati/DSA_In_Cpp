#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1 = {2,3,4,5,6};
    vector<float>v2({23.4,45.6,56.6,67.7});
    vector<long long>v3(3,10);
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int>v4(n);
    vector<int>v5;
    vector<string>v6(5);
    vector<int>v7(5);

    cout<<"Enter elements in vector:";
    for(int i =0; i<n; i++){
        cin>>v4[i];
    }

    cout<<"\nEnter elements in vector2:";
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        v5.push_back(ele);
    }

    cout<<"\nEnter elements in vector3:";
    for( string &val:v6){
        cin>>val;
    }
     
      cout<<"\nEnter elements in vector4:";
    for(auto i = v7.begin(); i!=v7.end(); i++){
         cin>>*i;
    }


   cout<<"\n";
    for(const int &m:v1){
        cout<<m<<"  ";
    }

   cout<<"\n";
    for(float &a:v2){
        cout<<2*a<<"  ";
    }

    cout<<"\n";
    for( long long a:v3){
        // a =89;
        // this will be not giving error
        cout<<a<<"  ";
    }

    cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<v4[i]<<"  ";
    }

    cout<<"\n";
    for(auto i= v5.begin(); i!=v5.end(); i++){
        cout<<*i<<" ";
    }

    cout<<"\n";
    for(string &s:v6){
        cout<<s<<" ";
    }

    cout<<"\n";
    for(const auto &v :v7){
        // v = 45;
        //this will be giving error
        cout<<v<<" ";
    }

    return 0;


}