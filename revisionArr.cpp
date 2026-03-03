#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,21,5,6};
    int idx=2;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
        if(i==2)
        {
            for(int j=4;j>2;j--)
            {
                cout<<arr[j]<<" ";
                break;
            }
        }

    }
}