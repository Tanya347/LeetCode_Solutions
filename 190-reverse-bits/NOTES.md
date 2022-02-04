**Concept of Bit Masking**
* In bit masking what we really do is try and find what is present at a particular place value.
* We create a mask for that particular place by using 1 << i;
* Then we take & of the mask and the number to obtain what is at that place, if it 1 result will be 1 and if 0 then result will be 0.
​
**Using bit masking to reverse bits**
* firstly we take a 0 integer where we'll be storing the reversed number
* We find the mask of the ith bit (i.e the last bit as indexing in binary numbers begins from the last)
* Now if it is 1, that means there is 1 at that place and we need to replace the index by 1. So we will perform ans | 1 to turn the ith bit on.
* Now why are we left shifting ans in the beginning ? we are doing so to make space for the next integer. As the first bit we put in ans is actually the last bit of the reversed number. So we need to make space for the bits that are to come as we keep traversing the number.
​