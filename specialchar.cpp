#include <iostream>
using namespace std;

int main() {
 int i, count=0;
 string s;
 cin >>s;
 for(i=0;i<=s.length();i++)
 {
  if(s[i]=='!'  || s[i]=='@' ||s[i]=='#' || s[i]=='$'||s[i]=='%'  || s[i]=='^'||s[i]=='&'  || s[i]=='*'|| s[i]=='_' || s[i]=='(' ||s[i]==')' ){
    count++;
  }
 }
   cout<<count;
	}
