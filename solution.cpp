//
// Created by Kylian Lee on 2021/09/29.
//

#include <iostream>

using namespace std;

int main(){
  int prime[246913];
  fill_n(prime, 246913, 1);
  prime[0] = prime[1] = 0;
  for (int i = 2; i < 123457; ++i) {
    if(prime[i] == 0)
      continue;
    for (int j = i + i; j < 246913; j += i) {
      prime[j] = 0;
    }
  }
  for (int i = 1; i < 246913; ++i) {
    prime[i] += prime[i - 1];
  }
  int num;
  cin >> num;
  while(num){
    cout << prime[num * 2] - prime[num] << '\n';
    cin >> num;
  }
  return 0;
}