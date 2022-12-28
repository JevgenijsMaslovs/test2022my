#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	string name, lastname;
	int age;
	
	cout<<"Ievadiet vardu: ";cin>>name;
	cout<<"\nIevadiet uzvardu: ";cin>>lastname;
	cout<<"\nIevadiet vecumu: ";cin>>age;
	
	cout<<"Hello my name is "<<name<<" "<<lastname<<" and i'm "<<age<<" old!"<<endl;


	system("pause>nul");
	return 0;
}
