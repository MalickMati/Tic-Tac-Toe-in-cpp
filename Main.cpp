#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;

char board[9] = { '1','2','3','4','5','6','7','8','9' };
bool j = true; 

class game {
private:
	char p1[10], p2[10];
	char turn;
	int choice;
	string won;

	


public:
	
	game() {
		turn = 'O';
	}
	void getplayer() {
	th:
		system("cls");
		cout << "\n\n\t\tWelcome to Tick Tac Toe game\n";
		cout << "\n\tEnter the name of players\n";
		cout << "\tPlayer 1[O]: ";
		cin >> p1;
		cout << "\tPlayer 2[X]: ";
		cin >> p2;
		system("cls");
		cout << "\n\n\tPlayer 1[O] = " << p1 << "\n\tPlayer 2[X] = " << p2 << "\n";
		cout << "\n\tAre these names right. Press N to rename the players: ";
		char a = _getch();
		if (a == 'N' || a == 'n') {
			goto th;
		}
	}

	void outboard() {
		system("cls");
		cout << "\n\t\t***  T I C K  T A C  T O E  ***\n\n";
		cout << "\tPlayer 1 [O] = " << p1 << "\n\tPlayer 2 [X] = " << p2 << "\n\n";
		cout << "\t\t" << "     |     |     \n";
		cout << "\t\t" << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "  \n";
		cout << "\t\t" << "_____|_____|_____\n";
		cout << "\t\t" << "     |     |     \n";
		cout << "\t\t" << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "  \n";
		cout << "\t\t" << "_____|_____|_____\n";
		cout << "\t\t" << "     |     |     \n";
		cout << "\t\t" << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "  \n";
		cout << "\t\t" << "     |     |     \n";
	}


	void pturn() {
	x:
		if (turn == 'O') {
			cout << p1 << "'s Turn [O]\n";
		}
		else if (turn == 'X') {
			cout << p2 << "'s Turn [X]\n";
		}
		cout << "Enter your choice: ";
		cin >> choice;
		//system("cls");
		switch (choice) {
		case 1: {
			if (board[0] == 'X' || board[0] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[0] = turn;
			break;
		}
		case 2: {
			if (board[1] == 'X' || board[1] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[1] = turn;
			break;
		}
		case 3: {
			if (board[2] == 'X' || board[2] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[2] = turn;
			break;
		}
		case 4: {
			if (board[3] == 'X' || board[3] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[3] = turn;
			break;
		}
		case 5: {
			if (board[4] == 'X' || board[4] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[4] = turn;
			break;
		}
		case 6: {
			if (board[5] == 'X' || board[5] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[5] = turn;
			break;
		}
		case 7: {
			if (board[6] == 'X' || board[6] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[6] = turn;
			break;
		}
		case 8: {
			if (board[7] == 'X' || board[7] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[7] = turn;
			break;
		}
		case 9: {
			if (board[8] == 'X' || board[8] == 'O') {
				cout << "Box already filled...\nTry Again\n";
				goto x;
			}
			board[8] = turn;
			break;
		}
		default: {
			cout << "ERROR please try again...\n";
			goto x;
			break;
		}
		}
		if (turn == 'O') {
			turn = 'X';
		}
		else if (turn == 'X') {
			turn = 'O';
		}
	}


	void gameover() {
		system("cls");
		if ((board[0] == board[1] && board[0] == board[2]) || (board[3] == board[4] && board[3] == board[5]) ||
			(board[6] == board[7] && board[6] == board[8]) || (board[0] == board[3] && board[0] == board[6]) ||
			(board[1] == board[4] && board[1] == board[7]) || (board[2] == board[5] && board[2] == board[8]) ||
			(board[0] == board[4] && board[0] == board[8]) || (board[6] == board[4] && board[6] == board[2])) {
			if (turn == 'X') {
				cout << "\a\n\n\tCongratulations!\n\t" << p1 << " has won\n\n";
				won = p1;
			}
			else if (turn == 'O') {
				cout << "\a\n\n\tCongratulations!\n\t" << p2 << " has won\n\n";
				won = p2;
			}
			j = false;
			
		}

		if (
			(board[0] == 'X' || board[0] == 'O') && (board[1] == 'X' || board[1] == 'O') && (board[2] == 'X' || board[2] == 'O') &&
			(board[5] == 'X' || board[5] == 'O') && (board[4] == 'X' || board[4] == 'O') && (board[3] == 'X' || board[3] == 'O') &&
			(board[6] == 'X' || board[6] == 'O') && (board[7] == 'X' || board[7] == 'O') && (board[8] == 'X' || board[8] == 'O')) {
			cout << "\a\n\n\t\tGame Draw...\n\n";
			j = false;
			won = "Draw";
		}

		

	}


	void outp() {
		ofstream ou("Games.txt",ios::app);
		ou << setw(15) << p1 << setw(15) << p2 << setw(20) << won << endl;
		ou.close();
	}

};
int main() {
	game g1;
	g1.getplayer();
	while (j) {
		g1.outboard();
		g1.pturn();
		g1.gameover();
	}
	g1.outp();
	getch();
	return 0;
}
