i#include<iostream>
using namespace std;


int main()
{
int line,cheer;
int sr=0;
cout<<"ENTER NUMBER OF LINES "<<endl;
cin>>line;
cout<<"ENTER NUMBER OF CHEERS "<<endl;
cin>>cheer;


for(int l=1;l<=line;l++){
	for(int s=1;s<l;s++){
		cout<<"   ";}

		for(int c=1;c<=cheer;c++){
			cout<<"Go ";
			if(cheer>=1 && c<=cheer-1){
				cout<<"Buddy ";
		
				}


}


cout<<endl;
}
return 0;
}



