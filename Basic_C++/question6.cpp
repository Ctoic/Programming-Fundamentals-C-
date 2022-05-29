#include<iostream>
using namespace std;

bool isHappyNumber(int num);

int main()
{
int number,result;

cout<<"ENTER A NUMBER TO CHECK IF ITS HAPPY OR NOT "<<endl;
cin>>number;

result=isHappyNumber(number);

if(result)
cout<<"IT IS A HAPPY NUMBER "<<endl;

else
cout<<"IT IS NOT A HAPPY NUMBER "<<endl;

return 0;
}

bool isHappyNumber(int num)
{
int sum=0,res=0,c=0,count=0;
bool happy=false;

while(count<=100)
{
	while(c<=50)
	{


		if(num<10)
			sum+=(num*num);


		else
		{
			res=num%10;
			sum+=(res*res);
		}
			num/=10;


			c++;


	}




if(sum==1)
happy=1;


num=0;
num=sum;
sum=0;
count++;
c=0;
}

if(happy)
return 1;


else
return 0;
}
