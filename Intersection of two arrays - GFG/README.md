# Intersection of two arrays
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two arrays&nbsp;<strong style="user-select: auto;">a[]</strong> and <strong style="user-select: auto;">b[]</strong> respectively of size <strong style="user-select: auto;">n</strong> and <strong style="user-select: auto;">m, </strong>the task is to print the count of elements in the intersection (or common elements) of the two arrays.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays.&nbsp;</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">
Explanation: 
</strong>89 is the only element 
in the intersection of two arrays.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Input:
</span></strong><span style="font-size: 18px; user-select: auto;">n = 6, m = 5
a[] = {1, 2, 3, 4, 5, 6}
b[] = {3, 4, 5, 6, 7} 

<strong style="user-select: auto;">Output: </strong>4
<strong style="user-select: auto;">
Explanation: 
</strong>3 4 5 and 6 are the elements 
in the intersection of two arrays.</span>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">You don't need to read input or print anything.&nbsp;Your task is to complete the function&nbsp;<strong style="user-select: auto;">NumberofElementsInIntersection()</strong><strong style="user-select: auto;">&nbsp;</strong>which takes two integers <strong style="user-select: auto;">n</strong>&nbsp;and <strong style="user-select: auto;">m</strong>&nbsp;and their respective arrays&nbsp;<strong style="user-select: auto;">a[]&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">b[]</strong> &nbsp;as input. The function should return&nbsp;the count of the number of elements in the intersection.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n&nbsp;+ m).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(min(n,m)).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ n, m&nbsp;≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ a[i], b[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>