#include<iostream.h>

void main()
{
	char c;
	cin>> c;
	if(c=='a' || c=='A' || c=='e' || c=='E' ||
	c=='i' || c=='I' || c=='o' || c=='O' ||
	c=='u' || c=='U')
	{
		cout<<"This is a Vowel";
	}
	else
	{
		cout<<"Constant";
	}
	return 0;
}
