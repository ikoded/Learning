// Similar to templates in C++
// primitives do not work for Java like C++
// creating like new T() does not work on Java because at runtime Java does not know the exact type
class Box<T>{
    T value;

    void set(T value){
        this.value = value;
    }

    T get(){
        return value;
    }
}

// can limit certain types like Numbers
class Stats<T extends Number>{
    T[] nums;

    Stats(T[] nums){
        this.nums = nums;
    }

    double average(){
        double sum = 0;
        for(T num : nums){
            // safe to use double value because int can be a double but double to int would ruin decimal place
            sum += num.doubleValue();
        }

        return sum / nums.length;
    }
}

public class GenericExample {
    public static <T> void printArray(T[] array){
        for(T item : array){
            System.out.println(item);
        }
    }

    public static void main(String[] args){
        Box<String> box = new Box<>();
        box.set("Matt");
        System.out.println(box.get());

        Box<Integer> box2 = new Box<>();
        box2.set(5);
        System.out.println(box2.get());

        String[] names = {"Matt", "Alex", "Ben"};
        Integer[] nums = {1,2,3};

        printArray(names);
        printArray(nums);

        Integer[] years = {2023, 2015, 1999};
        Double[] price = {1.50, 2.50, 3.85};

        Stats<Integer> intStats = new Stats<>(years);
        Stats<Double> doubleStats = new Stats<>(price);

        System.out.println(intStats.average());
        System.out.println(doubleStats.average());
    }
}
