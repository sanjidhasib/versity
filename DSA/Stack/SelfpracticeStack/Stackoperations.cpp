#include<iostream>
using namespace std;


class Stack{
    public: 
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size=size;
        arr= new int[size];
        top=-1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"overflow";
            
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow";
        }
    }

    int peak(){
        if(top>=0 && top<=size){
            cout<<arr[top]<<endl;
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

    st.push(10);
    st.push(5);
    st.peak();
    st.push(14);
    st.push(14);
    st.push(14);
    st.push(14);
    
}