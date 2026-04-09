import classMain.Main;

public class Second {
    public static void main(String[] args){
        Main obj = new Main();
        // Main.first(); Does not work because it is not a public function
        obj.second();
    }
}
