#pragma once
#pragma once
#include"Teams.h"
#include<iostream>
using namespace std;

class Match : public Team {
	// attributes of class
	string team1;
	string team2;
	int Day;
	int Month;
	int Year;
	string Venue;
	string Match_type;
	string Tournament_Name;
	string Commentators;
	int No_Umpires;
	string Match_status;
	int Highest_score = 10000;
	int Most_sixes = 576;
	int Most_fours = 879;
public:
	// constructor
	Match() : Team() {
		team1 = " ";
		team2 = " ";
		Venue = " ";
		Day = 0;
		Month = 0; 
		Year= 0;
		Match_type = " ";
		Tournament_Name = " ";
		Commentators = " ";
		No_Umpires = 0;
		Match_status = " ";
	}
	// function of the class Match
	void conductMatch();
	void scheduleMatch();
	friend void updateWorldRecords(Match obj) {
		cout << "**********Function to UpDate World Recode " << endl;
		cout << "Highest Score : ";
		cin >> obj.Highest_score;
		cout << "Most Sixes : ";
		cin >> obj.Most_sixes;
		cout << "Most Fours : ";
		cin >> obj.Most_fours;
	}
	friend void updateTeamRanking(Match obj) {
		cout << "**********Function to UpDate Team Ranking********** " << endl;
		cout << "Team Ranking : ";
		cin >> obj.ranking;
	}
	friend void displayUpcomingMatches(Match obj) {
		cout << "**********Function For UpComming Matches**********" << endl;
		cout << "1) PAKISTAN VS INDIA || MONDAY " << endl;
		cout << "2) WESTEN INDIES VS SOUTHAFRICA ||TUESDAY " << endl;
		cout << "3) ZIMBAWA VS NEATHERLAND ||WEDNESDAY " << endl;
		cout << "4) CROTIA VS SOUTHAFRICA ||THURSDAY " << endl;
	}
	friend void displayRecentMatches(Match obj) {
		cout << "**********Function For Recent Matches********** " << endl;;
		cout << "1) INDIA VS BANGLADEISH || TODAY " << endl;
		cout << "2) AFGANISTAN VS KENIYA || TODAY " << endl;
	}
};