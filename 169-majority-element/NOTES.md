​I'll talk about three different approaches I used.

1. HASHMAPS

So in this case firstly I implemented my own approach using hashmaps in which I counted the number of times each element occured and checked everytime if the count of that element is greater than floor(n/2). But one small mistake I made is that after getting such an element I kept on running the loop. I should have simply returned.

So the second time I tried an approach with hashmaps, I just returned the element as soon as count became greater than n/2. Which is clearly specified in the question too, that the majority element occurs more than n/2 times. I just forgot to make use of this key point provided in the question.

Space complexity : O(n), Time complexity : O(n)


2. RETURN MID ELEMENT AFTER SORTING

In the second approach we are simply sorting the array and returning the middle element. Why because we know that the number occurs more than half the times. So if we sort the array it is guaranteed that the majority element will be occupying the middle position in the array.

Time complexity: O(nlogn), Space complexity: O(1)


3. BOYER MOORE VOTING ALGORITHM

If we had some way of counting instances of the majority element as +1 and instances of any other element as -1, summing them would make it obvious that the majority element is indeed the majority element.

When the elements are the same as the candidate element, votes are incremented when some other element is found not equal to the candidate element. We decreased the count. This actually means that we are decreasing the priority of winning ability of the selected candidate, since we know that if the candidate is a majority it occurs more than N/2 times and the remaining elements are less than N/2.

When votes become 0, this actually means that there are the same number of different elements, which should not be the case for the element to be the majority element. So the candidate element cannot be the majority, so we choose the present element as the candidate and continue the same till all the elements get finished. The final candidate would be our majority element.

Time complexity : O(n), Space complexity : O(1)
