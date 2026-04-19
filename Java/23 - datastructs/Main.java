import java.util.*;

public class Main {
    static ArrayList<String> cars = new ArrayList<>(); // resizable and grows as needed, can be accessed by index and can have duplicates
    static HashSet<String> cars2 = new HashSet<>(); // every element is unique and no duplicates
    static HashMap<String, Integer> cars3 = new HashMap<>(); // key value pairs that are unique keys
    public static void main(String[] args){
        cars.add("Mazda");
        cars.add("Mazda");
        cars.add("Ferrari");

        cars2.add("Mazda");
        cars2.add("Mazda");
        cars2.add("Ferrari");

        cars3.put("Mazda", 2025);
        cars3.put("Mazda", 2026);
        cars3.put("Ferrari", 2026);

        printData();
    }

    public static void printData(){
        Iterator<String> it = cars.iterator();
        Iterator<String> it2 = cars2.iterator();
        Iterator<String> it3 = cars3.keySet().iterator();

        System.out.println("ArrayList:");
        while(it.hasNext()){
            System.out.print(it.next() + " ");
        }
        System.out.println("\n");

        System.out.println("HashSet:");
        while(it2.hasNext()){
            System.out.print(it2.next() + " ");
        }
        System.out.println("\n");

        System.out.println("HashMap:");
        while(it3.hasNext()){
            var car = it3.next();
            System.out.print(car + "(" + cars3.get(car) + ") ");
        }
    }
}