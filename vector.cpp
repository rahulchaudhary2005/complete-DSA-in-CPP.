#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={10,12,14,16,18};

    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    


    for(int value : vec)
    {
        cout<<value<<endl;
    }

    int size=vec.size();
    cout<<size;
}