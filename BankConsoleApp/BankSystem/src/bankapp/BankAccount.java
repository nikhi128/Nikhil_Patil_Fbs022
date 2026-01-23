package bankapp;

import java.util.ArrayList;
import java.util.List;

public abstract class BankAccount {

    protected long accountNumber;
    protected String holderName;
    protected double currentBalance;

    protected List<Transaction> txnHistory;
    protected static int totalAccounts = 0;

    public BankAccount(long accountNumber, String holderName, double openingBalance) {
        this.accountNumber = accountNumber;
        this.holderName = holderName;
        this.currentBalance = openingBalance;
        this.txnHistory = new ArrayList<>();
        totalAccounts++;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public double getCurrentBalance() {
        return currentBalance;
    }

    public void addMoney(double amount) {
        currentBalance += amount;
        txnHistory.add(
            new Transaction(
                txnHistory.size() + 1,
                "DEPOSIT",
                currentBalance
            )
        );
    }

    public abstract void withdrawMoney(double amount);

    public void showAccountInfo() {
        System.out.println("Account No : " + accountNumber);
        System.out.println("Holder     : " + holderName);
        System.out.println("Balance    : " + currentBalance);
    }

    public void printTransactions() {
        if (txnHistory.isEmpty()) {
            System.out.println("No transactions yet.");
            return;
        }
        for (Transaction t : txnHistory) {
            t.printTxn();
        }
    }

    public static int getTotalAccounts() {
        return totalAccounts;
    }
}
