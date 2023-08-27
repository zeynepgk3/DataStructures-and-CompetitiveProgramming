import java.util.*;

public class Solution3 {

    int maxCount(int[] A, int K) {
        int n = A.length;
        int best = 0;
        int count = 1;

        for (int i = 0; i < n-K-1; i++) {
            if (A[i] == A[i + 1])
                count = count + 1;
            else
                count = 1;
            if (count > best)
                best = count;
        }
        int result = Math.max(best + K, Math.min(K+1, n));
        
        return result;
    } 

    public static void main(String args[])  //static method
    {
        maxCount([1,1,3,3,3,4,5,5,5,5],2);
    }
}
