# 217 Contains Duplicate 

# Solution 
Completed using C++ nested loop with a conditonial statement to compare each value of the vector together and return true if equal.

Time complexity was O(n^2)

# Improvements
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

# 242 Valid Anagram

# Solution 

Struggled with this one orginally but the solution was obvious with sorting the strings. I easily sorted and compared the value of strings and also returning false if the string length was greater than the comparison string.

# Improvement
I improved the program with a hash map adding a counter for each char in the first string then if the char was in the second string, remove the counter by one for that char. This was pretty tricky at first with still being unfamilar with hash map inserting but when I got the hang of the hash map methods it made the solution a lot easier to understand.

I just double checked and the runtime for the hash map was 2 ms slower than the sorting and comparison solution, I guess simplicity wins.

# 49 Group Anagrams

# Solution 
This problem was very similar to the previous one with finding a valid anagram but was a lot harder for me to understand that the vector is included in the hash map as a value. The key being the sorted string which creates a empty vector and then the key is used to add the unsorted string value to the empty vector map value. 

The hardest part of this problem was again the hash map syntax.

# 
