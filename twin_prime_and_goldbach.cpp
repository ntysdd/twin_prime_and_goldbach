#include <iostream>
#include <vector>

const int N = 1000000;

int f1(int n, std::vector<bool> const &primes) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (primes.at(i) && primes.at(i + 2)) {
      count++;
    }
  }
  return count;
}

int f2(int n, std::vector<bool> const &primes) {
  int count = 0;
  for (int i = 1; i <= n - 1; i++) {
    if (primes.at(i) && primes.at(n - i)) {
      count++;
    }
  }
  return count;
}

int main() {
  std::vector<bool> primes(N + 1, false);
  for (int i = 2; i <= N; i++) {
    primes.at(i) = true;
  }
  for (int i = 2; i * i <= N; i++) {
    if (!primes.at(i)) {
      continue;
    }
    for (int j = i * i; j <= N; j += i) {
      primes.at(j) = false;
    }
  }

  for (int i = 10; i <= N - 2; i += 2) {
    int count1 = f1(i, primes);
    int count2 = f2(i, primes);
    std::cout << i << " " << count1 << " " << count2 << "\n";
  }
}
