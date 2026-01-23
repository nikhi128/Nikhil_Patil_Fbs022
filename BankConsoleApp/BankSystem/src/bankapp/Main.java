package bankapp;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    static List<BankAccount> accounts = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        boolean running = true;

        System.out.println("=== Bank Application Started ===");

        while (running) {

            System.out.println("\n1. Create Saving Account");
            System.out.println("2. Show All Accounts");
            System.out.println("3. Deposit");
            System.out.println("4. Withdraw");
            System.out.println("5. Transaction History");
            System.out.println("6. Exit");
            System.out.print("Choose option: ");

            int choice = sc.nextInt();

            switch (choice) {

                case 1:
                    createSavingAccount();
                    break;

                case 2:
                    showAllAccounts();
                    break;

                case 3:
                    deposit();
                    break;

                case 4:
                    withdraw();
                    break;

                case 5:
                    showTransactions();
                    break;

                case 6:
                    running = false;
                    System.out.println("Thank you for using the bank app.");
                    break;

                default:
                    System.out.println("Invalid option!");
            }
        }
    }

    // ---------------- METHODS ----------------

    static void createSavingAccount() {
        System.out.print("Account No: ");
        long accNo = sc.nextLong();

        System.out.print("Holder Name: ");
        String name = sc.next();

        System.out.print("Opening Balance: ");
        double bal = sc.nextDouble();

        BankAccount acc = new SavingAccount(accNo, name, bal);
        accounts.add(acc);

        System.out.println("Saving account created successfully.");
    }

    static BankAccount findAccount(long accNo) {
        for (BankAccount acc : accounts) {
            if (acc.getAccountNumber() == accNo)
                return acc;
        }
        return null;
    }

    static void showAllAccounts() {
        if (accounts.isEmpty()) {
            System.out.println("No accounts available.");
            return;
        }

        for (BankAccount acc : accounts) {
            acc.showAccountInfo();
            System.out.println("--------------------");
        }
    }

    static void deposit() {
        System.out.print("Enter Account No: ");
        long accNo = sc.nextLong();

        BankAccount acc = findAccount(accNo);

        if (acc == null) {
            System.out.println("Account not found.");
            return;
        }

        System.out.print("Enter amount: ");
        double amt = sc.nextDouble();
        acc.addMoney(amt);
    }

    static void withdraw() {
        System.out.print("Enter Account No: ");
        long accNo = sc.nextLong();

        BankAccount acc = findAccount(accNo);

        if (acc == null) {
            System.out.println("Account not found.");
            return;
        }

        System.out.print("Enter amount: ");
        double amt = sc.nextDouble();
        acc.withdrawMoney(amt);
    }

    static void showTransactions() {
        System.out.print("Enter Account No: ");
        long accNo = sc.nextLong();

        BankAccount acc = findAccount(accNo);

        if (acc == null) {
            System.out.println("Account not found.");
            return;
        }

        acc.printTransactions();
    }
}
