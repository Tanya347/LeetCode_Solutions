# Hamming Distance
**What is Hamming Distance**
Hamming distance is a metric for comparing two binary data strings. While comparing two binary strings of equal length, Hamming distance is the number of bit positions in which the two bits are different.
​
The Hamming distance between two strings, a and b is denoted as d(a,b).
​
**Example**
In order to calculate the Hamming distance between two strings, and , we perform their XOR operation, (a⊕ b), and then count the total number of 1s in the resultant string.
​
Suppose there are two strings 1101 1001 and 1001 1101.
​
11011001 ⊕ 10011101 = 01000100. Since, this contains two 1s, the Hamming distance, d(11011001, 10011101) = 2.