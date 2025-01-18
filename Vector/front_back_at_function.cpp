#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v2= {1,2,3,4,5};
    vector<int> v3;
    

cout<<"printing element:"<<endl;

for(auto a=v2.begin(); a<v2.end(); a++) {
   cout<<*a<<endl;
}
   cout<<"print first element "<<v2.front()<<endl;
    cout<<"print last element  "<<v2.back()<<endl;
    cout<<"print specify index "<<v2.at(3)<<endl;
    cout<<"if vector empty give 1 or 0 for none empty "<<v2.empty();

}




