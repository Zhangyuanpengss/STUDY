import java.util.Date;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;

   public class Main{

public static void main(String[] args){
        Scanner reader=new Scanner(System.in);
        ArrayList<String> eventattendees=new ArrayList<>();
        
        System.out.println("Event ID:");
        String eventID=reader.nextLine();

        System.out.println("eventName:");
        String eventName=reader.nextLine();

        System.out.println("eventVenue:");
        String eventVenue=reader.nextLine();

        System.out.println("Date:");
        int year=reader.nextInt();
        int month=reader.nextInt();
        int day=reader.nextInt();
        LocalDate eventDate=LocalDate.of(year,month,day);

        Event event=new Event(eventID, eventName, eventVenue, eventDate,eventattendees);

        System.out.println("Choice:1.add attendees\n2.remove attendees\n3.change attendees\n4.check attendees\n5.Quit");
        for(int j=0;j>=0;++j){
            System.out.println("Enter your choice");
            int choice=reader.nextInt();
            if (choice==5){
                break;

            }
            else{
                event.organizeEvent(choice);
                continue;
            }
        }
        System.out.println("ALL:");

        System.out.println("Event details:"+event.toString());
        reader.close();




    }


   }