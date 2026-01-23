package bankapp;

public class LoanAccount {

    private double principalAmount;
    private double annualInterestRate;
    private int tenureMonths;

    private double emi;
    private double totalPayable;
    private double remainingAmount;

    public LoanAccount(double principalAmount,
                       double annualInterestRate,
                       int tenureMonths) {

        this.principalAmount = principalAmount;
        this.annualInterestRate = annualInterestRate;
        this.tenureMonths = tenureMonths;

        calculateLoanDetails();
    }

    private void calculateLoanDetails() {
        double monthlyRate = annualInterestRate / (12 * 100);

        emi = (principalAmount * monthlyRate *
                Math.pow(1 + monthlyRate, tenureMonths)) /
              (Math.pow(1 + monthlyRate, tenureMonths) - 1);

        totalPayable = emi * tenureMonths;
        remainingAmount = totalPayable;
    }

    public void payEmi() {
        if (remainingAmount <= 0) {
            System.out.println("Loan already cleared.");
            return;
        }

        remainingAmount -= emi;
        System.out.println("EMI paid: " + emi);
    }

    public void showLoanDetails() {
        System.out.println("Loan Amount     : " + principalAmount);
        System.out.println("Interest Rate   : " + annualInterestRate + "%");
        System.out.println("Tenure (months) : " + tenureMonths);
        System.out.println("EMI             : " + emi);
        System.out.println("Remaining Loan  : " + remainingAmount);
    }
}
