import java.util.*;

public class LinkedListExample {
    public static void main(String[] args){
        LinkedList<String> list = new LinkedList<>();
        list.add("Matt");
        list.add("Ben");
        System.out.println(list);
        System.out.println();

        list.addFirst("Bob"); // add to front list
        list.addLast("Alex"); // add to end list
        // list.getFirst() get first in list
        // list.getLast() get last in list

        System.out.println(list); // added bob and alex to front and back
        System.out.println();

        Collections.sort(list, Collections.reverseOrder());

        System.out.println(list); // reverse sorted order list
        System.out.println();

        list.removeFirst();
        list.removeLast();

        System.out.println(list); // removed matt (matt is front since reverse order sort) and alex from front and back
        System.out.println();

        var cars = new LinkedList<String>(); // var works as well
        List<String> list2 = new LinkedList<>(); // and list interface declaration works as well
    }
}