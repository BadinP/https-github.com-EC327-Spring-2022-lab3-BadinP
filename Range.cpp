#include <iostream>
using namespace std;

int main() {
         int x, y, z;
         cout << "Enter start/stop/step integer (must be postive with space): ";
         cin >> x >> y >> z;


if (x == y) {
           cout <<"Bye bye" << endl;}

if(x < y){
  int i = x;
  while(i<=y){
    cout << i << ", ";
    i = i+z;
    continue;

  }
}

if(x > y){
  int i = x;
  int j = y;
  while(i>=j){
    cout << i << ", ";
    i = i-z;
    continue;

  }
}
return 0;
}
