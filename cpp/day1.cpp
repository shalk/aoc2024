#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int N = 100;

int main (int argc, char *argv[]) {
  int a, b;
  vector<int> c, d;
  int size = 0;
  while(cin>>a>>b){
    size++;
    c.push_back(a);
    d.push_back(b);
  }
  sort(c.begin(), c.end());
  sort(d.begin(), d.end());
  int sum  = 0;
  for (int i = 0 ; i < size; i++) 
    sum += abs(c[i]-d[i]) ;

  cout << sum << endl;


  return 0;
}
