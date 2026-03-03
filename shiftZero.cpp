#include<iostream>
using namespace std;
int main()
{
    int arr[6]={0,3,0,4,0,2};
    int nonZero=0;
    for(int i=0; i<6; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }

    cout<<"Now we will printing the Array"<<endl;

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

