#include<iostream>

 using namespace std;

 class Queue{
        int *arr;
        int qfront ;
        int rear;
        int size;
        
        public:

        Queue(){
            size=1000;
          arr = new int(size); 
          qfront =0;
          rear=0; 
        }
        void enqueuee(int data){
            if(rear==size){
                cout<<"Full"<<endl;
            }
            else{
                arr[rear]=data;
                rear++;
            }
        }
        int dequeuee(int data){
            if(qfront==rear){
                return -1;
            }
            else{
                int ans=arr[qfront];
                arr[qfront]=-1;
                if(qfront==rear){
                    qfront=0;
                    rear=0;
                }
                return ans;
            }
        }
        int qfront(){
            if(qfront==rear){
                return -1;
            }
            else{
                return qfront;
            }
        }

        bool isEmpty(){
            if(qfront==rear){
                return true;
            }
            else {
                false;
            }
        }

 };

 int main(){
    Queue q;
    q.isEmpty();
 }
