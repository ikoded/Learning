// interfaces are similar to abstraction but needs keyword implemented
// and you must override all of its methods like animalSound and sleep in example below
// interface methods are abstract and public by default
// interface attributes are public/static and final by default
// cannot have a constrcutor initial like Animal()

interface Animal{
    public void animalSound();
    public void sleep();
}

interface Quadpedal {
    public void legsAmmount();
}

class Pig implements Animal, Quadpedal {
    // Must implement ALL defined methods in interfaces
    public void animalSound(){
        System.out.println("Oink");
    }
    public void sleep(){
        try{
            Thread.sleep(1000);
        }catch (InterruptedException e) {
            e.printStackTrace();
        }
        
        System.out.println("Slept for 1000 ms");
    }
    public void legsAmmount(){
        System.out.println("I have 4 legs");
    }
}

public class Main {
    public static void main(String[] args){
        Pig pig = new Pig();
        pig.animalSound();
        pig.sleep();
        pig.legsAmmount();
    }
}