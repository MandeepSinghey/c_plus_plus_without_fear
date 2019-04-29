#include <iostream>
using namespace std;

//function prototype
int opponent_input();
int user_input();
int play_more();
int game();

//variables prototype
int number = 0;
int opponent_turn = 0;
bool quit = false;
int play = 1; // 1 is true
int no_of_games = 0;
int allowed_subtractions = 0;

//main function
int main()
{
    while (quit == false)
    {
        //get user input
        number = user_input();
        game();
    }
}

//game logic
int game()
{

    // start total at user input
    int total = number;
    while (total > 0)
    {
        if (total % 3 == 2)
        {
            total = total - 2;
            std::cout << "computer subtracting 2\n🏁 New total is " << total << "\n";
        }
        else
        {
            total = total - 1;
            std::cout << "computer subtracting 1 \n🏁 New total is " << total << "\n";
        }

        if (total == 0)
        {
            std::cout << "🎈 🎈 🎈 🎈 🎈 I win :-)🎈 🎈 🎈 🎈 🎈  🎊\n";
            no_of_games = 0;
            quit = play_more();
            return quit;
        }
        opponent_input();

        total = total - opponent_turn;
        std::cout << "After subtracting user input\n🏁 New total is " << total << "\n";
        if (total == 0)
        {
            std::cout << "🥳 🥳 🥳 🥳 🥳 You win 🥳 🥳 🥳 🥳 🥳 \n";
            no_of_games += 1;
            quit = play_more();
            return quit;
        }
    }
}
int play_more()
{
    std::cout << "Want to play more? \n-->Type 1 to play \n-->Type 0 to quit \n";
    std::cin >> play;
    if (play == 0)
    {
        quit = true;
    }
    return quit;
}

int user_input()
{
    if (no_of_games == 0)
    {
        std::cout << "New Game 0 \n 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀\n";
        std::cout << "🏁 🏁 🏁 Welcome to NIM, choose a number greater than 1 🏁 🏁 🏁-->\n";
        std::cout << "New Game 0 \n 🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀\n";
        no_of_games += 1;
    }
    // else
    // {
    //     std::cout << "🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀 choose a number greater than 1🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀🌀-->\n";
    //     no_of_games += 1;
    // }

    std::cin >> number;
    while (number < 1)
    {
        std::cout << "You chose-->" << number << " \n s=Select number greater than 1 only for new game\n";
        user_input();
    }
    return number;
}

int opponent_input()
{
    //recursion technique for user input
    std::cout << "Opponent: Your turn choose 2 or 1 -->\n";
    std::cin >> opponent_turn;
    while (opponent_turn > 2 || opponent_turn < 1)
    {
        std::cout << "You choose-->" << opponent_turn << " select 1 or 2 only\n";
        opponent_input();
    }
    return opponent_turn;
}
