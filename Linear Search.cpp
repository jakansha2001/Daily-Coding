//Linear Search
#include <iostream.h>

int main()
{
int num;
int flag=0;
int arr[]={12,34,56,78,9,2,3,4,14,30};
cout<<"Enter element to be found"<<endl;
cin>>num;
for(int i=0;i<10;i++)
{
if(arr[i]==num)
{
cout<<"Element found at position --> "<<i+1<<endl;
flag=1;
break;
}
}

if(flag==0)
cout<<"Element not found"<<endl;

}


