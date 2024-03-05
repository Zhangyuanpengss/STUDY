import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner reader =new Scanner(System.in);

        System.out.println("ID?");
        String studentID=reader.nextLine();

        System.out.println("Name?");
        String studentName=reader.nextLine();

        System.out.println("How many extra activities you want to add?");
        int numExtraactivities=reader.nextInt();



        Student student= new Student(studentID, studentName, numExtraactivities);

        for (int i=0;i<numExtraactivities;++i){
            System.out.println("Enter the activity:");
            String activity=reader.nextLine();
            

            student.addExtraActivities(i, activity);

        }

        System.out.println("Student details:"+student.toString());

        reader.close();

  
    }
}
