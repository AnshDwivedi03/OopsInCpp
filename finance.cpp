#include <iostream> // Include the necessary header for input/output stream
#include <string> // Include the necessary header for string operations
using namespace std;





class BankAccount { // Define a class named BankAccount
  private: 
     string accountNumber; // Private member variable to store the account number
    double balance; // Private member variable to store the balance

  public:
    // Constructor to initialize BankAccount object with provided values
    BankAccount(const  string & accNum, double initialBalance): accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
      balance += amount; // Add the deposited amount to the current balance
       cout << "Deposit successful. Current balance: " << balance <<  endl; // Output success message and current balance
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
      if (amount <= balance) { // Check if the withdrawal amount is less than or equal to the current balance
        balance -= amount; // Deduct the withdrawn amount from the current balance
         cout << "Withdrawal successful. Current balance: " << balance <<  endl; // Output success message and current balance
      } else {
         cout << "Insufficient balance. Cannot withdraw." <<  endl; // Output error message for insufficient balance
      }
    }
};





int main() {
  // Create a bank account object
   string sacno = "SB-123"; // Define the account number
  double Opening_balance, deposit_amt, withdrawal_amt; // Define variables for opening balance, deposit amount, and withdrawal amount
  Opening_balance = 1000; // Assign the opening balance
   cout << "A/c. No." << sacno << " Balance: " << Opening_balance <<  endl; // Output the account details

  BankAccount account(sacno, 1000.0); // Create a BankAccount object with initial account number and balance

  // Deposit money into the account
  deposit_amt = 1500; // Define the deposit amount
   cout << "Deposit Amount: " << deposit_amt <<  endl; // Output the deposit amount
  account.deposit(deposit_amt); // Call the deposit method of the account object

  // Withdraw money from the account
  withdrawal_amt = 750; // Define the withdrawal amount
   cout << "Withdrawal Amount: " << withdrawal_amt <<  endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  // Attempt to withdraw more money than the balance
  withdrawal_amt = 1800; // Define an amount higher than the balance for withdrawal
   cout << "Attempt to withdrawal Amount: " << withdrawal_amt <<  endl; // Output the withdrawal amount
  account.withdraw(withdrawal_amt); // Call the withdraw method of the account object

  return 0; // Return 0 to indicate successful completion
}
