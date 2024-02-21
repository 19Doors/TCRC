#include <iostream>

using namespace std;
int main() {
  int ar[] = {5,1,3,2,6};
  int n = 5;

  // Insertion Sort in decreasing order
  for(int i = 1; i<n; i++) {
    int key = ar[i];
    int j = i-1;
    while(j>=0 && ar[j]<key) {
      ar[j+1] = ar[j];
      j = j-1;
    }
    ar[j+1] = key;
  }
  for(auto &x: ar) {
    cout << x << " ";
  }
  cout << endl;

  // Linear Search
  int x = 0;
  int f; cin >> f;
  for(int i = 0; i<n; i++) {
    if(ar[i] == f) {
      x = 1;
      cout << "Found element at " << i+1 << endl;
      break;
    }
  }
  if(x==0)
    cout << "Element not found in array."<<endl;
  cout << endl;
}
