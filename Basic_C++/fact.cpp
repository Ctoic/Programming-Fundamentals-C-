#include<iostream>
using namespace std ;

int factorial(int n)
{
    int fact = 1;
    if(n<0)
    {
        cout<<"error";

    }
    else
    {
        for(int i = 1 ; i<=n ; i++)
        {
            fact*=i;
        }
    }
    return fact;

}


int main()
{
    int num ;
    cout<<"enter num:"<<endl;
    cin>>num ;
    cout<<factorial(num);
}