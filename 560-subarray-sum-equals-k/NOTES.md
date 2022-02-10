**Prefix Sum**
* In this question the key factor is that we look at a whole subarray and then try to divide it into a subarray with sum k and subarray with sum s - k. Where s is the cumulative sum uptil now.
* Look at the dry run of the following test case :
​
```
1 6 5 3 4 8 2 3 2
​
0  1  7  12 15 18 22 30 32 35 37
1  1  1  1   1   1   1   1   1   1   1
​
count = 3
```
​
when s became 7, s-k = 0, which exists in hashmap. This means we found a subarray that has a sum of 7 (the starting subarray in this case).
​

now when s became 22, s - k = 15, which exists in hashmap. and when s = 37, s - k = 30 exists in hashmap. This means we found a subarray that has a sum of 7 in both the cases.
​

what this means is that upto the last index sum is 37. and we are trying to see if we can divide this subarray into parts with sum as 30 and 7, which we are able to do.
​

Now you might think why are we using int, int when all the unique sum are occuring only once. Well this is the case when they elements are positive.
​

what about this test case:
```
1 -1 0
```

here the sum zero occurs twice. Hence the count will be 3.
​
​
