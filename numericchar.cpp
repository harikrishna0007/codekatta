#include <iostream>
using namespace std;

int main() {
 int i, count=0;
 string s;
 cin >>s;
 for(i=0;i<=s.length();i++)
 {
  if(s[i]=='0'  || s[i]=='1' ||s[i]=='2' || s[i]=='3'||s[i]=='4'  || s[i]=='5'||s[i]=='6'  || s[i]=='7'|| s[i]=='8' || s[i]=='9' ){
    count++;
  }
 }
   cout<<count;
	}
