# KMP-Algorithm
Knuth Morris Pratt Algorithm

This algorithm for search sub string in a string with linear time complexity.If we find 'm' length sub string from 'n' lenght string using naive approach it take (m*n) time. But in this algorithm time taken is (m+n).
This algorithm I coded consist of 2 function, first function generate PiTable for sub string, this table helps to KMP algorithm(I have also provide Pitable genareting code seperately so if you want you can check that code to understand how Pitable generate)

# How to use
KMPsearch function take two string input first string for long string ,second one for sub string(word that you are going to search from long string).
kMPsearch functin return an integer that returning number of occurences sub strings in the long string.

COPY THE STRING AND GIVE THE CORRECT ARGUMENTS AND TAKE YOUR OUTPUT

If you interested in algorithm
https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm
