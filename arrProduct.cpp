#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int res[5];
    for(int i=0; i<5;i++)
    {
       int prod=1;
        for(int j=0; j<5; j++)
        {
            if(i==j)
            {
                continue;
            }
            else{
                prod=prod*arr[j];
            }
        }
        res[i]=prod;
    }

    for(int i=0; i<5; i++)
    { 
        cout<<res[i]<<"  ";
    }
    return 0;
}