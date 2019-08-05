    
#include <iostream>
using namespace std;
int main()
{

	char ch;
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	{
		cout<<ch<<"Alphabet";
	}
	else
	{
		cout<<ch<<"No";
	}
	return 0;
}
