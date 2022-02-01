​Method 1, I implemented on my own. I basically swapped all complementary non diagonal elements, and found the transpose. Now to find the rotated image, we can just swap the columns from the beginning and end.

Second approach I saw in the solutions section. It is a very smart approach I must say. 
In this approach basically what is happening is that we are picking the corners. Then the variable i is used to travel from these corners in anti-clockwise direction till we don't reach the middle of the matrix. And j is used to travel in the clockwise direction for a particular value of i. And then we play around with the i and j and find the indices that'll help us find these four points.
We store the bottom left element in temp and travel anticlockwise and keep swapping till we reach top left and replace the value of temp there.

Interesting thing was the time required for both these approaches was same. 
