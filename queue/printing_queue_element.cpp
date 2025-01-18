#include<iostream>
#include<queue>
using namespace std;
void print( queue<int> q1 ){
    int n = q1.size();

while(n--){
    cout<<q1.front()<<endl;
    q1.push(q1.front());
    q1.pop();
}

cout<<q1.size();


}
int main(){

queue<int>q1;
q1.push(2);
q1.push(4);
q1.push(7);
q1.push(8);
q1.push(9);
print (q1);



}