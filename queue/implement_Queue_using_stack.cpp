#include<iostream>
#include<stack>
using namespace std ;
class Queue{
    public:
    stack<int>s1;
    stack<int>s2;
    Queue(){

    }

    bool empty(){
        return s1.empty()  && s2.empty();
    }

    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(empty()){
            return 0;
        }

        else if(!s2.empty()){
            int element =s2.top();
            s2.pop();
            return element;
        }

        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            int element =s2.top();
            s2.pop();
            return element;
        }
    }


    int front(){
        if(empty()){
            return 0;
        }

        else if(!s2.empty()){
            return s2.top();
        }
         
         else{

             while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            return s2.top();

         }
    }


};
int main(){

}