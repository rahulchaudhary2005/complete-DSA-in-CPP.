#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {28,50,13,23,32};
    for(int i=0; i<5; i++)
    {
        int min=i;
        for(int j=i+1; j<5 ; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            swap(arr[min] ,arr[i]);
        }
    }

    cout<<"The sorted array is "<<endl;
    for(int i=0; i< 5; i++)
    {
        cout<<arr[i] <<" ";
    }
}