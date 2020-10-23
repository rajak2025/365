import java.util.Random;
import java.lang.Math;
public class Savings {

    public static int getRandomNumber(int min, int max) {
        return (int) ((Math.random() * (max - min)) + min);
    }    
    public static void main(String[] args) {
        int min = 3000;
        int max = 5000;
        int deposit = 10000;
        int balance = deposit;
        int year = 1;
        System.out.println("Year\tDeposit\tBalance") ;
        while(balance < 100000) {

            int newDeposit = getRandomNumber(min, max);
            balance += newDeposit;

            if(year <= 7) {
                System.out.println(year+"\t"+newDeposit+"\t"+balance) ;
                year++;
            }
            else {
                year++;                
            }
        }
        System.out.println("It will take "+(year-1)+ " years to accumulate $100000 dollars in your account");
    }
}