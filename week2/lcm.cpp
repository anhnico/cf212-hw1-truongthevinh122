#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

int lcm_fast(int a, int b)
{ 
    int temp = 1;
 
    if (temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    common++;
    lcm(a, b);
    return temp;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
