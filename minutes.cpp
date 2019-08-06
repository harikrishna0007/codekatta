#include <iostream>
#include<string>
using namespace std;

int main() {
     int minutes,h,r;
     cin >> minutes;
     h=minutes/60;
     r=minutes%60;
     cout << h <<' ' <<r;
     
}
