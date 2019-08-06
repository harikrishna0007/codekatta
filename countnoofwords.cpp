#include <iostream>
using namespace std;

int main() {
  int count=0;
   int sum=1;
  string s;
  getline(cin,s);
  for(int i=0;i<s.length();i++){
    count++;
    if(s[i]==' '){
  sum=sum+1;
    }
  }
  cout << sum;
}
