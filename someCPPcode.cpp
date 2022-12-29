#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	string name,name2, lastname,lastname2;
	int age, age2;
	
	cout<<"Ievadiet vardu: ";cin>>name;
	cout<<"\nIevadiet uzvardu: ";cin>>lastname;
	cout<<"\nIevadiet vecumu: ";cin>>age;
	
	cout<<"Hello my name is "<<name<<" "<<lastname<<" and i'm "<<age<<" old!"<<endl;
	
	cout<<"Ievadiet vardu: ";cin>>name2;
	cout<<"\nIevadiet uzvardu: ";cin>>lastname2;
	cout<<"\nIevadiet vecumu: ";cin>>age2;
	
	cout<<"Hello my name is "<<name2<<" "<<lastname2<<" and i'm "<<age2<<" old!"<<endl;


	system("pause>nul");
	return 0;
}
