int main() {
  int count=0;
  string s;
  getline(cin,s);
  for(int i=0;i<s.length();i++){
 
    if(s[i]=='.'){
      count++;
    }
  }
  cout << count;
}
