#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{
    int n, input;
    // cout << "Enter the range of sequence:";
    cin >> n;
    int temp;
    int i, j;
    int arr[100];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (arr[arr[j]] == i)
            {
                temp = j;
            }
        }
        cout<<temp<<endl;
    }
}