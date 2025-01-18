#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec ={2,3,4,5,6};
    cout<<"capacity:"<<vec.capacity()<<endl;
    cout<<"size:"<<vec.size()<<endl;
    vec.push_back(45);

    cout<<"capacity:"<<vec.capacity()<<endl;
    cout<<"size:"<<vec.size()<<endl;
    vec.pop_back();

    cout<<"capacity:"<<vec.capacity()<<endl;
    cout<<"size:"<<vec.size()<<endl;

    cout<<"front element:"<<vec.front()<<endl;
    cout<<"Back element:"<<vec.back()<<endl;
    cout<<"At:"<<vec.at(2)<<endl;
    vec.emplace_back(56);

     cout<<"capacity:"<<vec.capacity()<<endl;
     vec.push_back(789);
     
      cout<<"capacity:"<<vec.capacity()<<endl;
    for(auto i =vec.begin();i!=vec.end(); i++){
        cout<<*i<<" ";
    }

     cout<<"\n";
    vec.emplace(vec.begin()+2, 67);
    for(auto i =vec.cbegin();i!=vec.cend(); i++){
        cout<<*i<<" ";
    }


      cout<<"\n";
    vec.insert(vec.begin()+3, 78);
    for(auto i =vec.rbegin();i!=vec.rend(); i++){
        cout<<*i<<" ";
    }
    
    vector<int>v ={5,6,6,7,8,9,7};
    cout<<endl<<vec.empty()<<endl;
    vec.swap(v);
    for(auto i =vec.cbegin();i!=vec.cend(); i++){
        cout<<*i<<" ";
    }

    reverse(vec.end(), vec.begin() );
    sort(vec.begin(), vec.end());
    vec.erase(vec.begin()+2);




    

    
}
