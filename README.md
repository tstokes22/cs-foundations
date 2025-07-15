# 217 Contains Duplicate 

# Solution 
Completed using C++ nested loop with a conditonial statement to compare each value of the vector together and return true if equal.

Time complexity was O(n^2)

# Inprovements
Sorting the vector before looping brings the time complexity to O(nlogn). 

Even better is a hash set which would check if the current index is in the hash set and if it is then it returns true; otherwise it would add that index value to the hash set and continue, returning false if no similar values are found in the hash set. 

Time Complexity would be O(n)
