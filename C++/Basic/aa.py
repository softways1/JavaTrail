str1 = input("Enter: ")
str2 = input("Enter: ")

lst1 = list(str1)
lst2 = list(str2)

lst1.sort()
lst2.sort()

print("Anagram" if lst1 == lst2 else "Not Anagram")