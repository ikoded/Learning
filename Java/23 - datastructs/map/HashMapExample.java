import java.util.*;

public class HashMapExample {
    public static void main(String[] args){
        HashMap<String,Integer> cars = new HashMap<>();

        cars.put("Mazda", 2025);
        cars.put("BMW", 2029);
        cars.put("Ferrari", 1990);

        if(cars.containsKey("Mazda")){
            System.out.println(cars.get("Mazda"));
        }

        for(String car : cars.keySet()){
            System.out.println("- " + car + " " + cars.get(car));
        }

        cars.values();

        Map<String, Integer> exampleMap = new HashMap<>(); // can declare with map interface if right side changes
    }
}