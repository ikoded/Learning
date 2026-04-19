import java.util.*;

public class LinkedHashSetExample {
    public static void main(String[] args){
        LinkedHashSet<Integer> set = new LinkedHashSet<>();

        // stores based on order, can add to beginning and end with addFirst/addLast
        set.add(1);
        set.add(2);
        set.add(1);
        set.add(0);
        set.add(15);
        set.add(100);

        set.addFirst(4);
        set.addLast(120);

        for(int setNum: set){
            System.out.println(setNum);
        }

        // you can also getFirstLast & remove firstLast
    }
}