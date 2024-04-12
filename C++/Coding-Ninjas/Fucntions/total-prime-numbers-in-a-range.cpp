#include <iostream>

using namespace std;

void printDivisors(int n) {

  cout << n << endl; // Include n itself as a divisor
}
//Write your totalPrime function here
int totalPrime(int start, int end) {
  int count = 0;
  for (int i = start; i <= end; i++) {
    int flag = 0;
    if(i==1){
      count+=1;
      continue;
    }
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        flag = 1;
        exit;
      }
    }
    if (flag == 0) {
      count += 1;
    }
  }
  return count;
}

int main() {
  int S, E;
  cin >> S >> E;
  cout << totalPrime(S, E);

  return 0;
}