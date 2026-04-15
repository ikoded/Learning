import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        String filename1 = "filename1.txt";
        String filename2 = "filename2.txt";
        String filename3 = "filename3.txt";
        String file1 = "file1.txt";
        // files recommended to use try catch when opening to be safe

        // Will show how try catch long hand works first here
        try {
            File myFile = new File(filename1);
            if(myFile.createNewFile()){
                System.out.println("File created: " + myFile.getName() + " (" + myFile.getAbsolutePath() + ")");
            } else {
                System.out.println("File already exists");
            }
        } catch (IOException e){
            e.printStackTrace();
        }

        // Writing Files

        /*
        Using try-with-resources (the try(...) syntax), automatically closes the FileWriter, BufferedWriter, and FileOutputStream
        */

        // FileWriter meant for basic text

        // This is how I will be writing it now, just moving the file initial into try parameter
        try(FileWriter myWriter = new FileWriter(filename2)){
            myWriter.write("Files in Java are fun");
            myWriter.close(); // Make sure to close
            System.out.println("Wrote to " + filename2);
        } catch (IOException e){
            e.printStackTrace();
        }

        // Appending to same file

        try(FileWriter myWriterAppending = new FileWriter(filename2, true)){
            myWriterAppending.write("\nAppending new text when set to true");
            System.out.println("Appended to " + filename2);
        } catch(IOException e){
            e.printStackTrace();
        }

        // BufferedWriter meant for large text files because A. fast and B. more features
        // can append as well to existing file by passing true similar to above
        try(BufferedWriter buffWriter = new BufferedWriter(new FileWriter(filename3))){
            buffWriter.write("Hello");
            buffWriter.append(" Man");
            buffWriter.newLine();
            buffWriter.append("Lets go");
            System.out.println("Wrote to " + filename3);
        } catch(IOException e){
            e.printStackTrace();
        }

        // FileOutputStream best for binary data (images, audio, PDFs)
        // auto creates file if does not exist
        try(FileOutputStream output = new FileOutputStream(file1)){
            output.write("This is a file".getBytes());
            output.close();
            System.out.println("Wrote to " + file1);
        } catch(IOException e){
            e.printStackTrace();
        }

        // Reading Files

        // Scanner best for simple text

        File file1Read = new File(filename2);
        try(Scanner myReader = new Scanner(file1Read)){
            while(myReader.hasNextLine()){
                System.out.println(myReader.nextLine());
            }
        }catch(IOException e){
            e.printStackTrace();
        }

        // BufferedReader best for large text files

        try(BufferedReader buffReader = new BufferedReader(new FileReader(filename2))){
            String line;
            while((line = buffReader.readLine()) != null){
                System.out.println(line);
            }
        } catch (IOException e){
            e.printStackTrace();
        }

        // FileInputStream best for Biary Data

        try(FileInputStream myStream = new FileInputStream(filename2)){
            System.out.println(myStream.readAllBytes());
        } catch(IOException e){
            e.printStackTrace();
        }
    }
}