#include<iostream>
using namespace std;

int main()
{
  
	int a, b, c, big;
	cin>>a>>b>>c;
	//let a is the biggest
	big=a;
	if(big<b)
	{
		if(b>c)
		{
			big=b;
		}
		else
		{
			big=c;
		}
	}
	else if(big<c)
	{
		if(c>b)
		{
			big=c;
		}
		else
		{
			big=b;
		}
	}
	else
	{
		big=a;
	}
	cout<<big;
	return 0;
}
