#include <iostream>
#include <vector>
#include <climits>


using namespace std;
int MinimumDistances(vector<int> arr)
{
    int n=arr.size();
  int minDistance = INT_MAX;
    for(int i = 0; i < n; i++) {
    	for(int j = i+1; j < n; j++) {
    		if(arr[i] == arr[j] && j-i < minDistance) {
    			minDistance = j-i;
    		}
    	}
    }
    if(minDistance == INT_MAX) {
    	cout<<"-1";
    } else {
    	cout<<minDistance;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    vector<int> arr;
    int input;
    cout << "Enter vector elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }

    // cout << MinimumDistances(arr);
}