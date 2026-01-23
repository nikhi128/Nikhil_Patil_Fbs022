package bankapp;

public class SavingAccount extends BankAccount {

    private static final double MIN_REQUIRED_BALANCE = 1000.0;
    private static final double INTEREST_RATE = 4.0;

    public SavingAccount(long accNo, String name, double openingBalance) {
        super(accNo, name, openingBalance);
    }

    @Override
    public void withdrawMoney(double amount) {

        if (amount <= 0) {
            System.out.println("Invalid withdrawal amount.");
            return;
        }

        if (currentBalance - amount < MIN_REQUIRED_BALANCE) {
            System.out.println("Withdrawal denied: minimum balance rule violated.");
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

    public static double getInterestRate() {
        return INTEREST_RATE;
    }

    @Override
    public void showAccountInfo() {
        super.showAccountInfo();
        System.out.println("Account Type: Savings");
    }
}
