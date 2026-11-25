#include<iostream>
using namespace std;
int main(){
int original=50;
int &ref = original; // ref ab original ka hi doosra naam hai

cout << original << endl; // 50
cout << ref << endl;      // 50

ref = 80; // ref badla, toh original bhi badal jayega
cout << original << endl; // 80
return 0;
 }
 