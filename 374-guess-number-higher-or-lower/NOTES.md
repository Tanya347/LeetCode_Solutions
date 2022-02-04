**Note:**
Used long to incorporate sum of larger integers


**Ternary Search**
* We choose two pivots (m1 and m2) such that the given range is divided into three equal parts. 
* If the required number num is less than m1 then we apply ternary search on the left segment of m1.
* If num lies in between m1 and m2, we apply ternary search between m1 and m2. 
* Otherwise we will search in the segment right to m2.


```
while(low <= high) {
            int mid1 = (long)low + ((long)high - (long)low)/3;
            int mid2 = (long)high - ((long)high - (long)low)/3;
           
            int ans2 = guess(mid2);
            
            if(guess(mid1) == 0)
                return mid1;
            
            if(guess(mid2) == 0)
                return mid2;
            
            else if(guess(mid1) < 0)
                high = mid1 - 1;
            
            else if(guess(mid2) > 0)
                low = mid2 + 1;
            
            else {
                low = mid1 + 1;
                high = mid2 - 1;
            }
        }
```


**Complexity Analysis**
* Time complexity : O(log3n). Ternary Search is used.
* Space complexity: O(1). No extra space is used.


**Follow Up**
Ternary search is worse than Binary Search. 


Recursive relation for Binary Search in worst case:
```
T(n) = T(n/2) + 2, T(1) = 1
T(n/2) = T(n/2^2) + 2

T(n) = T(n/2^2) + 2 x 2
				= T(n/2^3) + 3 x 2
				.......
				= T(n / (2 ^ (log2n)) + 2log2n
				= T(1) + 1log2n
				= 1 + 2log2n
```


Now for Ternary Search:
```
T(n) = T(n/3) + 4, T(1) = 1
T(n/3) = T(n/3^2) + 4

T(n) = T(n/3^2) + 2 x 4
				= T(n/3^3) + 3 x 4
				.......
				= T(n / (3 ^ (log3n)) + 4log3n
				= T(1) + 4log3n
				= 1 + 4log3n
```


Time complexity of Ternary is greater than Binary.
