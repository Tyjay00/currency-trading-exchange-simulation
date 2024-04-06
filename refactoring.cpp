#include <iostream>

void printMenu()
{
    // Print menu options
    std::cout << "1: Print Help " << std::endl;
    // print exchange stats
    std::cout << "2: Print exchange stats " << std::endl;
    // make a offer
    std::cout << "3: Place an ask " << std::endl;
    // make a bid
    std::cout << "4: Place a bid " << std::endl;
    // print wallet
    std::cout << "5: Print wallet " << std::endl;
    // continue
    std::cout << "6: Continue " << std::endl;
}

int getUserOption()
{
    int userOption;

    std::cout << "Type in 1-6 " << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption < 1 || userOption > 6)
    {
        std::cout << "Invalid choice. Choose a number between 1 and 6." << std::endl;
    }

    if (userOption == 1)
    {
        std::cout << "Help - choose options from the menu" << std::endl;
        std::cout << "and follow the on screen instructions." << std::endl;
    }

    if (userOption == 2)
    {
        std::cout << "Market looks good " << std::endl;
    }

    if (userOption == 3)
    {
        std::cout << "Make a offer - enter the amount " << std::endl;
    }

    if (userOption == 4)
    {
        std::cout << "Make a bid - enter the amount " << std::endl;
    }

    if (userOption == 5)
    {
        std::cout << "Your Wallet is empty " << std::endl;
    }

    if (userOption == 6)
    {
        std::cout << "Going to next time frame " << std::endl;
    }
}

int main()
{
    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}
