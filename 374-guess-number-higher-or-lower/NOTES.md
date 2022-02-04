**Note:**
Used long to incorporate sum of larger integers
​
**Ternary Search**
* We choose two pivots (m1 and m2) such that the given range is divided into three equal parts.
* If the required number num is less than m1 then we apply ternary search on the left segment of m1.
* If num lies in between m1 and m2, we apply ternary search between m1 and m2.
* Otherwise we will search in the segment right to m2.
​
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