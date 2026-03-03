#include<iostream>
using namespace std;

int getFirstOcc(int arr[], int size , int key)
{
    int st=0; 
    int end=size-1;
    int mid=(st+end)/2;

    int ans =-1;

    while(st<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            st=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }

        mid=(st+end)/2;
    }
    return ans;


}

// for last occurance

int getLastOccurance(int arr[], int size, int key)
{
    int st=0; 
    int end=size-1;
    int mid=(st+end)/2;

    int ans =-1;

    while(st<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            st=mid+1;
        }
        else if(key>arr[mid])
        {
            st=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }

        mid=(st+end)/2;
    }
    return ans;


}


int main()
{
    int arr[10]={1,2,3,4,4,4,4,5,6,7};

    int ans=getFirstOcc(arr,10,4);

    cout<<"The forst occurance of 4 is "<<ans <<" index"<<endl;

    int ans2=getLastOccurance(arr,10,4);
    cout<<"The Last occurance of 4 is "<<ans2 <<" index";

return 0;
}