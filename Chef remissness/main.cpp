#include <iostream>

using namespace std;

int main()
{
    int t,a,b,min,max;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            min=a;
        else
            min=b;
        max=a+b;
        cout << min <<" "<< max << endl;
    }

    return 0;
}
