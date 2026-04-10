#include <algorithm>
#include <array>
#include <cstdio>
#include <numeric>
#include <stdexcept>

constexpr int Add(int a, int b) { return a + b; }
constexpr int Subtract(int a, int b) { return a - b; }
constexpr int Multiply(int a, int b) { return a * b; }
inline double Divide(int a, int b) {
  if (b == 0) throw std::invalid_argument("division by zero");
  return static_cast<double>(a) / b;
}

template <std::size_t N>
void PrintArray(const char* label, const std::array<int, N>& arr) {
  std::printf("%s", label);
  for (int n : arr) std::printf("%d ", n);
  std::printf("\n");
}

int main() {
  std::array<int, 10> numbers = {5, 3, 8, 1, 9, 2, 7, 4, 6, 10};

  PrintArray("Original: ", numbers);
  std::sort(numbers.begin(), numbers.end());
  PrintArray("Sorted:   ", numbers);

  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  double avg = static_cast<double>(sum) / numbers.size();

  std::printf("Sum: %d\n", sum);
  std::printf("Avg: %.1f\n", avg);

  std::printf("\n=== Calculator ===\n");
  std::printf("10 + 3 = %d\n", Add(10, 3));
  std::printf("10 - 3 = %d\n", Subtract(10, 3));
  std::printf("10 * 3 = %d\n", Multiply(10, 3));
  std::printf("10 / 3 = %.2f\n", Divide(10, 3));

  return 0;
}
