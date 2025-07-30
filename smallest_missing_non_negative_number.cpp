#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    int start=0,end=n-1,index=0;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(mid<arr[mid]){
             index=mid;
           end=end-1;
           }

        else{
        index=mid+1;
        start=mid+1;
        }
    }
    cout<<index;

}