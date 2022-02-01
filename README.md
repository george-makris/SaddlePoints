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