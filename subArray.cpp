#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the size you want : ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++)
    {
        cout<<"Enter the element : ";
        cin>>arr[i];
    }
    cout<<endl;

    // <--Total number of sub arrays-->

    // for(int st=0; st<n; st++)
    // {
    //     for(int end= st; end<n; end++)
    //     {
    //         for(int i=0 ;i<=end; i++)
    //         {
    //             cout<<arr[i];

    //         }
    //         cout<<" ";

    //     }
    //     cout<<endl;

    // }

    // sum of maximum subArray
     int maxSum= INT16_MIN;

    for(int st=0 ; st<n; st++)
    {
        int currentSum=0;
        for(int end=0; end<n; end++)
        {
            currentSum=currentSum+arr[end];
            maxSum=max(currentSum,maxSum);
        }
    }

    cout<<"Max sum of the sub Array is : "<<maxSum;
    cout<<endl;

    return 0;
}