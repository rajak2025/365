input1 = input()
numbers = []
numbers = input1.split(" ")
numbers.sort()
print(numbers)
print(abs(int(numbers[0]) - int(numbers[1])))