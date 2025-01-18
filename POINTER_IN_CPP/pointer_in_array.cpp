#include<iostream>
using namespace std ;
int main(){
    int arr[] ={ 2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *ptr = &arr[0];

    cout<<"Address of  zeroth index = "<<arr<<endl;
    cout<<"Address of  zeroth index = "<<&arr[0]<<endl;
    cout<<"Address of  zeroth index = "<<ptr<<endl;
     cout<<"value of  zeroth index = "<<*ptr<<endl;
     cout<<"value of  zeroth index = "<<arr[0]<<endl;
     cout<<"value of  zeroth index = "<<*(&arr[0])<<endl;
     cout<<"value of  zeroth index = "<<*arr<<endl;
    
    
    
    

    for(int i=0; i<n; i++){
        cout<<*ptr+i<<endl;
    }
  cout<<"printing:"<<endl;
     for(int i=0; i<n; i++){
        cout<<ptr[i]<<endl;
    }
     cout<<"printing:"<<endl;
     for(int i=0; i<n; i++){
        cout<<*arr+i<<endl;
    }

     cout<<"printing:"<<endl;
     for(int i=0; i<n; i++){
        cout<<*ptr<<endl;
        ptr++;
    }

//Dynamic memory allocation

    int *ptr2 = new int[5];

    cout<<"taking input:";
    for(int i=0; i<5; i++){
        cin>>ptr2[i];

    }
    
     for(int i=0; i<n; i++){
        cout<<*ptr2+i<<endl;
    }

     cout<<"printing:"<<endl;
     for(int i=0; i<n; i++){
        cout<<*ptr2<<endl;
        ptr2++;
    }
}