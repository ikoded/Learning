public class ThreadExample extends Thread {
    public static void main(String[] args){
        ThreadExample thread = new ThreadExample();
        thread.start();
        System.out.println("This code is outside the thread");
    }

    public void run(){
        System.out.println("This code is inside the thread");
    }
}

/*

You can also create a thread by implementing Runnable like:

public class ThreadExample implements Runnable {

    public static void main(String[] args){
        ThreadExample obj = new ThreadExample();
        Thread thread = new Thread(obj);
        thread.start();
        System.out.println("This code is outside the thread");
    }

    public void run(){
        System.out.println("This code is inside the thread");
    }
}

*/