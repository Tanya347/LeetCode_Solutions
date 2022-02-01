For this question one is the brute force approach that is we travel the entire array and find the unique number.
The other method is smart and makes use of bit manipulation. 
Suppose we have this simple code :

#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 1, 2, 3, 5, 5, 3};
    int result = 0;
    for (int i = 0; i < 7; i++)
    {
        result = result ^ arr[i];
        cout << result << " ";
    }
    cout << "\nFinal result : " << result << endl;
}

The output is :
1 0 2 1 4 1 2   
Final result : 2

Now let's understand what's happening
1. When we take the xor of an element with 0, we get element itself.
2. When we take the xor of an element with itself, we get 0.
3. 1^5 = 4, now when we encountered 5 again, it just gave back what result was before i.e 1.
   Same goes for 3, 2^3 was 1 then we had our operations with 5 in between, but when we encountered 3 again 1^3 gave 2.

So this way we are making use of the fact that if we have two similar elements in the array, they will just cancel out each other's effects 
and we'll get the unique number in the end.
