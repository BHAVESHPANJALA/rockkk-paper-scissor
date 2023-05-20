#include <iostream>
#include <cstdlib>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

class RockPaperScissors {
private:
    int player_choice;
    int computer_choice;
    bool draw;

public:
    RockPaperScissors() {
        player_choice = 0;
        computer_choice = 0;
        draw = false;
    }

    void get_player_choice() {
        // Get player's choice
        std::cout << "Select your choice:\n";
        std::cout << "Choose '1' for ROCK\n";
        std::cout << "Choose '2' for PAPER\n";
        std::cout << "Choose '3' for SCISSOR\n";
        std::cout << "Enter your choice: ";
        std::cin >> player_choice;
    }

    void generate_computer_choice() {
        // Generate computer's choice
        computer_choice = (rand() % 3) + 1;
    }

    void display_choices() {
        // Display choices made by player and computer
        std::string player_choice_ascii = get_choice_ascii(player_choice);
        std::string computer_choice_ascii = get_choice_ascii(computer_choice);

        std::cout << "Player chooses:\n";
        std::cout << player_choice_ascii << std::endl;
        std::cout << "Computer chooses:\n";
        std::cout << computer_choice_ascii << std::endl;
    }

    std::string get_choice_ascii(int choice) {
        // Get ASCII art representation for the choice
        switch (choice) {
            case ROCK:
                return R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)";
            case PAPER:
                return R"(
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
)";
            case SCISSOR:
                return R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)";
            default:
                return "";
        }
    }

    void determine_winner() {
        // Determine the winner or if it's a draw
        draw = false;

        if (player_choice == computer_choice) {
            draw = true;
            std::cout << "It's a draw!\n";
        }
        else if ((player_choice == ROCK && computer_choice == SCISSOR) ||
                 (player_choice == SCISSOR && computer_choice == PAPER) ||
                 (player_choice == PAPER && computer_choice == ROCK)) {
            std::cout << "Player wins!\n";
        }
        else {
            std::cout << "Computer wins!\n";
        }
    }

    void play_game() {
        // Main game loop
        draw = true;
        while (draw) {
            get_player_choice();
            generate_computer_choice();
            display_choices();
            determine_winner();
            std::cout << "Play again!\n";
        }
    }
};

int main() {
    // Create an instance of the game and start playing
    RockPaperScissors game;
    game.play_game();

    return 0;
}
