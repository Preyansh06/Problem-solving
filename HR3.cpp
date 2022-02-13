#include <iostream>
// HackerRank --- Problem solving----Bon Appetite
using namespace std;
int main()
{
    long long i;
    long long amount_taken;
    long long bill[100];
    long long a[2];
    cout << "Enter number of item ordered and item not eaten by Anna:" << endl;
    cin >> a[0] >> a[1];
    long long refund = 0, sum = 0, pay = 0;

    cout << "Enter Bill of each item ordered:"<<endl;
    for (i = 0; i < a[0]; i++)
    {
        cin >> bill[i];
    }

    cout << "Enter the amount taken by Brian";
    cin >> amount_taken;

    for (i = 0; i < a[0]; i++)
    {
        sum += bill[i];
    }
    long long sum1 = sum - bill[a[1]];
    long long half = sum / 2;

    pay = sum1 / 2;

    if (amount_taken == pay)
    {
        cout << "Bon Appetit";
    }
    else
    {
        refund = half - pay;
        cout << refund;
    }
}
