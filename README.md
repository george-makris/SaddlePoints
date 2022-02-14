# Matrix saddle point identification

## Intro
This programm takes in a matrix and idenitifies and localises saddle points in it. Part of the series of exercises on the C programming language from exercism.com.

## Definition of saddle point
It's called a "saddle point" because it is greater than or equal to every element in its row and less than or equal to every element in its column.

## Logical description of algorythm
1. Iterate through rows or columns
2. Identify smallest or largest number in the column or row respectively
3. If a number identified:
- Check in that row (if column smallest identified) if that number is the largest
- Check in that column (if row largest identified) if that number is the smallest.

4. If both are true, identify and mark as saddle point. Save coordinate in matrix.

## Dev notes:
After achieving desired result with matrix { 9, 8, 7 }, { 5, 3, 2 }, { 6, 6, 7 } by identifying saddle point with the number 5 (in commit  bf69b7a55a6e6e2b9b30a42d84e86385033864e1), more matrixes where tested in order to further verfiy the logic of the programm.

The matrix { 4, 5, 4 }, { 3, 5, 5 }, { 1, 5, 4 } should have 3 Saddle Points (SPs) at:
- 0,0
- 1,1
- 2,1

But only yielded the last one 2,1 = 5. Hence a revision/modification will be implemented in order to for programm to work correctly for all cases.

