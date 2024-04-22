#include<iostream>
#include<stack>
using namespace std;

int main(){

   stack<int> s;
   //push operation
   s.push(2);
   s.push(3);
   s.pop();
   cout<<"printing top element" <<s.top();

   if(s.empty()){
    cout<<"Stack is empty";
   }
else{
    cout<<"Not empty";
}
}