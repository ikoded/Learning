// package dirname not needed since in same directory and dir this is in uses numbers and - so later will create custom class package folders
public class Second {
    public static void main(String[] args){
        Main obj = new Main();
        obj.b = 20; // This will get be visible at compiled time
        System.out.printf("%d %d %d",obj.a,obj.b,obj.c);
    }
}
