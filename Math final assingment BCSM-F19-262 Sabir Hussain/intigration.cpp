#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"\n\tIntigration By Parts";
	cout<<endl<<"\nIntegration of  x^2 * e^x";
	int cofi,exp;
	cofi=1;
	exp=2;
	cout<<endl<<endl;
	cout<<"Solution: ";
	cout<<endl<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<"\t="<<" x^"<<exp<<"*e^x - ";
		if(i==1)
		cout<<"integral [ "<<"e^x * "<<cofi<<"x^"<<exp<<"]";
		else if(i==2)
			cout<<"integral [ "<<"e^x * "<<cofi*exp<<"x^"<<exp-1<<"]";
		else if(i==3)
			cout<<cofi*exp<<"integral [ "<<"e^x * "<<"x^"<<exp-1<<"]";
		else if(i==4)
			cout<<cofi*exp<<"x*"<<"e^x +"<<cofi*exp<<" integral ["<<"e^x"<<"]";
		else if(i==5)
			cout<<cofi*exp<<"x*"<<"e^x + "<<cofi*exp<<"e^x";
			if(i!=5)
		        cout<<endl<<endl;
	}	
	cout<<" + C ";
	getch();
	return 0;
	
}
