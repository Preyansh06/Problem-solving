#include <iostream>
using namespace std;
int UtopianTree(int n)
{
    int cycles[100];
    int height;

    for (int i = 0; i < n; i++)
    {
        cin >> cycles[i];
    }
    for (int i = 0; i < n; i++)
    {
        height = 1;
        for (int j = 1; j <= cycles[i]; j++)
        {
            
            if (j % 2 != 0)
                height = height * 2;
            else
                height = height + 1;
        
        }

        cout << height << endl;
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter number of Test cases";
    cin >> n;
    UtopianTree(n);
}