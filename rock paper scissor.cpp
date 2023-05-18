#include<iostream>
#include<cstdlib>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

using namespace std;
int main()
{
    int player_choice = 0;
    int computer_choice = 0;
    bool draw = false;

    do
    {
        cout<<"select your choice ::: "<<endl;
        cout<<"choose '1' for ROCK"<<endl;
        cout<<"choose '2' for PAPER"<<endl;
        cout<<"choose '3' for SCISSOR"<<endl;
        cout<<"enter your choice :- ";
        cin>>player_choice;


        cout<<endl;


        computer_choice = (rand() % 3) + 1;
        if(computer_choice == ROCK)
        {
            cout<<"computer chooses :- ROCK"<<endl;
        }

        else if(computer_choice == PAPER)
        {
            cout<<"computer chooses :- PAPER"<<endl;
        }

        else if(computer_choice == SCISSOR)
        {
            cout<<"computer chooses :- SCISSOR"<<endl;
        }



        draw = false;

        if(player_choice == computer_choice)
        {
            draw = true;
            cout<<"its a draw ::"<<endl;
            cout<<"PLAY AGAIN::"<<endl;
        }



        else if(player_choice == ROCK && computer_choice == SCISSOR)
        {
            cout<<"player winned"<<endl;
            cout<<"because rock breaks scissor"<<endl;
        }

        else if(player_choice == SCISSOR && computer_choice == ROCK)
        {
            cout<<"computer winned"<<endl;
            cout<<"because rock breaks scissor"<<endl;
        }



        else if(player_choice == PAPER && computer_choice == SCISSOR)
        {
            cout<<"computer winned"<<endl;
            cout<<"because scissor cuts paper"<<endl;
        }

        else if(player_choice == SCISSOR && computer_choice == PAPER)
        {
            cout<<"player winned"<<endl;
            cout<<"because scissor cuts paper"<<endl;
        }



        else if(player_choice == ROCK && computer_choice == PAPER)
        {
            cout<<"computer winned"<<endl;
            cout<<"because paper covers rock"<<endl;
        }

        else if(player_choice == PAPER && computer_choice == ROCK)
        {
            cout<<"player winned"<<endl;
            cout<<"because paper covers rock"<<endl;
        }

    }
    while(draw);
}
