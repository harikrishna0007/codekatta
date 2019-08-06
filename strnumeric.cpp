#include <iostream>
using namespace std;

int main() {
	string a;
	int count=0;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if((a[i]>='0'&& a[i]<='9') || a[i]=='.'){
			count++;
		}
		
	}
	if(count==a.length()){
		cout<<"Yes";
	}	else{
		cout<<"No";
	}

}
