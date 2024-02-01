#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
   int a,b,c,x;
  cin>>a>>b;
  int array[a*b];
  for(int i=0;i<a*b;i++)
  {
	cin>>array[i];
  }
  cin>>x; 
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "will take number" : cout << "will not take number";
}
