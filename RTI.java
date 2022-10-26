import java.util.HashMap;
import java.util.Map;

public class RTI {
    public static void main(String[] args) {
        String s ="III";
        System.out.println(romanToInt(s));
    }
    public static int romanToInt(String s) {
        int num=0;
        Map<Character,Integer> map =  new HashMap<Character, Integer>();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        for(int i=0 ; i<s.length() ; i++)
            if(i+1<s.length() && map.get(s.charAt(i))<map.get(s.charAt(i+1)))
                num-= map.get(s.charAt(i));
            else
                num+= map.get(s.charAt(i));
        return num;
    }
}
