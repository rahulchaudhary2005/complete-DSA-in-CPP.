#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the size of array ypu wwant : ";
    cin>>n;
    cout<<endl;


    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element of index "<<i<<" ";
        cin>>arr[i];
    }

    cout<<endl;
    //Now wi will perform the Selection Sort 

    // for(int i=0; i<n; i++)
    // {
    //     int min=i;
    //     for(int j=0; j<n; j++)
    //     {
    //         if(arr[min]>arr[j])
    //         min=j;

    //         swap(arr[min],arr[j]);
    //     }
        
    // }


    // This is the Syntax of Bubble sort

  for(int i=0;i<n-1;i++)
  {
    for(int j=0; i<n-i; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
  }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}