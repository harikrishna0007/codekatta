#include <iostream>
using namespace std;

int main() {
	int n,b,a;
	cin>>n;
	if(n>0){
		a=n/2;
		b=a%2;
	}
	if(n==2 || n==1 || n==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
