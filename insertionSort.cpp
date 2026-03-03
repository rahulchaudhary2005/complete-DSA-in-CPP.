#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cout<<"Enter the element of index "<<i<<" ";
      cin>>arr[i];  
    }

    cout<<"----Now we will applt insertion Sort----";

    for(int i=0; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    cout<<"---Now We will print the sorted array ----"<<endl;

    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<" ";

    }
}