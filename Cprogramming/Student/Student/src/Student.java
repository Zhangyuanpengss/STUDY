import java.util.Arrays;
import java.util.Scanner;
public class Student {
    private String studentID;
    private String studentName;
    private String extraActivities[];

    //custructor
    public Student(String studentID,String studentName,int numExtraactivities){
        this.studentID=studentID;
        this.studentName=studentName;
        this.extraActivities=new String[numExtraactivities];
    }

    //getter&&setter
    public String getstudentID(){
        return studentID;
    }

    public void setstudentID(String studentID){
        this.studentID=studentID;
    }

    public String getstudentName(){
        return studentName;
    }

    public void setstudentName(String studentName){
        this.studentName=studentName;
    }

    public String[] getExtraActivities(){
        return extraActivities;
    }

    public void setExtraActivities(String[] extraActivities){
        this.extraActivities=extraActivities; 
    }



    //method
    public void addExtraActivities(int index,String activity){
         if(index>=0&&index<extraActivities.length){
            extraActivities[index]=activity;
         }
         else{
            System.out.println("MAX");
         }
    }



    public String toString(){
        return ("StudentID:"+studentID+"\nStudentName:"+studentName+"\nextraActivities:"+Arrays.toString(extraActivities));
    }

}
