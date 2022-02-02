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
​
**Brian Kernighan's Algorithm**
Method to count set bits
​
The idea is to only consider the set bits of an integer by turning off its rightmost set bit (after counting it), so the next iteration of the loop considers the next rightmost bit.
​
The expression n & (n-1) can be used to turn off the rightmost set bit of a number n. This works as the expression n-1 flips all the bits after the rightmost set bit of n, including the rightmost set bit itself. Therefore, n & (n-1) results in the last bit flipped of n.
​
For example, consider number 52, which is 00110100 in binary, and has a total 3 bits set.
​
```
1st iteration of the loop: n = 52
00110100    &               (n)
00110011                    (n-1)
~~~~~~~~
00110000
2nd iteration of the loop: n = 48
00110000    &               (n)
00101111                    (n-1)
~~~~~~~~
00100000
3rd iteration of the loop: n = 32
00100000    &               (n)
00011111                    (n-1)
~~~~~~~~
00000000                    (n = 0)
```
​