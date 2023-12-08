#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit
{
    clubs,
    diamonds,
    hearts,
    spades
};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
private:
    int number;
    Suit suit;

public:
    Card() {}

    void set(int n, Suit s)
    {
        suit = s;
        number = n;
    }

    void display();
};

void Card::display()
{
    if (number >= 2 && number <= 10)
    {
        cout << number;
    }
    else
    {
        switch (number)
        {
        case jack:
            cout << "J";
            break;

        case queen:
            cout << "Q";
            break;

        case king:
            cout << "K";
            break;

        case ace:
            cout << "A";
            break;

        default:
            break;
        }
    }

    switch (suit)
    {
    case clubs:
        cout << static_cast<char>(5);
        break;

    case diamonds:
        cout << static_cast<char>(4);
        break;

    case hearts:
        cout << static_cast<char>(3);
        break;

    case spades:
        cout << static_cast<char>(6);
        break;

    default:
        break;
    }
}

int main()
{
    Card deck[52];
    int j;

    cout << endl;
    // Setting Cards in order
    for (j = 0; j < 52; j++)
    {
        int num = (j % 13) + 2;
        Suit su = Suit(j / 13);
        deck[j].set(num, su);
    }
    // Displaying ordered deck of cards
    cout << "\nOrdered Deck:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << " ";
        if (!((j + 1) % 13))
        {
            cout << endl;
        }
    }

    srand(time(NULL));
    // Shuffling all cards
    for (j = 0; j < 52; j++) // For each card in deck
    {
        int k = rand() % 52; // Pick another card at random
        Card temp = deck[j]; // and swap them with each other
        deck[j] = deck[k];
        deck[k] = temp;
    }

    // Displaying shuffled deck of cards
    cout << "\nShuffled Deck:\n";
    for (j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << " ";
        if (!((j + 1) % 13))
        {
            cout << endl;
        }
    }

    Card hands[4][13];
    for(int i = 0; i < 13; i++)
    {
        for(int k = 0; k < 4;k++)
        {
            hands[k][i] = deck[(i*4)+k];
        }
    }
    cout << "\nPlayers' hands:\n";
    for(int i = 0; i < 4; i++)
    {
        cout << "Player No." << i + 1 << ":  ";
        for(int k = 0; k < 13;k++)
        {
            hands[i][k].display();
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}