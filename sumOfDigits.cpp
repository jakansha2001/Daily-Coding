#include <iostream>

using namespace std;

int main()
{
    int sum=0,num,dig;
    cout<<"Enter a number\n";
    cin>>num;

    while(num!=0)
    {
    dig=(num%10);
    sum=sum+dig;
    num=num/10;
    }

    cout<<sum;

}



