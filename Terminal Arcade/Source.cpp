#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{

	vector<string> GameList = { 
		"Guess the Number" 
	};

	int choice = 0;

	while (!choice)
	{
		cout << "Welcome to Terminal Arcade!" << endl;
		cout << "Please select your the game: " << endl;
		
		for (int i = 0; i < GameList.size(); i++)
		{
			cout << i + 1 << ". " << GameList[i] << endl;
		}

		try
		{
			cin >> choice;
		}
		catch (string e)
		{
			cout << "Invalid. Please try again." << endl;
			cout << "Error Description: " << e << endl;
		}
		system("cls");
	}


	switch (choice)
	{
		case 1:
			cout << "You have selected " << GameList[choice] << endl;
		default:
			cout << "The game you selected is not yet created. Please choose one of our other games or check back another time." << endl;

	}



	return 0;
}