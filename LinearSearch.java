import java.io.*;
class LinearSearch
{
public static void main(String args[]) throws IOException
{
BufferedReader br1 = new BufferedReader(new InputStreamReader(System.in));
System.out.println("Enter element to be found");
int n = Integer.parseInt(br1.readLine());

int arr[] = {23,45,67,2,3,78,9,8,98,100};
int flag=0;
for(int i=0;i<10;i++)
{
  if(arr[i]==n)
  {
	    System.out.println("Element found at position "+(i+1));
        flag=1;
        break;
  }

}
if(flag==0)
{
	System.out.println("Element not found");
}
   
}
}