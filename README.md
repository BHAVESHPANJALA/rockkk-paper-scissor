# Rock Paper Scissors Game with ASCII Art

This is a simple Rock Paper Scissors game implemented in C++. The game allows the player to choose between ROCK, PAPER, and SCISSOR, and compete against the computer's random choice. The game displays ASCII art representations of the choices to make it more visually appealing.

## How to Play

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. The game will prompt you to select your choice by entering a number:
   - Enter '1' for ROCK
   - Enter '2' for PAPER
   - Enter '3' for SCISSOR
4. The computer will randomly select its choice.
5. The choices made by the player and the computer will be displayed using ASCII art.
6. The winner will be determined based on the rules of Rock Paper Scissors:
   - ROCK beats SCISSOR
   - SCISSOR beats PAPER
   - PAPER beats ROCK
   - If both choices are the same, it's a draw.
7. The game will indicate the winner or if it's a draw.
8. You can play the game again by choosing another option.

## ASCII Art Choices

The game uses ASCII art representations for the choices, which are displayed before determining the winner. Here are the ASCII art representations for each choice:

- ROCK:
    ```
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
    ```

- PAPER:
    ```
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
    ```

- SCISSOR:
    ```
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
    ```

## License

This project is licensed under the [MIT License](LICENSE).
