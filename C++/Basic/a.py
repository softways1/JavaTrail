# lst = input("Enter: ").split(" ")

# lst = [int(n) for n in lst]

# oddNumber = [n for n in lst if n%2 == 1]
# evenNumber = [n for n in lst if n%2 == 0]

# print(oddNumber)
# print(evenNumber)

lst = input("Enter: ").split(" ")

lst = list(map(int ,lst))

evenNumber = list(filter(lambda x:x%2 == 0,lst))
oddNumber = list(filter(lambda x:x%2 == 1, lst))

print(oddNumber)
print(evenNumber)