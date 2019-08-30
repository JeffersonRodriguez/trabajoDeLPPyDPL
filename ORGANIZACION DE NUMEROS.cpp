#include<iostream>
using namespace std;
main()
{
	int n1,n2,n3;
	cout<<"organizacion de numeros de mayor a menor \n\n";
	cout<<"Digite el primer numero: ";
	cin>>n1, cout<<"\n\n";
	cout<<"Digite el segundo numero: ";
	cin>>n2, cout<<"\n\n";
	cout<<"Digite el tercer numero: ";
	cin>>n3, cout<<"\n\n";
	if((n1<n2)&&(n2<n3))	
	{
		cout<<"el numero menor es: "<<n1;
		cout<<"\n el numero medio es: "<<n2;
		cout<<"\n el numero mayor es: "<<n3;
	}	
	else
	if((n3<n2)&&(n2<n1))	
	{
		cout<<"el numero menor es: "<<n3;
		cout<<"\n el numero medio es: "<<n2;
		cout<<"\n el numero mayor es: "<<n1;		
	}
	else
	if((n2<n1)&&(n1<n3))	
	{
		cout<<"el numero menor es: "<<n2;
		cout<<"\n el numero medio es: "<<n1;
		cout<<"\n el numero mayor es: "<<n3;		
	}
	else
	if((n3<n1)&&(n1<n2))	
	{
		cout<<"el numero menor es: "<<n3;
		cout<<"\n el numero medio es: "<<n1;
		cout<<"\n el numero mayor es: "<<n2;		
	}
	else
	if((n2<n3)&&(n3<n1))	
	{
		cout<<"el numero menor es: "<<n2;
		cout<<"\n el numero medio es: "<<n3;
		cout<<"\n el numero mayor es: "<<n1;		
	}
	else
	if((n1<n3)&&(n3<n2))	
	{
		cout<<"el numero menor es: "<<n1;
		cout<<"\n el numero medio es: "<<n3;
		cout<<"\n el numero mayor es: "<<n2;		
	}
	
}
