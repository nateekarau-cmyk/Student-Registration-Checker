import java.util.Scanner;

public class main {
    @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = input.nextLine();

        System.out.print("Enter number of registered units: ");
        
        // Ensure proper input
        int units = 0;
        if (input.hasNextInt()) {
            units = input.nextInt();
        } else {
            System.out.println("Invalid input. Please enter a number.");
            return;
        }

        String status;

        if (units > 7) {
            status = "Overload - Approval Required";
        } else {
            status = "Registration Accepted";
        }

        System.out.println("\n--- Registration Summary ---");
        System.out.println("Student Name: " + name);
        System.out.println("Units: " + units);
        System.out.println("Status: " + status);

        input.close();
    }
}