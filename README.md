# 217 Contains Duplicate 

# Solution 
Completed using C++ nested loop with a conditonial statement to compare each value of the vector together and return true if equal.

Time complexity was O(n^2)

# Inprovements
Sorting the vector before looping brings the time complexity to O(nlogn). 

Even better is a hash set which would check if the current index is in the hash set and if it is then it returns true; otherwise it would add that index value to the hash set and continue, returning false if no similar values are found in the hash set. 

Time Complexity would be O(n)

# 01 Two Sum

# Solution 
Completed this assignment with the normal double loop time complexity was O(n^2). Then I challenged myself with using a hash map to improve performance. 

# Improvements
The hash map was tricky to understand but after messing around I was able to complete the assignment with O(n).
The hash map is O(n) because in the program there is one loop which checks the key and if the key is seen then it returns the key and the current index. 

# Mistakes 
I made a lot of mistakes on trying to loop twice which wasn't required. I also was messing up the specific unorderedmap methods. In the end I was able to better understand when to use a hash map or a hash set.
