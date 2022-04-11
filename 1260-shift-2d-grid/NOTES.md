`(j + k)/grid[i].size() ` will give the number of rows that need to be added to the current row, that is how many rows will get covered while rotating k times.
​
`(i + (j + k)grid[i].size())%grid.size()` will give the number of rows keeping in mind the case where it will overflow, hence rotation makes the elements go the upper rows
​
`(j + k) % grid[i].size()` it will give the exact column where the element will reach after going through k rotations