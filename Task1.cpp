/*This is a C++ implementation of High Lower Guessing Game where the Computer puts a number and the user needs to guess it. If the
user guesses a greater number than what computer has put up, a message is displayed that User has entered a greater number and vice
versa. In addition, Lifeline Options have also been added to the game to allow the user some hints like whether the number is Even/Odd,
Prime/Composite or the sum of digits. A Guess counter has also been added for further compatability. */

#include<iostream.h>
#include <stdlib.h>

void lifeline1(int a)
{
if(a%2==0)
cout<<"The secret number is even"<<endl;
else
cout<<"The secret number is odd"<<endl;
}


void lifeline2(int a)
{
int sum=0;
while(a!=0)
{
sum+=(a%10);
a/=10;
}
cout<<"The sum of digits in the secret number is "<<sum<<endl;
}


void lifeline3(int a)
{
int count = 0;
for(int i=2;i<a;i++)
{
if(a%i==0)
{
count++;
break;
}
}
if(count==0)
cout<<"The secret number is prime"<<endl;
else
cout<<"The secret number is composite"<<endl;
}

void game()
{
srand(time(0));
int number;
number = rand()%100+1;
cout<<"----------Number Guessing Game-----------"<<endl;
cout<<"The computer has generated a number between 0 to 100!! You have to guess the number computer has generated"<<endl;
cout<<"For your help, the game has 3 Lifelines!! If you want to take a lifeline just enter -1 as your choice"<<endl;
int temp=0;
int player;
int life=3;
char ch;
while(temp>=0)
{
cout<<"Enter your guess"<<endl;
cin>>player;
if(player==-1)
{
      if(life==3)
      {
        lifeline1(number);
        life = life-1;
      }
      else if(life==2)
      {
        lifeline2(number);
        life = life-1;
      }
      else if(life==1)
      {
        lifeline3(number);
        life = life-1;
      }
      else
       cout<<"You don't have any lifelines left";
}

else if(player == number)
{
cout<<"Your guess is correct!! Congratulations"<<endl;
break;
}

else if(player>number)
{
cout<<"OOPS!! You have entered a number greater than what computer generated... TRY AGAIN!!"<<endl;
temp+=1;
}


else if(player<number)
{
cout<<"OOPS!! You have entered a number smaller than what computer generated... TRY AGAIN!!"<<endl;
temp+=1;
}

else
{
cout<<"Invalid Choice"<<endl;
temp+=1;
}
}

if(temp==0)
cout<<"You arrived at the conclusion head-on. You are a PRO! "<<endl;
else
cout<<"You made "<<temp<<" guesses before arriving to correct conclusion \n";

cout<<"Do you want to continue[Y/N]??"<<endl;
cin>>ch;
if(ch=='y'||ch=='Y')
game();
else
exit(100);
}



int main()
{
game();
return 0;
}






