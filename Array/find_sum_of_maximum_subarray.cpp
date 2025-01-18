#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={1,-2,3,-4,5,6};
    int maxim = INT32_MIN;
    int n =v.size();
    for(int start =0; start<n;start++){
        int sum =0;
        for(int end = start;end<n; end++){
            sum+=v[end];
            maxim = max(maxim ,sum);
        }

    }
    cout<<"maximum is "<<maxim<<endl;
}

// kadane's algorithm

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v ={1,-2,3,-4,5,6};
//    int maxim = INT32_MIN;
//    int sum =0;
//    for(int i=0; i<v.size();i++){
//     sum+=v[i];
//     maxim = max(sum, maxim);
//     if(sum<0){
//         sum = 0;
//     }
//    }
//    cout<<"maximum is "<<maxim<<endl;

// }
