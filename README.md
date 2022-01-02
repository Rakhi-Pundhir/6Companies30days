# 6Companies30days

## Goldman Sachs Questions
**Q-1 (C1q1)**\
***Given an array of strings, return all groups of strings that are anagrams***
To check if two strings are anagrams or not we sort both strings and then compare them, if they are equal they are said to be anagrams else not.
Here we are using maps of STL to optimize our solution that uses nested loops to compare each string with all other strings.
We traverse the string only once and sort each string and this sorted string acts as key of map and values would be the actual string
then we compare other strings with it and if they are anagrams of this string then they will be added as values of this key in the map.

**Q-2 (C1q2)**\
***Overlapping rectangles***
We can find all points and check if they lie inside the other rectangle or not but feasible will be to check for those conditions when the two rectangles will not overlap.
These are - when a rectangle is above the other rectangle ( check this using the y coordinates )
and when a rectangle is to the left of the other rectangle ( check this using the x coordinates )
Also check if either rectangle is just a line.

**Q-3 (C1q3)**\
***Count the subarrays having product less than k***
We can use nested loops and form all subarrays then compare which subarray gives product less than k but time complexity would then be n squared so we optimize this using sliding window method.We calculate the product of elements in the window then move the window by one element, if product now becomes equal or greater than k we move the left point of the window and delete its entry by division else we add the number of elements in the answer variable and move the right point of the window.

**Q-4 (C1q4)**\
***Run Length Encoding***
We traverse the string and count the occurences of every character then append that string character and its count to the result string then return it.

**Q-5 (C1q5)**\
***Program to find Nth Ugly Number**
We are using dynamic programming to find an efficient solution for this problem.We keep on storing the ugly numbers in an array by choosing the minimum of three factors that are multiples of 2,3 or 5.Then we increment the pointer which gives the minimum factor to be stored as an ugly number.


