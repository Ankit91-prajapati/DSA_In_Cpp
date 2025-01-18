#include<iostream>
#include<vector>
using namespace std;
int main() {
   //only declaraction;
//    vector<int> v;
//    cout<<"Enter element:";
//    for(int i=0; i<5; i++){
//     int element;
//     cin>>element;
//     v.push_back(element);
//    } 
// cout<<"printing element:"<<endl; 
//    for(int i=0 ; i<5; i++){
//     cout<<v[i]<<endl;
//    }

  


// //declaration with size of vector
// int n;
// cout<<"Enter size of vector:";
// cin>>n;
// vector<int>v1(n);
// cout<<"Enter element :"<<endl;
// for(int i=0 ; i<n; i++){
//     cin>>v1[i];
//    }
  
//  cout<<"printing element:"<<endl;
// for(int i=0 ; i<n; i++){
//     cout<<v1[i]<<endl;;
//    }


//    //Declaration and initization
// vector<int> v2= {1,2,3,4,5};
// cout<<"printing element:"<<endl;
// for(auto a=v2.begin(); a<v2.end(); a++) {
//    cout<<*a<<endl;}

//    //assign new element  
//    v2.assign(1,4);
// for(auto a=v2.cbegin(); a<v2.cend(); a++) {
//    cout<<*a<<endl;}




//only one element initilize
// vector<int>v3(4,5);
// cout<<"printing element:"<<endl;
// for(int x=0 ; x<4; x++){
//     cout<<v3[x]<<endl;;
//       }

vector<int> vie ={2,4,5,6,7};
vector<int>voc =vie;
voc[0] =98;
for(int x=0 ; x<5; x++){ //it not change actual value
    cout<<vie[x]<<endl;;
      }
return 0;
}
