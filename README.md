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
***Program to find Nth Ugly Number***
We are using dynamic programming to find an efficient solution for this problem.We keep on storing the ugly numbers in an array by choosing the minimum of three factors that are multiples of 2,3 or 5.Then we increment the pointer which gives the minimum factor to be stored as an ugly number.

**Q-6 (C1q6)**\
***Greatest Common Divisor of Strings***
First we will check if both strings have a gcd or not and for that addition of string 1 to string 2 must be equal to addition of string 2 to string 1 else we return an empty string.In case it is so, then we will simply calculate the gcd of their lengths as they are only repetitions of each other and then return substring of any string with number of characters equal to the calculated gcd.

**Q-7 (C1q7)**\
***Find the kid which gets tha damaged toy***
We can use a loop for this and iterate for m items and increment k till it becomes greater than n so that we can again initialize it to 1 as we are traversing a circle.Also, we can simply use the formula-(k+m-1)%n which is similar to the case of distributing in a straight line.

**Q-8 (C1q8)**\
***Total Decoding Messages***
If the string has leading zeroes or if the length of string is zero we return zero.Also, here we have used the method to add the count of the current digit decoding to the previous counts if it is valid and also add its count to the previous to previous counts in case the two digits are also valid.Then we update the counter pointers and move further in the string.

**Q-9 (C1q9)**\
***Number following a pattern***
We can use stack to solve this problem.Here, we are making splits at each I encountered and then reverse the count for each D.Create a stack of characters and as you traverse the string push a number initialized with 1 into it and increase it by 1 and for each I do the same but also pop all elements from stack and add to the answer string.At last push the number and pop all.

**Q-10 (C1q10)**\
***Find max 10 numbers in a list having 10M entries***
We could sort the list and take last k elements from it but since the size is very large we can use min heap for this.A min heap has its parent nodes lesser than their child nodes.Create a min heap of first k elements and then for every element afetr the kth eleemnt compare it with the root of the min heap, in case the element is greater than root node then make it the root else ignore that element and move to the next one.

**Q-11 (C1q11)**\
***Given an unsorted array Arr of size N of positive integers.One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array.Find these two numbers.***
Here we have used maps in STL to store the count of every number and then we check if an element is not present in the range 1 to n in the map that means the number is missing and if it is present then we check for the count is greater than 1 as then it would be our repeating number.

**Q-12 (C1q12)**\
***Find total number of Squares in a N*N chessboard***
If we calculate the total numers of squares in n*n chessboard it comes out to be 1^2 + 2^2 + 3^3 +.....n^2 which is equal to n*(n+1)*(2n+1)/6 but using this formula may give error so we write it in a different way like n*(n+1)/2 * (2*n+1)/3 as n*(n+1) will always be divisible by 2.

**Q-13 (C1q13)**\
***Decode the string***
We are using a stack of characters to push each element of string except ']' as on encountering this character we have to start decoding the string.We will pop all characters out of stack until we get an opening bracket and then add the popped characters to an empty string and push it into the stack and then we will use a loop to multiply that string to itself k times.At last we will pop all characters from stack and add them to an empty answer string and then return it.

**Q-14 (C1q14)**\
***Minimum Size Subarray Sum***
We have used sliding window method here.We have to keep a sum variable and add an element of the array.We keep on increasing the size of window till the sum is lesser than the target and in case the sum becomes equal or greater than the target we keep decreasing the size from left end to get the minimum size subarray and update the length variable.

**Q-15 (C1q15)**\
***Array Pair Sum Divisibility Problem***
Here we are using the technique of remainders so we create a map that keeps frequency of remainders obtained by dividing each element of the array by the given number k.Then in case the remainder is zero and it is odd in frequency, we will return false since then it cannot form pairs.Also the case is same with frequency of k/2 remainder as it requires another number to form pairs.In all other cases any remainder x can be added to the remainder k-x to get divided by the target k so their frequency should match.In case it doesn't we return fale else we return true. 

## Amazon Questions

**Q-1 (C2q1)**\
***Maximum Profit***
We are using dynamic programming here as it will give us the previous transactions and then we can find out the last one.Here, memset is used which is just a function to copy zero to all eleemnts of the dp array.

**Q-2 (C2q2)**\
***Longest Mountain***
We use peak and valley method here.We start counting for peak and valley once we get a peak ie. a value is lesser than its succeeding value.Till the time it is so we keep peak as true ans move on and till we get a valley i.e. a value is greater than its succeeeding value we keep valley as true and move on.In case we get both peak and valley as true at the same time it means we have covered a mountain so we then calculate its length and compare it with initial length of an mountain.

**Q-3 (C2q3)**\
***IPL 2021 - Match Day 2***
We have to just find the maximum of all subarrays here and for that we will use sliding window method.We start with the first index and increment it until we get the size of window given in the question.Till window size is less than k we keep pushing the elements for future use in a queue to get another maximum incase the window slides and earlier maximum element is not included now.So, when the size hits we calculate our maximum present at front and then remove it calculations from queue if this gave the maximum value then we slide the window.Finally, the maximum of all windows will lie on the front of this queue.

**Q-4 (C2q4)**\
***Brackets in Matrix Chain Multiplication***
We use the logic that the number of multiplications when multiplying a matrix with another is equal to the number of rows* then number of columns* the number from which the total cells are obtained and then we compare for the minimum value.

**Q-5 (C2q5)**\
***Phone Directory***
We have used a set from STL to store the contacts uniquely and then we traverse the string of contacts and insert all into the set.Then we traverse the given string to compare its each character with the available strings and if the character matches we add it to the answer string.In case the size of that array is zero we add a 0 to the answer string.

**Q-6 (C2q6)**\
***Maximum of all subarrays of size k***
We have to just find the maximum of all subarrays here and for that we will use sliding window method.We start with the first index and increment it until we get the size of window given in the question.Till window size is less than k we keep pushing the elements for future use in a queue to get another maximum incase the window slides and earlier maximum element is not included now.So, when the size hits we calculate our maximum present at front and then remove it calculations from queue if this gave the maximum value then we slide the window.Finally, the maximum of all windows will lie on the front of this queue.

**Q-7 (C2q7)**\
***First non-repeating character in a stream***
We use queue data structure to store non repeating character of the string.We then traverse the string and increase the count of encountered character if it is one then we push it into the queue and then pop that element from the queue which has higher frequency than 1,if now the queue becomes empty that means there is no non-repeating character so we append a # else we append the first character to the string.

**Q-8 (C2q8)**\
***.Count ways to N'th Stair(Order does not matter)***
This was the easiest problem I guess,since the order does not matter here, all we do is increment the ways by one when m is even.

**Q-9 (C2q9)**\
***Which among them forms a perfect Sudoku Pattern ?***
We check if the given sudoku satisfies the following three conditions or not to become valid-each of the row should contain unique values from 1-9,each column should contain unique values from 1-9,each submatrix should contain unique values from 1-9.When the cell doesnot contain a zero we check for these conditons else we move to the next cell.

**Q-10 (C2q10)**\
***Nuts and Bolts***
We are using quick sort for solving this problem like in quick sort we take a pivot element and divide the array into two sections, one is from starting to the pivot and the other is from the pivot to the end but pivot is not included anywhere.Then we use recurion to perform the same task with both the sections.

**Q-11 (C2q11)**\
***Tree Serialization and Deserialization***
We note that whichever traversal method we use in the serialize function to generate the array it will be passed to the deserialize function and then we have to construct the tree accordingly.So, here we have used preorder traversal and as when we build the tree we can take the first element of the array as root of the tree and then continue the process further for the other values of the array.In case there is a NULL we have to insert -1 in the array to check it in the desrialize function so as to check for NULL left or right child and also if the array size is zero initially that would mean the tree is empty so we return NULL.

**Q-12 (C2q12)**\
***Column name from a given column number***
Wehave used basic maths here,first find out the remainder(given number modulo 26) then remainder could either be zero or non-zero.If it is zero we insert 'Z' to the first index and move to the next index while updating value of the given number using division.In case it is non-zero, we insert the corresponding character at the index and increment the index while updating the value.

**Q-13 (C2q13)**\
***Rotten Oranges***
We will be using BFS technique to traverse all adjacent oranges of any rotten orange.We start with pushing all rotten oranges into the queue then pop them one by one and visit their adjacent cells, if the cell contains a fresh orange(1) push it to the queue and mark it as rotten(2), when the queue becomes empty, stop.Then check if the total number of oranges(calculated by traversing the matrix) is equal to the number of oranges pushed into queue(since queue has only rotten oranges) then return time(incremented after processing oranges at a time) else return -1(i.e. it is impossible to rot all fresh oranges).Also, to calculate or visit nodes of a rotten orange we have used the concept of calculating next row and column by adding the row number or column number to the existing number.

**Q-14 (C2q14)**\
***Tree Burning***
This is similar to the rotten oranges problem here we insert burnt nodes in the queue starting with the target node and visit its adjacenct nodes ie. left child,right child and parent.Since we have no direct link to the parent of that node we have to maintain a map initially that would store parents of all nodes and to find  the target node we can traverse the tree.

**Q-15 (C2q15)**\
***Delete N nodes after M nodes of a linked list***
We take a pointer initialize it with the head and traverse the linked list.We also maintain a counter variable which is zero initially and increment it as we move forward in the list.Till our counter variable is not equal to M we increment temp and when it becomes equal to M we have to delete N nodes from that point.To delete N nodes we simply change the address in the next field of prevoius node with the address mentioned in the Nth node.After this, we put the counter variable to zero again so that we can again count the M nodes to be skipped.








