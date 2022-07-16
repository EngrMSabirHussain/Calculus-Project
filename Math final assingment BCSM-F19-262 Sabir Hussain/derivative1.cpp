#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	int value;
    cout<< "\n\n\tDERIVATIVES By Power rule";
    cout<<"\n\nHow many value you want to enter in Derivative Function? : ";
	cin>>value;
	int coef[value],exp[value];
	for(int i=0;i<value;i++) 
	{
		cout << "\n\nEnter coefficient of "<<i+1<<" value : ";
        cin >> coef[i];
        cout << "Enter exponent of "<<i+1<<" value: ";
        cin >> exp[i];	
	}
	cout<<"\n\nf(x) = ";
	for(int i=0;i<value;i++)
	{
		cout<<coef[i]<<"x^"<<exp[i];
		if(i!=value-1)
		cout<<"+";
	}
	int product;
	cout<<"\n\nf'(x) = ";
	for(int i=0;i<value;i++)
	{
		product=coef[i]*exp[i];
		if(product!=0)
		{
			if(exp[i]-1==0)
			     cout<<product;
			else
		         cout<<product<<"x^"<<exp[i]-1;		
		}
		else 
		cout<<0;
		if(i!=(value-1))
		cout<<" + ";		
	}
 getch();
 return 0;
}

