// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

public class Solution1 {

    ArrayList<Integer> list = new ArrayList();
    Integer result = 0;

    public void intToArray(int number){
        if (number !=0){
            int temp = number %10;
            number /=10;
            intToArray(number);
            list.add(temp);
        }
    }

    public int arrayToInt(ArrayList<Integer> liste){
        for (Integer i : liste){
            result *= 10;
            result += i;
        }
        return result;
    }

    public int findMinNextEqualSum(ArrayList<Integer> liste, int index) {
       
        while (index >= 0) {
            if(liste.get(index) != 0){
                liste.set(index, liste.get(index)-1) ;
                liste.set(index-1, liste.get(index-1) + 1);
                return arrayToInt(liste);
            }
            else {
                findMinNextEqualSum(liste, index--);
            }
        }
        return arrayToInt(liste);
    }
   
    public int solution(int N) {
        // Implement your solution here
       
        intToArray(N);

        int index = list.size()-1;
        return findMinNextEqualSum(list, index);

    }
}
