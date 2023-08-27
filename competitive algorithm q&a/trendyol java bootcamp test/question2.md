https://www.geeksforgeeks.org/find-minimum-number-of-substrings-with-unique-characters/

# Dividing String into Substrings with Unique Characters

Given a string `s`, the task is to divide the string into multiple substrings, ensuring that each substring contains only unique characters. In other words, no character should be repeated within a single substring. The objective is to determine the minimum number of such substrings required to satisfy this condition.

## Examples

### Example 1

**Input**: `s = "abacaba"`
**Output**: 4
**Explanation**: Two possible partitions are ("a", "ba", "cab", "a") and ("ab", "a", "ca", "ba"). It can be observed that 4 is the minimum number of substrings needed.

### Example 2

**Input**: `s = "ssssss"`
**Output**: 6
**Explanation**: The only valid partition is ("s", "s", "s", "s", "s", "s").

