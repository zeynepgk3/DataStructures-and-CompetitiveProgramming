import java.util.*;

public class Solution1 {

    public int solution(String S) {
        // Implement your solution here
        Set<Character> substrings = new HashSet();
        int result = 1;

        for (int i = 0; i < S.length(); i++ ){
            if (substrings.contains(S.charAt(i))){
                result++;
                substrings.clear();
            }
            substrings.add(S.charAt(i));
        }
        return result;
    }

    public static void main(String args[])  //static method
    {
        solution("abacaba");
        solution("ssssss");
        solution("kalkabalabk");
    }
}
