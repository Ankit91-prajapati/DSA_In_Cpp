#include<iostream>
using namespace std;
template<class x>
class Stack{
    private:
    x top;
    x *arr;
    x size;

    public:
    Stack(x s){
        top = -1;
        arr = new x[s];
        size = s;
    }
    bool empty(){
        return top == -1;
    }

    bool full(){
        return top == size-1;
    }
    
    void push(int value){
        if(full()){
            cout<<"Stack is overflow";
        }

       else{
        top++;
        arr[top] = value;
        cout<<"pushed element is "<<value<<endl;
       }
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
        }

        else{
            cout<<"poped value is"<<arr[top]<<endl;
            top = top-1;
        
        }
    }

    int start(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }

        else{
          return arr[top];
        }
       
    }

    int issize(){
        return top+1;
    }


    
};

int main(){
    Stack<int>st(6);
    st.push(4);
    st.push(3);
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.issize()<<endl;;
    cout<<st.full()<<endl;
    cout<<st.start()<<endl;
}