#include<iostream>
#include<vector>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
    cout<<"No of row assume:"<<matrix.size()<<endl;
    cout<<"NO of column or number of element in each row:"<<matrix[0].size()<<endl;
          
        for(int i= 0; i<matrix.size(); i++){
            for(int j =0; j<matrix[i].size(); j++){
                if(matrix[i][j]== target){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
    vector<vector<int>>v ={{2,3,4,5},{6,7,8,9},{10,11,12,13}};
    int target =5;
   cout<< searchMatrix(v, target)<<endl;


}
