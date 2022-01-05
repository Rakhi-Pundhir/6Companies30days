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
OR 
We can make use of maps in STL. Create a map with characters as keys and integer as values then insert each characeter of the string into it and increment the count of that key as you traverse the string and encounter it.At last pop all key value pairs and append them to an empty string,use to_string function to convert integer count of characters into string so that they can be added to the answer string.

**Q-5 (C1q5)**\
***Program to find Nth Ugly Number**
We are using dynamic programming to find an efficient solution for this problem.We keep on storing the ugly numbers in an array by choosing the minimum of three factors that are multiples of 2,3 or 5.Then we increment the pointer which gives the minimum factor to be stored as an ugly number.

**Q-6 (C1q6)**\
***Greatest Common Divisor of Strings**
First we will check if both strings have a gcd or not and for that addition of string 1 to string 2 must be equal to addition of string 2 to string 1 else we return an empty string.In case it is so, then we will simply calculate the gcd of their lengths as they are only repetitions of each other and then return substring of any string with number of characters equal to the calculated gcd.

**Q-9 (C1q9)**\
***Number following a pattern**
We can use stack to solve this problem.Here, we are making splits at each I encountered and then reverse the count for each D.Create a stack of characters and as you traverse the string push a number initialized with 1 into it and increase it by 1 and for each I do the same but also pop all elements from stack and add to the answer string.At last push the number and pop all.

**Q-12 (C1q12)**\
*** Find total number of Squares in a N*N chessboard**
If we calculate the total numers of squares in n*n chessboard it comes out to be 1^2 + 2^2 + 3^3 +.....n^2 which is equal to n*(n+1)*(2n+1)/6 but using this formula may give error so we write it in a different way like n*(n+1)/2 * (2*n+1)/3 as n*(n+1) will always be divisible by 2.

**Q-13 (C1q13)**\
*** Decode the string**
We are using a stack of characters to push each element of string except ']' as on encountering this character we have to start decoding the string.We will pop all characters out of stack until we get an opening bracket and then add the popped characters to an empty string and push it into the stack and then we will use a loop to multiply that string to itself k times.At last we will pop all characters from stack and add them to an empty answer string and then return it.

**Q-14 (C1q14)**\
*** Minimum Size Subarray Sum**
We have used sliding window method here.We have to keep a sum variable and add an element of the array.We keep on increasing the size of window till the sum is lesser than the target and in case the sum becomes equal or greater than the target we keep decreasing the size from left end to get the minimum size subarray and update the length variable.

**Q-15 (C1q15)**\
*** Array Pair Sum Divisibility Problem**
Here we are using the technique of remainders so we create a map that keeps frequency of remainders obtained by dividing each element of the array by the given number k.Then in case the remainder is zero and it is odd in frequency, we will return false since then it cannot form pairs.Also the case is same with frequency of k/2 remainder as it requires another number to form pairs.In all other cases any remainder x can be added to the remainder k-x to get divided by the target k so their frequency should match.In case it doesn't we return fale else we return true. 

**Q-7 (C1q7)**\
*** Find the kid which gets tha damaged toy**
We can use a loop for this and iterate for m items and increment k till it becomes greater than n so that we can again initialize it to 1 as we are traversing a circle.Also, we can simply use the formula-(k+m-1)%n which is similar to the case of distributing in a straight line.

**Q-8 (C1q8)**\
***Total Decoding Messages**
If the string has leading zeroes or if the length of string is zero we return zero.Also, here we have used the method to add the count of the current digit decoding to the previous counts if it is valid and also add its count to the previous to previous counts in case the two digits are also valid.Then we update the counter pointers and move further in the string.

**Q-11 (C1q11)**\
***Given an unsorted array Arr of size N of positive integers.One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array.Find these two numbers.**
Here we have used maps in STL to store the count of every number and then we check if an element is not present in the range 1 to n in the map that means the number is missing and if it is present then we check for the count is greater than 1 as then it would be our repeating number.


