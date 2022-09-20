QUESTION : Given the base (in units) of a right-angled isoceles traingle, find the maximum number of 2X2 squares that can fit in the triangle with given base.
  
Input : 7
Output : 3
Explanation : In the base we can keep 2 squares
and above the two squares we can only keep 1 square.  
So the total number of squares are equal to 3.
  
Input: 8
Output: 6
  
  
 ### CODE BELOW : ###
  
  
class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        long long int n = (base-2)/2; // It's the nos of Square fitted over the base. Above it, Squares no. will decrease by 1 
        long long int total = 0;
        // BY USING --> 2Sn = n(2a+(n−1)d) because at bottom.
        //n nos of squares and at top square is 1. Also, squares will decrease by 1 like --> 4 3 2 1
        total = (n * (2*1+(n-1)*1))/2;
        return total;
    }
};  
