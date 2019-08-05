#include <iostream>
using namespace std;

int main() {
	int n;
  int o;
  int h=0;
  
  
	cin>>o;
	int k[o];
	cin>>n;
	for(int i=0;i<5;i++)
	{
		cin>>k[i];
	}
	for(int i=0;i<n;i++)
	{
		h=h+k[i];
	}
	cout<<h;
	
}
