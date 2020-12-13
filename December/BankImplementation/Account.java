import java.util.Scanner;
import java.util.Arrays;

public class Account {

	/**
	 * The attributes of this Account class.
	 */
	private String accountNumber;
	private String accountHolderName;
	private String dateOfBirth;
	private String contactAddress;
	private String email;
	private String phoneNumber;
	private double amount;

	/**
	 * The following is a constructor that sets the amount to the attribute amount
	 * of the class Account.
	 * 
	 * @param amount
	 */
	public Account() {

	}

	public Account(double amount) {
		this.amount = amount;
	}
	
	/**
	 * The following constructor sets the attributes of the Accunt
	 * to the values that are sent as parameters.
	 * @param accountNumber sets the accooutNumber attribute based on accountNumber.
	 * @param accountHolderName sets the accountHolderName attribute based on accountHolderName.
	 * @param dateOfBirth sets the date of birth of the account holder based on the dateOfBirth parameter.
	 * @param email sets the email attribute
	 * @param phoneNumber sets the phoneNumber attribute
	 * @param amount the initial amount to be set based on the parameter.
	 */
	public Account(String accountNumber, String accountHolderName,
			String dateOfBirth, String contactAddress,
			String email, String phoneNumber, double amount) {
		this.accountNumber = accountNumber;
		this.accountHolderName = accountHolderName;
		this.dateOfBirth = dateOfBirth;
		this.contactAddress = contactAddress;
		this.email = email;
		this.phoneNumber = phoneNumber;
		this.amount = amount;
	}

	/**
	 * This method performs to debit the amount on this Account.
	 * 
	 * @param amount to debit
	 * 
	 * @return true on successfully debited the amount.
	 * 
	 * @exception throw an exception called InsufficientFundsException if the
	 * amount in this Account is less than the amount to be debited with a message
	 * "Insufficient funds to withdraw the amount."
	 * 
	 * @exception throw an exception called InvalidAmountException if the amount 
	 * is <= 0 with a message "Amount can't be negative or 0.".
	 * 
	 * The above two exceptions are user defined exceptions. Define the sepaeate 
	 * classes for those exceptions in separate files.
	 */
	public boolean debit(double amount) throws InsufficientFundsException, 
			InvalidAmountException {
		//	Your code goes here...
		if(amount <= 0.0){
			throw new InvalidAmountException("Amount can't be negative or 0.");
		}
		if(amount > this.amount){
			throw new InsufficientFundsException("Insufficient funds to withdraw the amount.");
		}
		this.amount-=amount;

		return true;
	}

	/**
	 * Credit the amount to this Account.
	 * 
	 * @param amount to credit to this Account.
	 * 
	 * @return true on successfully the amount is credited to this Account.
	 * 
	 * @exception throw an exception InvalidAmountException if the amount 
	 * (parameter) is <= 0 with a message "Amount can't be negative or 0.".
	 */
	public boolean credit(double amount) throws InvalidAmountException {
		//	Your code goes here...
		if(amount <= 0.0){
			throw new InvalidAmountException("Amount can't be negative or 0.");
		}
		this.amount+=amount;
		return true;
	}

	/**
	 * This method returns the String version of the object.
	 * 
	 * @return the String version of this class object in the following format
	 * "balance in your account is: <Amount>"
	 */
	public String toString() {
		return "balance in your account is: " + this.amount;
	}

	/**
	 * The main method is used to test this Account class.
	 * 
	 * @param args the command line arguments. No need to pass any command line 
	 * arguments at the time of executing this program.
	 */
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		Account account = new Account(0.0);
			
			String[] tokens = scan.nextLine().split(" ");
			switch (tokens[0]) {
				case "account":
					tokens = tokens[1].split(",");
					if (tokens.length == 1)
						account = new Account(Double.parseDouble(tokens[1]));
					else {
						account = new Account(
							tokens[0], tokens[1], tokens[2], tokens[3], tokens[5],
							tokens[5], Double.parseDouble(tokens[6]));
					}
					System.out.println("Account created and " + account);
					break;
				case "savings":
					try{
						tokens = tokens[1].split(",");
							SavingsAccount saving = new SavingsAccount(
								tokens[0], tokens[1], tokens[2], tokens[3], tokens[5],
								tokens[5], Double.parseDouble(tokens[6])							
							);	
						System.out.println("Account created and " + saving);

						while(scan.hasNextLine()) {

						String[] newTokens = scan.nextLine().split(" ");

						if(newTokens[0].equalsIgnoreCase("debit")) {
							saving.debit(Double.parseDouble(newTokens[1]));
							System.out.println("After Debit, " + saving);
						}
						else if(newTokens[0].equalsIgnoreCase("credit")) {
							saving.credit(Double.parseDouble(newTokens[1]));
							System.out.println("After Credit, " + saving);
						}
						else if(newTokens[0].equalsIgnoreCase("calcuateInterest")) {
								saving.calculateInterest();
							}							
						}
					} catch(Exception e) {
						System.out.println(e.getMessage());
					}
				break;

				
				
				
				case "current":
					try{
						tokens = tokens[1].split(",");
							CurrentAccount current = new CurrentAccount(
								tokens[0], tokens[1], tokens[2], tokens[3], tokens[5],
								tokens[5], Double.parseDouble(tokens[6])							
							);	
						System.out.println("Account created and " + current);

						while(scan.hasNextLine()) {

						String[] newTokens = scan.nextLine().split(" ");

						if(newTokens[0].equalsIgnoreCase("debit")) {
							current.debit(Double.parseDouble(newTokens[1]));
							System.out.println("After Debit, " + current);
						}
						else if(newTokens[0].equalsIgnoreCase("credit")) {
							saving.credit(Double.parseDouble(newTokens[1]));
							System.out.println("After Credit, " + saving);
						}
						else if(newTokens[0].equalsIgnoreCase("calcuateInterest")) {
								saving.calculateInterest();
							}							
						}
					} catch(Exception e) {
						System.out.println(e.getMessage());
					}
				break;				

				default:
					break;
			}
		scan.close();
	}

	/**
	 * This method returns the balance amount from this Account.
	 * @return the amount from this Account object.
	 */
	public double getAmount() {
		return this.amount;
	}

    /**
     * @return String return the accountNumber
     */
    public String getAccountNumber() {
        return accountNumber;
    }

    /**
     * @param accountNumber the accountNumber to set
     */
    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    /**
     * @return String return the accountHolderName
     */
    public String getAccountHolderName() {
        return accountHolderName;
    }

    /**
     * @param accountHolderName the accountHolderName to set
     */
    public void setAccountHolderName(String accountHolderName) {
        this.accountHolderName = accountHolderName;
    }

    /**
     * @return String return the dateOfBirth
     */
    public String getDateOfBirth() {
        return dateOfBirth;
    }

    /**
     * @param dateOfBirth the dateOfBirth to set
     */
    public void setDateOfBirth(String dateOfBirth) {
        this.dateOfBirth = dateOfBirth;
    }

    /**
     * @return String return the contactAddress
     */
    public String getContactAddress() {
        return contactAddress;
    }

    /**
     * @param contactAddress the contactAddress to set
     */
    public void setContactAddress(String contactAddress) {
        this.contactAddress = contactAddress;
    }

    /**
     * @return String return the email
     */
    public String getEmail() {
        return email;
    }

    /**
     * @param email the email to set
     */
    public void setEmail(String email) {
        this.email = email;
    }

    /**
     * @return String return the phoneNumber
     */
    public String getPhoneNumber() {
        return phoneNumber;
    }

    /**
     * @param phoneNumber the phoneNumber to set
     */
    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    /**
     * @param amount the amount to set
     */
    public void setAmount(double amount) {
        this.amount = amount;
    }
}


/*

						while(scan.hasNextLine()) {
							if(tokens[0].equalsIgnoreCase("debit")) {
								saving.debit(Double.parseDouble(tokens[1]));
								System.out.println("After Debit, " + saving);
							}
							else if(tokens[0].equalsIgnoreCase("credit")) {
								saving.credit(Double.parseDouble(tokens[1]));
								System.out.println("After Credit, " + saving);
							}
							else if(tokens[0].equalsIgnoreCase("calcuateInterest")) {
								saving.calculateInterest();
								System.out.println("After Calculation of Interest, " + saving);
							}							
						}
*/												


/*
				case "debit":
					try {
						boolean flag = account.debit(Double.parseDouble(tokens[1]));
						if (flag)
							System.out.println("After debit, " + account);
					} catch(Exception ex) {
						System.out.println(ex.getMessage());
					}
					break;
				case "credit":
					try {
						boolean flag = account.credit(Double.parseDouble(tokens[1]));
						if (flag)
							System.out.println("After credit, " + account);
					} catch(Exception ex) {
						System.out.println(ex.getMessage());
					}
					break;


*/