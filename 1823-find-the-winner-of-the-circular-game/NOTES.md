**Basic Josephus Problem**

This problem is named after Flavius Josephus a Jewish historian who fought against the Romans. According to Josephus he and his group of Jewish soldiers were cornered & surrounded by the Romans inside a cave, and they choose to murder and suicide inside of surrender and capture. They decided that all the soldiers will sit in a circle and starting from the soldier sitting at the first position every soldier will kill the soldier to their sequentially. So if there are 5 soldiers sitting in a circle with positions numbered as 1, 2, 3, 4, 5. The soldier 1 kills 2, then 3 kills 4, then 5 kills 1, then 3 kills 5, and since 3 is the only one left then 3 commits suicide. 

Now Josephus doesn’t want to get murdered or commit suicide. He would rather be captured by the Romans and is presented with a problem. He has to figure out at which position should he sit in a circle (provided there are n men in total and the man sitting at position 1 gets the first chance to murder) so that he is the last man standing and instead of committing suicide he will surrender to the Romans.

**Pattern**
* If you sit down to calculate the index that survives for every n, you'll se that the survivor is 2 x l + 1 where l is the remainder left after subtracting the highest power of 2 from the number.

https://drive.google.com/file/d/1-Rx45q3_nzq8_T_PZjP17_e9zLFcJQgX/view?usp=sharing

* Now we do we see this pattern ? If you sit down and write the bits of all the numbers preceding n, you'll see a pattern. 

https://drive.google.com/file/d/1XAZpMJu5Wv9FHAeTAqGTW5pR4v7gBA4i/view?usp=sharing

* The ones with a 0 at the end always get eliminated. The next soldiers that get eliminated will be decided by the last bit of n. If it is 1 then the ones having second last bit as 1 will be safe and the ones with 0 will be eliminate. If the second last bit of n is 0, then the third last bit with 0 will be saved and rest will be eliminated and so on. The bits in n at ith place act as saviours for bits in elements with same bit at (i - 1)th place.

* And hence we derive the formula where we deduct the biggest possible power from n (which stands for 1 at the leftmost bit) and then find 2l + 1 of the leftover thing, (denoted by rest of n excluding leftmost 1 and add 1 to it)

```
// function to find the position of the Most
// Significant Bit
int msbPos(int n)
{
    int pos = 0;
    while (n != 0) {
        pos++;
 
        // keeps shifting bits to the right
        // until we are left with 0
        n = n >> 1;
    }
    return pos;
}
 
// function to return at which place Josephus
// should sit to avoid being killed
int josephify(int n)
{
    /*  Getting the position of the Most Significant
        Bit(MSB). The leftmost '1'. If the number is
       '41' then its binary is '101001'.
        So msbPos(41) = 6   */
    int position = msbPos(n);
 
    /* 'j' stores the number with which to XOR the
        number 'n'. Since we need '100000'
       We will do 1<<6-1 to get '100000' */
    int j = 1 << (position - 1);
 
    /* Toggling the Most Significant Bit. Changing
       the leftmost '1' to '0'.
       101001 ^ 100000 = 001001 (9) */
    n = n ^ j;
 
    /*  Left-shifting once to add an extra '0' to
        the right end of the binary number
        001001 = 010010 (18) */
    n = n << 1;
 
    /* Toggling the '0' at the end to '1' which
       is essentially the same as putting the
       MSB at the rightmost place. 010010 | 1
       = 010011 (19) */
    n = n | 1;
 
    return n;
}
```
