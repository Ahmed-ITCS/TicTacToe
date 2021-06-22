#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	char location[9];
	int n = 1;
	for (int i = 0; i < 9; i++)
	{
		location[i] = ' ';
	}
	int player = 2;
	char playermark = 'o';
	int count = 1;
	do
	{
		cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
		cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
		cout << location[6] << " | " << location[7] << " | " << location[8] << endl;

		if (player == 2)
		{
			player = 1;
			playermark = 'x';
		}
		else
		{
			player = 2;
			playermark = 'o';
		}
		int c = 0;
		while (count % 2 == 0)
		{
			//cout << "----------\n";
			int random = (rand() % 9) + 1;
			//cout << "random   :  " << random << endl;
			if (location[random - 1] != ' ')
			{
				random = (rand() % 9) + 1;
				location[random - 1] = playermark;
				//cout << "----------\n";
				//break;
			}
			else
			{
				location[random - 1] = playermark;
				//cout << "----------\n";
				system("cls");

			}
			c++;
			break;
		}
		if (c > 0)
		{
			c = 0;
			count++;
			system("cls");
			continue;
		}
		//count--;
		cout << "enter the location you want to set the value of\n";
		int locationn;
		cin >> locationn;
		system("cls");
		while (location[locationn-1] != ' ')
		{
			cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
			cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
			cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
			cout << "alredy a mark there, enter again\n";
			cin >> locationn;
		}
		location[locationn-1] = playermark;
		//system("cls");
		count++;
		if (count >= 6)
		{
			if ((location[0] == 'x' && location[1] == 'x'&&location[2] == 'x') || (location[0] == 'o' && location[1] == 'o'&&location[2] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[3] == 'x' && location[4] == 'x'&&location[5] == 'x') || (location[3] == 'o' && location[4] == 'o'&&location[5] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[6] == 'x' && location[7] == 'x'&&location[8] == 'x') || (location[6] == 'o' && location[7] == 'o'&&location[8] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[0] == 'x' && location[3] == 'x'&&location[6] == 'x') || (location[0] == 'o' && location[3] == 'o'&&location[6] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[1] == 'x' && location[4] == 'x'&&location[7] == 'x') || (location[1] == 'o' && location[4] == 'o'&&location[7] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[2] == 'x' && location[5] == 'x'&&location[8] == 'x') || (location[2] == 'o' && location[5] == 'o'&&location[8] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[0] == 'x' && location[4] == 'x'&&location[8] == 'x') || (location[0] == 'o' && location[4] == 'o'&&location[8] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			else if ((location[2] == 'x' && location[4] == 'x'&&location[6] == 'x') || (location[2] == 'o' && location[4] == 'o'&&location[6] == 'o'))
			{
				if (playermark == 'x')
				{
					cout << "player1 wins \n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}
				else
				{
					cout << "player 2 wins\n";
					cout << location[0] << "_|_" << location[1] << "_|_" << location[2] << endl;
					cout << location[3] << "_|_" << location[4] << "_|_" << location[5] << endl;
					cout << location[6] << " | " << location[7] << " | " << location[8] << endl;
					break;
				}

			}
			
		}

	} while (true);

	system("pause");
	return 0;

}