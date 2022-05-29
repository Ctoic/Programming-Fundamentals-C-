#include<iostream>
using namespace std;




int main()
{
int r,s,n,no,c,r2,s2,c2;
char h=65,k=113;


no=1;
int ni=1;


cout<<"ENTER TH ENUMBER OF ROWS"<<endl;
cin>>n;
for(r=1;r<=n;r++){

	for(s=n-1;s>=r;s--){
		cout<<" ";
		}

		for(c=1;c<=no;c++){
			cout<<h;
			h++;
			}


no+=2;
cout<<endl;

}


h--;


for(r=1;r<=n;r++){
	for(s=r-1;s>=1;s--){
		cout<<" ";
		}
		for(c=1;c<no-1;c++){
			cout<<h;
			h--;
			}

		
no-=2;
cout<<endl;

}


    return  0 ;
}
