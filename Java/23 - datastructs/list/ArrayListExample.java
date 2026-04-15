import java.util.*;

public class ArrayListExample {
    public static void main(String[] args){
        ArrayList<String> list = new ArrayList<>();

        list.add("Matt");
        list.add("Bob");
        list.add("Ben");
        list.add(0, "Alex"); // adds to index 0

        for(String obj : list){
            System.out.println("- " + obj);
        }

        System.out.println();

        // list.get(0) get value at index 0
        // list.set(1, "Bert") set value at index 1 with Bert
        // list.size() size of list
        // list.clear() clears all in list

        for(int i = 0; i < list.size(); i++){
            if(list.get(i) == "Bob"){
                list.remove(i);
            }
        }

        for(String obj : list){
            System.out.println("- " + obj);
        }

        System.out.println();

        Collections.sort(list); // how to sort it

        var cars = new ArrayList<String>(); // Can use var instead of writing ArrayList twice

        List<String> list2 = new ArrayList<>(); // Can use parent interface List on left side assignment, used if you want to change type later like LinkedList; BEST PRACTICE

    }
}