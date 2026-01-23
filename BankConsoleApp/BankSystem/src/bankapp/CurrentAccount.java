package bankapp;

public class CurrentAccount extends BankAccount {

    private double overdraftLimit;

    public CurrentAccount(long accNo, String name,
                          double openingBalance, double overdraftLimit) {
        super(accNo, name, openingBalance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdrawMoney(double amount) {

        if (amount <= 0) {
            System.out.println("Invalid amount.");
            return;
        }

        if (currentBalance + overdraftLimit < amount) {
            System.out.println("Withdrawal failed: overdraft limit exceeded.");
            return;
        }

        currentBalance -= amount;

        txnHistory.add(
            new Transaction(
                txnHistory.size() + 1,
                "WITHDRAW",
                currentBalance
            )
        );
    }

    @Override
    public void showAccountInfo() {
        super.showAccountInfo();
        System.out.println("Account Type : Current");
        System.out.println("Overdraft   : " + overdraftLimit);
    }
}
