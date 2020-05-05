#include <iostream>

using namespace std;

int main()
{
    int x,pro=1;
    cout<<"Enter the number whose factorial is to be found-->\n";
    cin>>x;

    while(x>1)
    {
    pro=pro*x;
    x=x-1;
    }
    cout<<pro;

}



