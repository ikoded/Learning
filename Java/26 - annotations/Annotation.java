class Animal {
    void makeSound(){
        System.out.println("Animal Sound");
    }
}

class Dog extends Animal {
    @Override
    void makeSound(){
        System.out.println("Woof");
    }

    @Deprecated
    static void oldMethod(){
        System.out.println("This is deprecated"); // will warn in some compilers but still prints
    }

    // @SuppressWarnings("unchecked") will ignore wanring print for things like Arrays delcaration without type:
    // ArrayList cars = new ArrayList()
}

public class Annotation {
    public static void main(String[] args){
        Animal anm = new Animal();
        Dog dog = new Dog();

        anm.makeSound();
        dog.makeSound();
    }
}