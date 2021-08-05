import java.util.*;

public class Person {
    private int age;  //instance variable
//    public Person(){
//        System.out.println("Constructor invoked no args");
//    }
    public Person(int initialAge) {
        // Add some more code to run some checks on initialAge
//        System.out.println("Constructor invoked");
        age = initialAge;
        if(age<0)
        {
            age = 0;
            System.out.println("Age is not valid, setting age to 0.");
        }
    }

    public void amIOld() {
        // Write code determining if this person's age is old and print the correct statement:
        if(age<13)
        {
            System.out.println("You are young.");
        }
        else if(age>=13 && age<18)
            System.out.println("You are a teenager.");

        else if(age >= 18)
        {
            System.out.println("You are old.");
        }
    }
    public void yearPasses() {
        // Increment this person's age.
        age+=1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);  //to take inputs
        int T = sc.nextInt();  //to take integer input
        for (int i = 0; i < T; i++) {
            int age = sc.nextInt();
            Person p = new Person(age); //goes inside construtor with one argument of that type int in this case
            p.amIOld();
            for (int j = 0; j < 3; j++) {
                p.yearPasses();
            }
            p.amIOld();
            System.out.println();
        }
        sc.close();
    }
}
