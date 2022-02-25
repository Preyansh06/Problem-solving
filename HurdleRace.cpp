#include <iostream>
#include <vector>
using namespace std;
int HurdleRace(vector<int> arr, int h)
{
    int max = 0;
    int dose;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
        if (max > h)
        {
            dose = max - h;
        }
        return dose;
}
int main()
{
    int n;
    cout << "Enter the number of Hurdles:";
    cin >> n;

    int h;
    cout << "Enter the height player can jump:" << endl;
    cin >> h;

    vector<int> arr;
    int input;
    cout << "Enter height of Hurdles:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    cout << HurdleRace(arr, h);
}