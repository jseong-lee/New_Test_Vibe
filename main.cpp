#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> numbers = {5, 3, 8, 1, 9, 2, 7, 4, 6, 10};

  std::cout << "Original: ";
  for (int n : numbers)
    std::cout << n << " ";
  std::cout << "\n";

  std::sort(numbers.begin(), numbers.end());

  std::cout << "Sorted:   ";
  for (int n : numbers)
    std::cout << n << " ";
  std::cout << "\n";

  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  double avg = static_cast<double>(sum) / numbers.size();

  std::cout << "Sum: " << sum << "\n";
  std::cout << "Avg: " << avg << "\n";

  return 0;
}
