#include <iostream>
using namespace std;

 long int breakingrecords(long int *score, int n)
{
    int i = 0;
    int max = score[0];
    int min = score[0];
   int minmax[2]={0,0};

    for (i = 1; i < n; i++)
    {
        if (score[i] > max)
        {
            max = score[i];
            minmax[1]++;
        }

        if (score[i] < min)
        {
            min = score[i];
            minmax[0]++;
        }
    }
    cout<<minmax[0]<<" "<<minmax[1]<<endl;
    return 0;

     
}

int main()
{
    int i = 0;
    long int score[100];
    int n;

    cout << "Enter the number of games" << endl;
    cin >> n;
    cout << "Enter scores in each game";
    for (i = 0; i < n; i++)
    {
        cin >> score[i];
    }

     breakingrecords(score, n);
}