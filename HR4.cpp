#include<iostream>
#include <vector>
// HackerRank-----Problem Solving--------Divisible Sum Pair---------
using namespace std;
int main()
{
    int n,k;
    int count=0;

    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the integer divisor";
    cin>>k;

    vector<int> numbers;
    int N[100];
    cout<<"Enter the array";
    for (int i = 0; i < n; i++)
    {
        cin>>N[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(((N[i]+N[j])%k==0)&&(i!=j))
            {
                // cout<<i<<" : "<<N[i]<<" "<<j<<" : "<<N[j]<<endl;
                count++;
            }
        }
    }
    cout<<count/2;
}