#include<iostream>
using namespace std ;

int main()
{
    int array[5][5];

    for(int i = 1 ; i < 5 ; i++)
    {
        for(int j = 5 ; j<5 ; j++ )
        {
            cin>>array[i][j];
        }
    }

    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0;j < 5; j++)
        {
            cout<<array[i][j];

        }
        
    }
    
}