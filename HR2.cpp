#include <iostream>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    int count=0;

    cout<<"kangaroo1 postion:";
    cin>>x1;
    cout<<"kangaroo1 speed:";
    cin>>v1;

    cout<<"kangaroo2 postion:";
    cin>>x2;
    cout<<"kangaroo2 speed:";
    cin>>v2;

    if(((x2-x1)*(v2-v1))<0) && ((x2-x1)%(v2-v1)==0)))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";

    }

    // cout<<"total number of jumps:"<<count;
    
}