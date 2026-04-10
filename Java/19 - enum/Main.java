enum Age {
    // by default enums are public static and final meaning it can not be change
    //Can be a string too inside but this is called a enum constructor

    YOUNG(18), // sets age to 18 by calling Age(int value) when YOUNG is set
    OLD(60);

    private int value;

    Age(int value){
        this.value = value;
    }

    public int getValue(){
        return value;
    }
}

class Main {
    // enums used for when you know it won't change
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    }

    public static void main(String[] args){
        Level level = Level.MEDIUM;
        System.out.println(level);

        Age age = Age.YOUNG;
        System.out.println(age); // prints YOUNG
        System.out.println(age.getValue()); // prints int 18

        for(Level var : Level.values()){
            System.out.println(var);
        }

        System.out.println();

        for(Age var1 : Age.values()){
            System.out.println(var1); // prints name of enum
            System.out.println(var1.getValue()); // prints each num
        }

        // can also call it without object like
        // Age.YOUNG or Age.YOUNG.getValue()
    }
}