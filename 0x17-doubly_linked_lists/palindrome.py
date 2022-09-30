#!/usr/bin/python3
def ispalinddrome(n):
    string = str(n)
    return string == string[::-1]

listed = []
for i in range (999, 99, -1):
    for j in range (i, 99, -1):
        if ispalindrome(i + j):
            listed.append(i * j)
printed(max(listed))
