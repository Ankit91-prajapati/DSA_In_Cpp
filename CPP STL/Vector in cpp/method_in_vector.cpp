#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ={34,56,78,99,90};
    vec.push_back(456);
    for(const int &x : vec){
        cout<<x<<" ";
    }
    vec.emplace_back(100);
    vec.pop_back();
    cout<<"\n";
    cout<<vec.capacity()<<endl;
    for(auto a = vec.cbegin(); a!=vec.cend(); a++){
        cout<<*a<<" ";
    }
     cout<<"\n";
    vec.insert(vec.begin()+3 , 999);
    for(auto a = vec.cbegin(); a!=vec.cend(); a++){
        cout<<*a<<" ";
    }
     
     cout<<"\n";
    vec.emplace(vec.begin()+1 , 678);
     for(auto a = vec.cbegin(); a!=vec.cend(); a++){
        cout<<*a<<" ";
    }

    cout<<"\n"<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(3)<<endl;
    cout<<vec[3]<<endl;
    cout<<vec.empty()<<endl;
    cout<<vec.max_size()<<endl;

    cout<<vec.size()<<endl;
    cout<<vec.capacity();


}
