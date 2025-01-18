#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<int>q1;
cout<<" Enter Element :";
for(int i=0; i<5;i++){
    int element;
    cin>>element;
    q1.push(element);
}
// q1.push(4);
// q1.push(6);
// q1.push(7);
// q1.push(8);
// q1.push(9);
cout<<"size of queue:"<<q1.size()<<endl;
cout<<"if my queue is empty give 1 else o :"<<q1.empty()<<endl;
cout<<" first element of queue:"<<q1.front()<<endl;
cout<<"last element of  queue;"<<q1.back()<<endl;

cout<<"printing element:";

while(!q1.empty()){
    cout<<q1.front()<<"  ";
    q1.pop();
}


}