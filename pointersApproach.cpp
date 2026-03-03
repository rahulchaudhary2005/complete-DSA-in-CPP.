#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[5]={2,5,7,9,10};
    int i=0;
    int j=5-1;
    int k=17;
    while(i<j)
    {
        int pair_sum=arr[i]+arr[j];
        if(pair_sum>k)
        {
            j--;
        }
        else if(pair_sum<k)
        {
            i++;
        }
        else{
            cout<<"The element found at : "<<i<<"  and  "<<j;
            break;
        }
    }
}