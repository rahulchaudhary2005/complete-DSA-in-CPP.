#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key)
{
    int st=0;
    int end=size-1;
    int mid=(st+end)/2;

    while(st<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(st+end)/2;
    }
    return -1;


}


int main()
{
    int odd[5]={2,3,4,5,6};
    

    int even[6]={10,12,13,14,15,16};

   int index= binarySearch(odd,5,7);
   cout<<"The element found at index : "<<index;

   return 0;
}
