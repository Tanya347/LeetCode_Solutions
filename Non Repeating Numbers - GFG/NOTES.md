![image](https://user-images.githubusercontent.com/80675137/153350880-cb909455-9cb3-4947-881f-038cc5f72549.png)

```
We notice that the xor of two unique numbers is equal to the xor of all of them.
```
```
Why so? Because the repeating ones cancel each other out and we are left with the bits of just these two.
```
```
But also we notice that the if we take the right most set bit of the xor, the numbers who have same rsb as 
xor contain one of the repeating elements and the numbers that do no contain the rsb, i.e. their bits are 
off at that particular position, include the other non repeating element. 
```
```
So our approach is to find the rsb of the zor and then find the xors of both types of numbers separately.
```
