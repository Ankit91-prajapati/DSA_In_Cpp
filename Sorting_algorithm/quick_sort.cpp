#include<iostream>
using namespace std;
int partition(int arr[], int start, int end){
int pos = start;
   for(int i=start; i<=end; i++){
    if(arr[i]<=arr[end]){
        swap(arr[i],arr[pos]);
        pos++;
    }

   }
    return pos-1;
}
void quick_sort(int arr[],int start ,int end){
    if(start>=end)
    return ;

    int pivot = partition(arr ,start ,end);
     //left side
     quick_sort(arr, start, pivot-1);
     // right side
     quick_sort(arr,pivot+1, end);

}
int main(){
    int arr[] ={3,4,5,9,5,4};
    quick_sort(arr,0,5);
     for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
     }
}