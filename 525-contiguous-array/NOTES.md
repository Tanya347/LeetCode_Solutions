**Concept of Prefix Sum**
​
* In this question if one would try using dp or two pointer it's not going to work
* So the only option is to use the concept of prefix sum and using another array.
* So what we are doing is we are using a cumulative sum, in which we add 1 when we encounter 1 and -1 when we encounter 0.
* Now we will store the indices of the occurances of different sums.
​
**Approach 1**
* As the sum can vary from -n to n, we will create a 2 * n + 1 array and store the indices of whenever different kinds of sum occur.
​
* For example initally as the sum is 0 we have stored -1 there. We will take the nth index as 0 and indices greater than n for positive sums and lesser than n for negative sums. Imagine it as a number line with the nth index being the origin.
​
* When sum is one, we will store the index where we got the sum 1 at (n + sum)th index. Which will represent 1 on the number line. Similarly if sum is -2, then the index in the extra array where we have to look at is n - 2, which can be simply achieved by sum + n only. So for finding the point on our imaginary number line we will use sum + n
​
* So we keep finding prefix sum and storing the index of the occurence of these sums at (sum + n)th index in the extra array
​
* Now when we are travelling from the start and encounter the first 0, we will want to have the length as that particular index + 1 right. Since array indices start from 0.
​
* So we already have placed -1 at 0 (aka n) in the extra array. So suppose we encounter 0 at index 3. Then we will get length as 3 - (-1) i.e. 4. 0 means there were equal number of 1s and 0s uptil now.
​
* But it can also be possible that our maximum length subarray exists sumwhere in the middle of the array. So that is why we are keeping a check of the indices at which the sum are occuring. We use ```max(maxLength , i - index[sum + n])``` to find the length between the last occurrence of the same sum.
​
* We only do this when the number stored at the index is >= -1.
​
​
**Approach 2**
* Now there might be lot of confusion regarding the usage of a 2n + 1 size array, how we are finding the index where we need to store things. And also memory usage is high since we might not even need some of the space alloted.
​
* So we switch to hashmaps and just store the indices at the position sum.
​
* This means if sum is -1 at index 2, we store it 2 at -1 and so on and so forth.
​
* Again we are putting -1 at 0 for similar reasons.
​
* And the rest of the functioning is pretty much the same.
​
​
​