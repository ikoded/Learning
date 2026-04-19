import java.util.*;

public class HashSetExample {
    public static void main(String[] args){
        HashSet<Integer> set = new HashSet<>();

        // stores based on hash code in buckets, so order changes based on n in set
        set.add(1);
        set.add(2);
        set.add(1); // this repeat is not added as set is unique values only
        set.add(0);
        set.add(15);
        set.add(100);

        if(set.contains(1)){
            System.out.println(set);
        }

        // var works
        var set2 = new HashSet<>();
    }
}