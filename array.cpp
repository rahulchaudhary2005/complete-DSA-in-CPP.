#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"Please enter the size of the array : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter theelement of index "<<i <<" ";
        cin>>arr[i];
    }
    int smallest= INT16_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<smallest){
            smallest=arr[i];
        }
       
        
    }
    cout<<"THE smallest number is"<<smallest;     
     return 0;
}