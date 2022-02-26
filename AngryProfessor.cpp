#include <iostream>
#include<vector>
using namespace std;
string AngryProfessor(vector <int> arr ,int k)
{
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
            count++;
    }
    if ((count >= k)&&(k!=0))
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}
int main()
{
    int n, k, t;

    // cout << "Enter number of Test case:";
    cin >> t;
    int input;

   vector <int> arr;
    for (int j = 0; j < t; j++)
    {

            // cout << "Enter number of students:" << endl;
            cin >> n;

            // cout << "Enter threshold:" << endl;
            cin >> k;
        for (int i = 0; i < n; i++)
        {
            // cout << "Enter entry time of students:" << endl;
            cin >> input;
            arr.push_back(input);
        }

        cout << AngryProfessor(arr,k)<<endl;
    }
// 10 4
// -93 -86 49 -62 -90 -63 40 72 11 67
// 10 10
// 23 -35 -2 58 -67 -56 -42 -73 -19 37
// 10 9
// 13 91 56 -62 96 -5 -84 -36 -46 -13
}
