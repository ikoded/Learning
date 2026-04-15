import java.io.File;

public class Second {
    public static void main(String[] args){
        File file1 = new File("file1.txt");

        File filename1 = new File("filename1.txt");
        File filename2 = new File("filename2.txt");
        File filename3 = new File("filename3.txt");

        if(file1.delete() && filename1.delete() && filename2.delete() && filename3.delete()){
            System.out.printf("Deleted the files %s, %s, %s, %s", file1.getName(), filename1.getName(),filename2.getName(),filename3.getName());
        }else {
            System.out.printf("Could not delete all the files %s, %s, %s, %s", file1.getName(), filename1.getName(),filename2.getName(),filename3.getName());
        }
    }
}