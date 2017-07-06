#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

const int NUMBER_OF_CARDS = 52;
string suits[4] = {"Spades", "Hearts", "Diamonds", "Clubs"};
string ranks[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
                      "10", "Jack", "Queen", "King"};

int main()
{
	vector<int> desk(NUMBER_OF_CARDS);

	for (int i = 0; i < NUMBER_OF_CARDS; i++)
		desk[i] = i;
	srand(time(0));
	for (int i = 0; i < NUMBER_OF_CARDS; i++)
	{
		int index = rand() % NUMBER_OF_CARDS;
		int temp = desk[i];
		desk[i] = desk[index];
		desk[index] = temp;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << ranks[desk[i] % 13] << " of " <<
			suits[desk[i] / 13] << endl;
	}

	return 0;
}