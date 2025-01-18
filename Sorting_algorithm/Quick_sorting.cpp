#include<iostream>
using namespace std;
int partition(  int arr[] , int start, int end){
    int position =start;
    for(int i=0; i<=end; i++){
        if(arr[i]<= arr[end]){
         swap(arr[i], arr[position]);
         position++;
        }   
    }
     return position -1;
}


 void quick_sort(int arr[], int start , int end){
    if(start>=end)
    return ;
    int pivot = partition(arr ,start ,end);
    // left side
    quick_sort(arr,start ,pivot-1);
    //right side
    quick_sort(arr, pivot+1 ,end);

 }
int main(){
    int arr[6] = {2,1,4,3,6,4};
    quick_sort(arr, 0 , 5);
    cout<<"After sorting"<<endl;
    for(int i =0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}