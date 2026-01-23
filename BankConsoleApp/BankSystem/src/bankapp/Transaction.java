package bankapp;

import java.time.LocalDateTime;

public class Transaction {

    private int id;
    private LocalDateTime timeStamp;
    private String type;
    private double balanceAfterTxn;

    public Transaction(int id, String type, double balanceAfterTxn) {
        this.id = id;
        this.type = type;
        this.balanceAfterTxn = balanceAfterTxn;
        this.timeStamp = LocalDateTime.now();
    }

    public int getId() {
        return id;
    }

    public String getType() {
        return type;
    }

    public double getBalanceAfterTxn() {
        return balanceAfterTxn;
    }

    public void printTxn() {
        System.out.println(
            "[" + timeStamp + "] " +
            "Txn#" + id +
            " | " + type +
            " | Balance: " + balanceAfterTxn
        );
    }
}
