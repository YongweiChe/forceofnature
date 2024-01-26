#include <iostream>
#include <cmath>
#include <vector>

typedef long long ll;

std::vector<ll> getNumDivisors(ll q) {
  ll start = q;
  std::vector<ll> divisors;
  int numDivisors = 0;
  ll lim = std::ceil(std::sqrt(q));
  for (ll i = 2; i <= lim; i++) {
   while (q % i == 0 && q != 0 && i != start) {
      q /= i;
      divisors.push_back(i); 
      if (divisors.size() > 2) return divisors;
    } 
  }

  if (q != 1 && q != start) divisors.push_back(q);

  return divisors; 
}


int main() {
  ll q;
  std::cin >> q;

  std::vector<ll> divisors = getNumDivisors(q);

  int winner = divisors.size() == 2 ? 2 : 1;
  std::cout << winner << std::endl;

  if (winner == 1) {
    if (divisors.size() == 0) std::cout << 0 << std::endl;
    else std::cout << (divisors[0] * divisors[1]) << std::endl;
  }
  return 0;
}
