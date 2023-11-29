#include<iostream>
#include"Players.h"
#include"Teams.h"
#include"Matches.h"
#include <windows.h> 
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main() {
	SetConsoleTextAttribute(hConsole, 4);
	cout << "***************CRICK BUZZ**********" << endl;
	Sleep(1000);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "\t   Group Member   \t" << endl;
	cout << "\t Muhammad Umer \t 21F-9291 " << endl;
	cout << "\t Muhammad Ahmad  21F-9195 " << endl;
	SetConsoleTextAttribute(hConsole, 6);
	Player* Player1[2];
	Team team1[2];
	Team t1obj;
	Match M1;
	for (int i = 0; i < 2; i++) {
		Player1[i] = &team1[i];
	}
	Player* Player2[2];
	Team team2[2];
	Team t2obj;
	Match M2;
	for (int i = 0; i < 2; i++) {
		Player2[i] = &team2[i];
	}
	string user_name, user_pass;
	cout << "ENTER USERNAME : ";
	cin >> team1[0].AdminUsername;
	team1[0].setAdmin_Password(team1[0].AdminUsername);
	cout << "ENTER PASWORD : ";
	cin >> team1[0].AdminPassword;
	team1[0].setAdmin_Password(team1[0].AdminPassword);
	if (team1[0].AdminUsername == "a" && team1[0].AdminPassword == "1") {
		cout << "APPROVED " << endl;
		int choice;
		do {
			cout << "**********CRICK BUZZ APPLICATION**********" << endl;
			cout << "1- To Add Player "    << endl;
			cout << "2- To Remove Player " << endl;
			cout << "3- To Search Player " << endl;
			cout << "4- To Update Player " << endl;
			cout << "5- TO Enter Team  "   << endl;
			cout << "6- For To Update Captian " << endl;
			cout << "7- For To Update Coach "   << endl;
			cout << "8- To Display Team "       <<endl;
			cout << "9- For To Conduct A match" << endl;
			cout << "10- For To Schedule Match" << endl;
			cout << "11- To Update World Recoad"<< endl;
			cout << "12- To Update Team Ranking "<< endl;
			cout << "13- To UpComming Matches"   << endl;
			cout << "14- For To Recent Matches  "<< endl;
			cout << "15- Terminate program"      << endl;
			cout << "Select Option : ";
			cin >> choice;
			switch (choice) {
			case 1:
				 {
					cout << "**********Function to ADD  PLAYERS********** " << endl;
					cout << "For To ADD Player In Team 1 PRESS ->1 " << endl;
					cout << "For To ADD Player In Team 2 PRESS ->2 " << endl;
					int TempA;
					cout << "Select Option : ";
					cin >> TempA;
					if (TempA == 1) {
						cout << " *****Team 1 Player***** " << endl;
						for (int i = 0; i < 2; i++) {
							cout << "Player -> " << i + 1 << endl;
							Player1[i]->add_Player();
						}
					}
					else if (TempA == 2) {
						cout << " *****Team 2 Player***** " << endl;
						for (int i = 0; i < 2; i++) {
							cout << "Player -> " << i + 1 << endl;
							Player2[i]->add_Player();
						}
					}
					else {
						cout << "Invalid Input" << endl;
					}
				}
				break;
			case 2:
				cout << "**********Function to Remove PLAYERS********** " << endl;
				{
					cout << "For To Remove Player In Team 1 PRESS ->1 " << endl;
					cout << "For To Remove Player In Team 2 PRESS ->2 " << endl;
					int TempR;
					cout << "Select Option : ";
					cin >> TempR;
					if (TempR == 1) {
						cout << " * ****Team 1 Player * ****" << endl;
						string name;
						bool flag = false;
						cout << "Enter Player Name To Remove : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player1[i]->Name == name) {
								Player1[i]->remove_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Player Not Found " <<endl;
						}
					}
					if (TempR == 2) {
						cout << " * ****Team 2 Player * ****" << endl ;
						string name;
						bool flag = false;
						cout << "Enter Player Name To Remove : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player2[i]->Name == name) {
								Player2[i]->remove_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Player Not Found " << endl;
						}
					}
					
				}
				break;
			case 3:
				cout << "**********Function For TO Search PLAYERS********** " << endl;
				 {
					cout << "For To Search Player In Team 1 PRESS ->1 " << endl;
					cout << "For To Search Player In Team 2 PRESS ->2 " << endl;
					int TempS;
					cout << "Select Option : ";
					cin >> TempS;
					if (TempS == 1) {
						cout << " * ****Team 1 Player * ****" << endl;
						string name;
						bool flag = false;
						cout << "Enter Player Name For Search : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player1[i]->Name == name) {
								Player1[i]->search_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Player Not Found " << endl;
						}
					}
					else if (TempS == 2) {
						cout << " * ****Team 2 Player * ****" << endl;
						string name;
						bool flag = false;
						cout << "Enter Player Name For Search : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player2[i]->Name == name) {
								Player2[i]->search_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Player Not Found " << endl;
						}
					}
		
				}
				break;
			case 4:
				cout << "**********Function For TO UpDate PLAYERS********** " << endl;
				 {
					cout << "For To UpDate Player In Team 1 PRESS ->1 " << endl;
					cout << "For To UpDate Player In Team 2 PRESS ->2 " << endl;
					int TempUP;
					cout << "Select Option : ";
					cin >> TempUP;
					if (TempUP == 1) {
						string name;
						bool flag = false;
						cout << " * ****Team 1 Player * ****" << endl;
						cout << "Enter Name to UpDate Player : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player1[i]->Name == name) {
								Player1[i]->update_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Name not Found" << endl;
						}
					}
					else if (TempUP == 2) {
						string name;
						bool flag = false;
						cout << " * ****Team 2 Player * ****" << endl;
						cout << "Enter Name to UpDate Player : ";
						cin >> name;
						for (int i = 0; i < 2; i++) {
							if (Player2[i]->Name == name) {
								Player2[i]->update_Player();
								flag = true;
							}
						}
						if (flag == false) {
							cout << "Name not Found" << endl;
						}
					}
					
				}
				break;
			case 5:
				 {
					cout << "**********Function For Team Information********** " << endl;
					cout << "For Team 1 Data PRESS ->1 " << endl;
					cout << "For Team 2  Data PRESS ->2 " << endl;
					int TempTD;
					cout << "Select Option : ";
					cin >> TempTD;
					if (TempTD == 1) {
						cout << "Enter Information of 1st Team : " << endl;
						t1obj.get_information();
					}
					if (TempTD == 2) {
						cout << "Enter Information Of 2nd Team : " << endl;
						t2obj.get_information();
					}
				}
				break;
			case 6:
				 {
					cout << "**********Function For to UpDate Captain********** " << endl;
					cout << "For To UpDate Captain In Team 1 PRESS ->1 " << endl;
					cout << "For To UpDate Captain In Team 2 PRESS ->2 " << endl;
					int TempC;
					cout << "Select Option : ";
					cin >> TempC;
					if (TempC == 1) {
						cout << "Team 1 Captain Update " << endl;
						t1obj.updateCaptain();
					}
					if (TempC == 2) {
						cout << "Team 2 Captain Update " << endl;
						t2obj.updateCaptain();
					}
				}
				break;
			case 7:
				 {
					cout << "**********Function For to UpDate Coach********** " << endl;
					cout << "For To UpDate Coach In Team 1 PRESS ->1 " << endl;
					cout << "For To UpDate Coach In Team 2 PRESS ->2 " << endl;
					int TempCo;
					cout << "Select Option : ";
					cin >> TempCo;
					if (TempCo == 1) {
						cout << "Team 1 Coach Update " << endl;
						t1obj.updateCoach();
					}
					if (TempCo == 2) {
						cout << "Team 2 Coach Update " << endl;
						t2obj.updateCoach();
					}
				}
				break;
			case 8:
				 {
					cout << "**********Function For to Display Team********** " << endl;
					cout << "For To Disply Team 1 PRESS ->1 " << endl;
					cout << "For To  DisplyTeam 2 PRESS ->2 " << endl;
					int TempDT;
					cout << "Select Option : ";
					cin >> TempDT;
					if (TempDT == 1) {
						t1obj.displayTeam();
						for (int i = 0; i < 2; i++) {
							int n = 1;
							cout << "Player Number : " << n << Player1[i]->Name << endl;
							n++;
						}
					}
					else if (TempDT == 2) {
						t2obj.displayTeam();
						for (int i = 0; i < 2; i++) {
							int n = 1;
							cout << "Player Number : " << n << Player2[i]->Name << endl;
							n++;
						}
					}
				}
				break;
			case 9:
				M1.conductMatch();
				break;
			case 10:
				M1.scheduleMatch();
				break;
			case 11:
				updateWorldRecords(M1);
				break;
			case 12:
				 {
					cout << "For To UpDate TeamRanking In Team 1 PRESS ->1 " << endl;
					cout << "For To UpDate TeamRanking In Team 2 PRESS ->2 " << endl;
					int TempTR;
					cout << "Select Option : ";
					cin >> TempTR;
					if (TempTR == 1) {
						updateTeamRanking(M1);
					}
					if (TempTR == 2) {
						updateTeamRanking(M2);
					}
				}
				break;
			case 13:
				displayUpcomingMatches(M1);
				break;
			case 14:
				displayRecentMatches(M1);
				break;
			case 15:
				cout << "Thanks for Using Our Application" << endl;
				break;
			default:
				cout << "Incorrect Choice" << endl;
			}
			system ("pause");
			system("cls");
		} while (choice != 15);
	}
	else {
		cout << "Incorrect Password " << endl;
	}
	return 0;
}