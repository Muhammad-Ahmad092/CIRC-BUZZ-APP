#include"Teams.h"

void Team::add_Player() {
	information();
}
void Team::remove_Player() {
	remove();
}
void Team::search_Player() {
	search();
}
void Team::update_Player() {
	update();
}
void Team::displayMatches() {
	cout << "**********MATCHES**********" << endl;
}
void Team::updateCaptain() {
	cout << "**********UPDATE CAPTAIN**********" << endl;
	cout << "Enter Captian Name :";
	cin >> teamCaptain;
}
void Team::updateCoach() {
	cout << "**********UPDATE COACH**********" << endl;
	cout << "Enter Coach Name :";
	cin >> teamCoach;
}
void Team::get_information() {
	cout << "Enter Team Name : ";
	cin >> team_Name;

	cout << "Enter Captian Name :";
	cin >> teamCaptain;

	cout << "Enter Coach Name :";
	cin >> teamCoach;

	cout << "Team Total Matches Win : ";
	cin >> totalMatchesWon;

	cout << "Team TotalMatches Lose : ";
	cin >> totalMatchesLost;

	cout << "Enter Team Ranking: ";
	cin >> ranking;

}
void Team::displayTeam() {
	cout << "Team Name : " << team_Name << endl;

	cout << "Captian Name :" << teamCaptain << endl;

	cout << "Coach Name : " << teamCoach << endl;

	cout << "Team Total Matches Win : " << totalMatchesWon << endl;

	cout << "Team TotalMatches Lose : " << totalMatchesLost << endl;

	cout << "Team Ranking: " << ranking << endl;
	
}
