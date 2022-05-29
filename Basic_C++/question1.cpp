#include<iostream>
#include<iomanip>
#include<cmath>


using namespace std;




int main()
{


int rem,upper_l,lower_l;
int count=0;


cout<<"Please enter one of a number from this list (0 to 20 ) as upper limit: "<<endl;
cin>>upper_l;


//To check if the input coincides with the given values
//while(upper_l != 2)
while(upper_l != 256 && upper_l != 128 && upper_l != 64 && upper_l != 32 && upper_l != 16 && upper_l != 8 && upper_l != 4 && upper_l != 2)
{
cout<<"Please enter one of a number from this list (256, 128, 64, 32, 16, 8, 4 or 2) as upper limit: "<<endl;
cin>>upper_l;
}


cout<<"Enter the value greater than 0 and less than the upper limit as lower limit "<<endl;
cin>>lower_l;


//To check the lower value is invalid as if it is a negative number or greater than the upper limit
while( (lower_l >= upper_l) || (lower_l<0) )
{
cout<<"Enter the value greater than 0 and less than the upper limit as lower limit "<<endl;
cin>>lower_l;


}


cout<<"Decimal        Binary          Octal        Hexadecimal "<<endl;
cout<<"--------------------------------------------------------"<<endl;


//loop to go from lower to upper limit
for(int i=lower_l ; i<=upper_l ; i++)
{
cout<<setfill(' ')<<setw(3)<<dec<<i<<"           ";


//This is to find how many binary bits are in the decimal number
int n=i;
int rem;
int count=0;
n=i;


do{
rem=n%2;
n=(n-rem)/2;
count++;
}while(n!=0);


//This is to convert decimal into binary using reminder method
int num=0;
int cnt;
cnt=0;
int m=i;


do{
rem=m%2;
m=(m-rem)/2;
num=num+(rem*pow(10,cnt));
cnt++;


}while(m!=0);


//output number in decimal form
cout<<setfill('0')<<setw(9)<<num<<"   ";


//output number if octal form
cout<<setfill(' ')<<setw(5)<<oct<<i;


//output number in hexadecimal form
cout<<setfill(' ')<<setw(10)<<hex<<i<<endl;




}




return 0;
}
