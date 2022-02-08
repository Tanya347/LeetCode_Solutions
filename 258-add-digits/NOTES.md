**Formula for Digital Root**
​
There is a known formula to compute a digital root in a decimal numeral system
```
dr10 (n) = 0, if n = 0
dr10 (n) = 9, if n = 9k
dr10 (n) = n mod 9, if n != 9
​
"The original number is divisible by 9 if and only if the sum of its digits is divisble by 9"
​
we can represent input number in a standard way :
​
n = d0 + d1 x 10 + d2 x 10^2 + ...... + dk x 10 ^ k
​
One could expand each power of ten as following:
​
10 = 9.1 + 1
100 = 99 + 1 = 9.11 + 1
1000  = 999 + 1 = 9.111 + 1
...
10^k = 100..0 = 999..9 + 1 = 9.111..1 + 1
k times  k times         k times
​
Which results in :
n = d0 + d1.(9.1 + 1) + d2.(9.11 + 1) + .........+dk.(9.111....1 + 1)
k times
​
and could be simplified as
n = (d0 + d1 + d2 + ..... + dk) + 9.(d1.1 + d2.11 + .... + dk.11...1)
k times
​
Now take modulo of both sides
n % 9 = (d0 + d1 + d2 + ..... dk) % 9