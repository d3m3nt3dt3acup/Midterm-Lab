#include <iostream>
#include <iomanip>

void check_PIN(int *correct_PIN, int *input_PIN);
void deposit(double *balance, double *deposit_amount);
void withdrawal(double *balance, double *withdraw_amount);
void balance_check(double *balance);
void quit();

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    double balance = 10000.00, deposit_amount, withdraw_amount;
    int correct_PIN = 1234, input_PIN, choice;

    check_PIN(&correct_PIN, &input_PIN);

    while (true)
    {
        std::cout << "Press (1) to deposit\n"
                  << "Press (2) to withdraw\n"
                  << "Press (3) to check balance\n"
                  << "Press (4) to exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        while (!std::cin || choice < 1 || choice > 4)
        {
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
            std::cout << "Invalid choice.\n"
                      << "Enter your choice: ";
            std::cin >> choice;
        }

        switch (choice)
        {
            case 1:
                deposit(&balance, &deposit_amount);
                break;
            case 2:
                withdrawal(&balance, &withdraw_amount);
                break;
            case 3:
                balance_check(&balance);
                break;
            case 4:
                quit();
                break;
        }
    }

    return 0;
}

void check_PIN(int *correct_PIN, int *input_PIN)
{
    std::cout << "Enter the PIN code: ";
    std::cin >> *input_PIN;
    if (!std::cin || *input_PIN != *correct_PIN)
    {
        std::cin.clear();
        std::cin.ignore(INT64_MAX, '\n');
        std::cout << "Incorrect PIN.\n";
        check_PIN(correct_PIN, input_PIN);
    }
    else
    {
        std::cout << "Welcome to the ATM program!\n";
    }
}
void deposit(double *balance, double *deposit_amount)
{
    std::cout << "Enter the deposit amount: ";
    std::cin >> *deposit_amount;
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore(INT64_MAX, '\n');
        std::cout << "Invalid amount.\n"
                  << "Enter the deposit amount: ";
        std::cin >> *deposit_amount;
    }

    *balance += *deposit_amount;
    std::cout << "The updated balance is " << *balance << " pesos." << '\n';
}

void withdrawal(double *balance, double *withdraw_amount)
{
    if (*balance <= 0.00)
    {
        std::cout << "Insufficient balance.\n";
    }
    else
    {
        std::cout << "Enter the withdraw amount: ";
        std::cin >> *withdraw_amount;
        while (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
            std::cout << "Invalid amount.\n"
                    << "Enter the withdraw amount: ";
            std::cin >> *withdraw_amount;
        }

        *balance -= *withdraw_amount;
        std::cout << "The updated balance is " << *balance << " pesos." << '\n';
    }
}

void balance_check(double *balance)
{
    std::cout << "The current balance is " << *balance << " pesos." << '\n';
}

void quit()
{
    std::cout << "Thank you for using the ATM program.\n";
    exit(0);
}