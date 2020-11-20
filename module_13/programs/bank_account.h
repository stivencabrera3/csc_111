#ifndef Account_h
#define Account_h
class Account
{
    private:
        double balance;
        int transactions;
        double interest_rate = 0;
        double interest = 0;

    public:
        Account(double b)
        {
            balance = b;
        }


        void deposit(double val)
        {
            balance += val;
            transactions++;
        }

        void withdrawal(double val)
        {
            balance -= val;
            transactions++;
        }

        void calc_interest()
        {
            interest = balance * interest_rate;
            balance += interest;
            
        }

        double get_balance()
        {
            return balance;
        }

        double get_interest_rate()
        {
            return interest_rate;
        }







};

#endif