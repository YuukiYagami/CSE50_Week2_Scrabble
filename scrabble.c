#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Constants
int points[] = {1, 2, 3, 4, 5, 8, 10, 0};

// Prototype
int calculate_score(string word);
void winner(int score_1, int score_2);

int main(void)
{
    // Initializing 2 strings to get to get user input
    string str_1 = get_string("Player 1: ");
    string str_2 = get_string("Player 2: ");

    // creating score variable for player 1 and player 2
    int score_1 = calculate_score(str_1);
    int score_2 = calculate_score(str_2);

    // to check winner
    winner(score_1, score_2);
}

// calculate score function
int calculate_score(string word)
{
    // declaring temp letter, score, and finding lenght of string
    char temp_word;
    int n = strlen(word);
    int score = 0;

    // Starting for loop of string lenght
    for (int i = 0; i < n; i++)
    {
        // changing case of each character into uppercase
        temp_word = toupper(word[i]);

        // declaring points
        if (temp_word == 'A' || temp_word == 'E' || temp_word == 'I' || temp_word == 'L' ||
            temp_word == 'N' || temp_word == 'O' || temp_word == 'R' || temp_word == 'S' ||
            temp_word == 'T' || temp_word == 'U')
        {
            score += points[0];
        }
        else if (temp_word == 'D' || temp_word == 'G')
        {
            score += points[1];
        }
        else if (temp_word == 'B' || temp_word == 'C' || temp_word == 'M' || temp_word == 'P')

        {
            score += points[2];
        }
        else if (temp_word == 'F' || temp_word == 'H' || temp_word == 'V' || temp_word == 'W' ||
                 temp_word == 'Y')
        {
            score += points[3];
        }
        else if (temp_word == 'K')
        {
            score += points[4];
        }
        else if (temp_word == 'J' || temp_word == 'X')
        {
            score += points[5];
        }
        else if (temp_word == 'Q' || temp_word == 'Z')
        {
            score += points[6];
        }
        else
        {
            score += points[7];
        }
    }

    return score;
}

// checking winner
void winner(int score_1, int score_2)
{
    // initializing temp variables
    int a = score_1;
    int b = score_2;

    // checking winner
    if (a > b)
    {
        printf("Player 1 wins!\n");
    }
    else if (a < b)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
