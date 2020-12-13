class SavingsAccount extends Account {
    
    public static double interest = 0.5; 

    SavingsAccount() {
        super();
    }

    public SavingsAccount(String accountNumber, String accountHolderName,String dateOfBirth, String contactAddress,
                        String email, String phoneNumber, double amount) {
        super(accountNumber, accountHolderName, dateOfBirth, contactAddress, email, phoneNumber, amount);
    }
    
    public void calculateInterest() throws InvalidAmountException {
        double interestAmount = (getAmount()*interest);
        if(credit(interestAmount)) {
            System.out.println("After Interest Credit Done " + getAmount());
        }
    }
    
}


