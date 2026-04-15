import java.util.*;

public class AlgorithmExample {
    public static void main(String[] args){
        ArrayList<String> list = new ArrayList<>();

        list.add("Matt");
        list.add("Bob");
        list.add("Ben");
        list.add("Alex");

        System.out.printf("Matt is at index before sort(0 based arraylist): %d\n",Collections.binarySearch(list, "Matt")); // Does not work unless sorted keep in mind, so this throws -5

        System.out.println("list before sort: ");
        for(String obj : list){
            System.out.println("- " + obj);
        }

        Collections.sort(list);

        System.out.println("list after sort: ");
        for(String obj : list){
            System.out.println("- " + obj);
        }

        System.out.printf("Matt is at index after sort(0 based arraylist): %d\n",Collections.binarySearch(list, "Matt"));

        Collections.sort(list,Collections.reverseOrder());

        System.out.println("list after reverse sort: ");
        // Using an iterator to show it works the same
        Iterator<String> it = list.iterator();
        while(it.hasNext()){
            System.out.println("- " + it.next());
        }

        HashMap<String, Integer> map = new HashMap<>();

        map.put("Matt", 27);
        map.put("Bob", 30);
        map.put("Ben", 25);
        map.put("Alex", 21);

        // This is always one since map has only unique keys
        System.out.printf("Frequency of Matt in map: %d", Collections.frequency(map.keySet(), "Matt"));
    }
}