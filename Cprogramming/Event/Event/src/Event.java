import java.util.Date;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;
public class Event {
    String eventID;
    String eventName;
    String eventVenue;
    LocalDate eventDate;
    ArrayList<String> eventattendees=new ArrayList<>();
    Scanner reader=new Scanner(System.in);
    //constructor
    public Event(String eventID,String eventName,String eventVenue,LocalDate eventDate,ArrayList<String> eventattendees){
        this.eventID=eventID;
        this.eventName=eventName;
        this.eventVenue=eventVenue;
        this.eventDate=eventDate;
        this.eventattendees=eventattendees;
    }
    //getter
    public String geteventID(){
        return eventID;
    }

    public String geteventName(){
        return eventName;
    }

    public String geteventVenue(){
        return eventVenue;
    }

    public LocalDate eventDate(){
        return eventDate;
    }

    public ArrayList<String> geteventattendees(){
        return eventattendees;
    }

    //setter
    public void seteventID(String eventID){
        this.eventID=eventID;
    }

    public void seteventName(String eventName){
        this.eventName=eventName;
    }

    public void seteventVenue(String eventVenue){
        this.eventVenue=eventVenue;
    }

    public void seteventDate(LocalDate eventDate){
        this.eventDate=eventDate;
    }

    public void seteventattendees(ArrayList<String> eventattendees){
        this.eventattendees=eventattendees;
    }

    //method
    public void organizeEvent(int choose){
        switch(choose){

            case 1:
                System.out.println("How many attendees you want to add?");
                int num=reader.nextInt();
                reader.nextLine();
                
                for(int i=0;i<num;++i){
                    System.out.println("Enter name of the attendee:");
                    String Name=reader.nextLine();
                    reader.nextLine();
                    eventattendees.add(Name);
                    
                

            }break;

            case 2:
                System.out.println("How many do you want to remove?");
                int oo=reader.nextInt();
                reader.nextLine();
                for(int i=0;i<oo;++i){
                    System.out.println("Enter name of the attendee:");
                    String sb=reader.nextLine();
                    reader.nextLine();
                    eventattendees.remove(sb);
                
            }break;

            case 3:
                System.out.println("How many people you want to change");
                int ee=reader.nextInt();
                for(int i=0;i<ee;++i){
                    System.out.println("Enter the index:");
                    int index=reader.nextInt();
                    reader.nextLine();
                    System.out.println("Enter the new attendee:");
                    String name=reader.nextLine();
                    reader.nextLine();
                    eventattendees.set(index, name);
                
            }break;

            case 4:
                System.out.println("How many puople you want to check?");
                int mm=reader.nextInt();
                reader.nextLine();
                for(int i=0;i<mm;++i){
                    System.out.println("Enter the index:");
                    int rr=reader.nextInt();
                    reader.nextLine();
                    eventattendees.get(rr);
                    
                
            }break;

            case 5:
                break;
        }



    }

    public String toString(){
        return ("eventID:"+eventID+"\neventName:"+eventName+"\neventVenue:"+eventVenue+"\neventDate:"+eventDate+
        "\neventattendees:"+eventattendees.toString());

    }

}
