package bankapp;

import java.time.LocalDate;

public class SalaryAccount extends BankAccount {

    private LocalDate lastActivityDate;
    private static final int INACTIVE_DAYS_LIMIT = 60;

    public SalaryAccount(long accNo, String name, double openingBalance) {
        super(accNo, name, openingBalance);
        this.lastActivityDate = LocalDate.now();
    }

    @Override
    public void withdrawMoney(double amount) {

        if (amount <= 0) {
            System.out.println("Invalid amount.");
            return;
        }

        if (currentBalance < amount) {
            System.out.println("Insufficient balance.");
            return;
        }

        currentBalance -= amount;
        lastActivityDate = LocalDate.now();

        txnHistory.add(
            new Transaction(
                txnHistory.size() + 1,
                "WITHDRAW",
                currentBalance
            )
        );
    }

    public void checkStatus() {
        if (lastActivityDate.plusDays(INACTIVE_DAYS_LIMIT)
                .isBefore(LocalDate.now())) {
            System.out.println("Salary account is inactive.");
        } else {
            System.out.println("Salary account is active.");
        }
    }

    @Override
    public void showAccountInfo() {
        super.showAccountInfo();
        System.out.println("Account Type : Salary");
        System.out.println("Last Active  : " + lastActivityDate);
    }
}
