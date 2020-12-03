#include <bits/stdc++.h>

using namespace std;


int main(){
 char t; 
 string l;
 ifstream f3("3.txt");
 vector<string> m;
 while(getline(f3,l)){
  m.push_back(l);
 }
 int a,b,c,d,e;
 cin >> c >> d >> e;
 cout << m[a].size() << " " << m.size()  <<   endl;
  // a_max = 323; b_max = 31;
  // traverse from (0,0) -> (968,321)
  // if a >
  a = 0;
  b = 0;
  long long x = 0;
  int f = 323*e;
  while(a < f && b < 323){
    t = m[b][(a%31)];
    if(t == '#'){
      x += 1;
    }
    a += c;
    b += d;
  }
  cout << x << endl;
}
