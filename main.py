numbers = [5, 3, 8, 1, 9, 2, 7, 4, 6, 10]

print("Original:", *numbers)

numbers.sort()

print("Sorted:  ", *numbers)
print("Sum:", sum(numbers))
print("Avg:", sum(numbers) / len(numbers))
