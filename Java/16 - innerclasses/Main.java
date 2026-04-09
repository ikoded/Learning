class OuterClass {
    static int a =5;
    int x = 20;
    private static class InnerPrivateClass{
        static int b = 10;
        public static int InnerPrivateMethod(){
            return a;
        }
    }
    public void usePrivateInner(){
        // no object needed since static

        System.out.println(InnerPrivateClass.b); // used static
        System.out.println(InnerPrivateClass.InnerPrivateMethod()); // static
    }
    public class InnerNonStaticClass {
        int c =15;
    }
}

public class Main {
    public static void main(String[] args){
        OuterClass outer = new OuterClass();
        OuterClass.InnerNonStaticClass nonstaticclass = outer.new InnerNonStaticClass();

        System.out.println(OuterClass.a); // static

        outer.usePrivateInner();
        System.out.println(nonstaticclass.c);

        System.out.println(outer.x);
    }
    
}