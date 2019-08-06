#include <iostream>
#include <string>

using namespace std;

struct EUBankAccount
{
    std::string IBAN;
    int amount;
};

struct UKBankAccount
{
    string sortNumber;
    string accountNumber;
    int amount;
};

//Template function will have to compare the amount of the bank accounts
template <typename bankAccount>
int getMaxAmount(const bankAccount &acc1, const bankAccount &acc2)
{
        //All bank have an amount field
        if(acc1.amount > acc2.amount)
        {
            return acc1.amount;
        }
        else return acc2.amount;
}

int main()
{
    EUBankAccount spainAccount{"IBAN1", 1000};
    EUBankAccount germanAccount{"IBAN2", 2000};
    cout << "greater amount is: " << getMaxAmount(spainAccount, germanAccount);
    return 0;
}