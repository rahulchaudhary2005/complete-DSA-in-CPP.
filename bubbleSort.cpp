#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enere th enumber :"<<endl;
    cin>>n;
    cout<<"the number is "<<n;

    int arr[n];

    for(int i=0 ;i <n ;i++)
    {
        cout<<"Enter the element of indx "<<i<<" ";
        cin>>arr[i];

    }

    cout<<"For sorting we will using the bubble sort algorithm "<<endl;

    for(int i=0;i<n-1; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<"----We will printing the sorted array -----"<<endl;

    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<"  ";
    }

}    