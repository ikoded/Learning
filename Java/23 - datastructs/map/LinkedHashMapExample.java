import java.util.*;

public class LinkedHashMapExample {
    public static void main(String[] args){
        LinkedHashMap<String, Integer> cars = new LinkedHashMap<>();

        cars.put("Mazda", 2025);
        cars.put("BMW", 2029);
        cars.put("Ferrari", 1990);

        for(String car : cars.keySet()){
            System.out.println("- " + car + " " + cars.get(car));
        }

        System.out.println(cars.firstEntry()); // prints first entry like mazda=2025
    }
}