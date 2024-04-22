#include<iostream>
#include<stack>
using namespace std;

class Stack
{
    public:
    int *arr;
    int top;
    int size;
    //Properties

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int elem){
        if(size-top>1){
            top++;
            arr[top]=elem;
        }
        else{
            cout<<"Stack overFlow" <<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout << "Stack underflow"<< endl;
        }

    }
    int peak(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
        }
        return -1;
    }

    bool isEmpty(){

        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};


int main(){
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);

    cout<<st.peak()<<endl;
     st.pop();
    cout << st.peak()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.peak()<<endl;

    
    return 0;
}