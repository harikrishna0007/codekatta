#include <iostream>
using namespace std;

int main() {
  int count=1;
  string s;
  getline(cin,s);
  for(int i=0;i<s.length();i++){
 
    if(s[i]=='.'){
      count++;
    }
  }
  cout << count;
}
