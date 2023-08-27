https://stackoverflow.com/questions/60953297/find-the-max-value-of-the-same-length-nails-after-hammered
https://github.com/ZRonchy/Codility/blob/master/Lesson12/NailingPlanks.java

# Find the max value of the same length nails after hammered

Given an array of positive integers, and an integer Y, you are allowed to replace at most Y array-elements with lesser values. Your goal is for the array to end up with as large a subset of identical values as possible. Return the size of this largest subset.

The array is originally sorted in increasing order, but you do not need to preserve that property.

So, for example, if the array is [10,20,20,30,30,30,40,40,40] and Y = 3, the result should be 6, because you can get six 30s by replacing the three 40s with 30s. If the array is [20,20,20,40,50,50,50,50] and Y = 2, the result should be 5, because you can get five 20s by replacing two of the 50s with 20s.

