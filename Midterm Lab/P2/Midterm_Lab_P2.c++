#include <iostream>
#include <string>
#include <iomanip>
#include <cstdint>

void check_password(std::string correct_password, std::string input_password);
void php_to_usd(double *pesos);
void php_to_jpy(double *pesos);
void php_to_gbp(double *pesos);
void php_to_hkd(double *pesos);
void php_to_chf(double *pesos);
void php_to_cad(double *pesos);
void php_to_sgd(double *pesos);
void php_to_bhd(double *pesos);
void php_to_sar(double *pesos);
void php_to_bnd(double *pesos);

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    std::string correct_password = "correct password", input_password;
    double pesos;
    int choice;

    check_password(correct_password, input_password);

    while (true)
    {
        std::cout << "Press (1) for PHP to USD (United States of America)\n"
                  << "Press (2) for PHP to JPY (Japan)\n"
                  << "Press (3) for PHP to GBY (United Kingdom)\n"
                  << "Press (4) for PHP to HKD (Hongkong)\n"
                  << "Press (5) for PHP to CHF (Switzerland)\n"
                  << "Press (6) for PHP to CAD (Canada)\n"
                  << "Press (7) for PHP to SGD (Singapore)\n"
                  << "Press (8) for PHP to BHD (Bahrain)\n"
                  << "Press (9) for PHP to SAR (Saudi Arabia)\n"
                  << "Press (10) for PHP to BND (Brunei)\n"
                  << "Press (11) to exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        while (!std::cin)
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
                php_to_usd(&pesos);
                break;
            case 2:
                php_to_jpy(&pesos);
                break;
            case 3:
                php_to_gbp(&pesos);
                break;
            case 4:
                php_to_hkd(&pesos);
                break;
            case 5:
                php_to_chf(&pesos);
                break;
            case 6:
                php_to_cad(&pesos);
                break;
            case 7:
                php_to_sgd(&pesos);
                break;
            case 8:
                php_to_bhd(&pesos);
                break;
            case 9:
                php_to_sar(&pesos);
                break;
            case 10:
                php_to_bnd(&pesos);
                break;
            case 11:
                std::cout << "Thank you for using the money converter program!\n";
                exit(0);
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }
    
    return 0;
}

void check_password(std::string correct_password, std::string input_password)
{
    std::cout << "Enter the password: ";
    std::getline(std::cin, input_password);
    if (!(std::cin) || input_password != correct_password)
    {
        std::cin.clear();
        std::cout << "Incorrect PIN.\n";
        check_password(correct_password, input_password);
    }
    else
    {
        std::cout << "Welcome to the money converter program!\n";
    }
}

void php_to_usd(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 58.12 << " US dollars\n";
}

void php_to_jpy(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 0.38 << " Japanese yen\n";
}

void php_to_gbp(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 71.91 << " United Kingdom pounds\n";
}

void php_to_hkd(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 7.46 << " Hongkong dollars\n";
}

void php_to_chf(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 63.80 << " Switzerland francs\n";
}

void php_to_cad(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 40.60 << " Canadian dollars\n";
}

void php_to_sgd(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 42.88 << " Singaporean dollars\n";
}

void php_to_bhd(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 154.17 << " Bahrain dinars\n";
}

void php_to_sar(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 154.17 << " Saudi Arabia riyals\n";
}

void php_to_bnd(double *pesos)
{
    std::cout << "Enter the amount in pesos: ";
    std::cin >> *pesos;
    std::cout << *pesos << " pesos is equal to " << *pesos / 42.72 << " Brunei dollars\n";
}
