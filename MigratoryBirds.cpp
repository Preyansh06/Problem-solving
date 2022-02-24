#include <iostream>
#include <unordered_map>
using namespace std;
int MigratoryBirds(int arr[], int n)
{
    int count[6]={0,0,0,0,0,0};
    int result=0;
    int max=0;

    for (int i = 0; i < n; ++i)
    {
        int id=arr[i];
        count[id]++;

        if(count[id]>max)
        {max=count[id];
        result=id;}
        else if(count[id]==max)
        result= min(result,id);

    }
    cout<<result;
    

}

int main()
{
    int n;
    cout << "Enter the number of Birds:";
    cin >> n;
    int arr[100];
    cout << "Enter the type of Birds sighted:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MigratoryBirds(arr, n);
}