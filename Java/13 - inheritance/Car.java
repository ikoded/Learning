class Vehicle {
    protected String brand = "Mazda";
    public void honk(){
        System.out.println("Honk");
    }

    public static void honk2(){
        System.out.println("Honk2");
    }
}

public class Car extends Vehicle {
    private String modelName = "3";
    public static void main(String[] args){
        Car myCar = new Car();
        
        myCar.honk();
        
        System.out.printf("%s %s\n",myCar.brand, myCar.modelName);
        
        Car.honk2();
    }
}