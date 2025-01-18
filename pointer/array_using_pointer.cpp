#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    int *ptr = &(arr[0]);

    cout<<ptr<<endl;
    cout<<arr<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+0)<<endl;
    cout<<ptr+1<<endl;
    cout<<*(&(arr[0]))<<endl;
    cout<<arr[0]<<endl;
    cout<<"printing elements:" ;

    for(int i = 0; i<5; i++){
        cout<<*(ptr+i)<<"  ";
    }

    int n;
    cout<<"\nEnter size:";
    cin>>n;
    cout<<" \ntaking input :";
    int *array =  new int[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];    //*(array+i) both are same
    }
    
     for(int i = 0; i<n; i++){
        cout<<array[i]<<endl; 
        }
    
}