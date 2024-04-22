//You have been given a sorted array list consisting of N elements . you are also given an integer k; 
// now find the first & last occurance of k;
// for ex. 0212222
// here 1 & 6 is answer

//binary search ..
#include <iostream>
using namespace std;

int firstoccuer(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key< arr[mid]){
            e=mid-1;
        }
    mid = s+(e-s)/2; 
    }
    return ans;
}

int lastoccuer(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int even[5]={1,2,3,3,5};
    int ans=firstoccuer(even,6,3);
    int ans1=lastoccuer(even,6,3);
    cout<<ans<<endl;
    cout<<ans1<<endl;
}