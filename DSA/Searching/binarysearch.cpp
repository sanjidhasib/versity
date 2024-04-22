#include<iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=(end+start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            //go to right wala part change start index to mid else want to go to left the change the end to mid-1;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;
}


int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5]={3,5,7,8,11};

    int index=binarysearch(even,6,12);
    cout<<"index of 12 is"<<' '<<index<<endl;

}