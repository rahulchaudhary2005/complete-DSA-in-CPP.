#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter theelement of index "<<i <<" ";
        cin>>arr[i];
    }
    int largest= INT16_MIN;
    int idx;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
            idx=i;
        }
       
        
    }
    cout<<"THE smallest number is "<<idx;     
     return 0;
}