#include<iostream>
#include<cmath>
using namespace std;
int reverse(int days)
{
     int rev=0,rem;
     while(days!=0)
        {
            rem=days%10;
            rev= rev*10+ rem;
            days=days/10;
        }
        return rev;
}
int BeautifulDays(int i,int j,int k)
{
    int days,BeautifulDays=0;
   int diff=0,rev;
    for ( int m = i; m <= j; m++)
    {
        days=m;
        // cout<<days<<endl;
       rev= reverse(days);
        cout<<rev<<endl;
        diff=abs(rev-days);
        if(diff%k==0)
        {
            BeautifulDays++;
        }


        
    }
    return BeautifulDays;
}
int main()
{
    int starting_day , ending_day, divisor;
    cout<<"Enter starting day:"<<endl;
    cin>>starting_day;

    cout<<"Enter ending day:"<<endl;
    cin>>ending_day;

    cout<<"Enter divisor:"<<endl;
    cin>>divisor;

    cout<<BeautifulDays(starting_day,ending_day,divisor);
    
}