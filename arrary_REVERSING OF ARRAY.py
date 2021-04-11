#Write a program to reverse an array or string

#Given an array (or string), the task is to reverse the array/string.

#method 1:
arr = [1, 2, 3, 4, 5, 6]
print ("Reversed string is",arr[::-1])

#method 2:


print("Reversed String is:",list(reversed(arr)))

#method 3:

def reverarr(arr,start,end):
    if start <end:
        start,end=end,start
        start+1
        end-1
    return arr

reverarr(arr,0,5)
print ("Reversed string is",arr)
