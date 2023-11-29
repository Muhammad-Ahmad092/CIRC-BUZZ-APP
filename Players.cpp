#include"Players.h"


void Player::information() {
	cout << "Enter Player Name: ";
	cin >> Name;
	cout << "Enter Shirt Number : ";
	cin >> shirtNo;
	cout << "Average of Player : ";
	cin >> average;
	cout << "ICC-ranking of Player : ";
	cin >> ICC_ranking;
	cout << "Total Runs of Player : ";
	cin >> totalRuns;
	cout << "Enter Match played : ";
	cin >> matchPlayed;
	cout << "Enter Total Wickets : ";
	cin >> totalWickets;
}
void Player::remove() {
	cout << Name << " Remove from team \n";
	Name = " ";
	shirtNo = 0;
	average = 0;
	ICC_ranking = " ";
	totalRuns = 0;
	matchPlayed = 0;
	totalWickets = 0;
}
void Player::search() {
	cout << "Name of player : " << Name << endl;

	cout << "Shirt_number : " << shirtNo << endl; 

	cout << "Average ]: " << average << endl;

	cout << "Matches played  : " << matchPlayed << endl;

	cout << "Total Wickets : " << totalWickets << endl;

	cout << "ICC-ranking : " << ICC_ranking << endl;

	cout << "Total-runs : " << totalRuns << endl;
	
}
void Player::update() {
	cout << "Update Shirt Number : ";
	cin >> shirtNo;

	cout << "Update Average : ";
	cin >> average;

	cout << "Update ICC-ranking : ";
	cin >> ICC_ranking;

	cout << "Update Total Wickets: ";
	cin >> totalWickets;

	cout << "Update Total-runs : ";
	cin >> totalRuns;

	cout << "Update matches played : ";
	cin >> matchPlayed;
}
