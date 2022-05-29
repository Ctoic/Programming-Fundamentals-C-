#include<iostream>
using namespace std ;


int main()
{
    int size ;

    cout<<"Enter size of the table;"<<endl;
    cin>>size ;

    int i =  1 ;
    int k = 1 ;

    while(k<=size)
    {
	    cout<<"\t"<<k;
	    	k++;

    }
    cout<<"\n";

  cout<<"\t"<<"_____________________________________________________________________"<<endl;
    
  while(i<=size)
    {

        int j = 1;
	cout<<"\n";

        cout<<i<<"*";

        
		while(j<=size)
	        {
            
        	    cout<<"\t"<<i*j;
        	    
            		j++;
        	}
        cout<<"\n";
        i++;
    }
    return   0 ;
}
