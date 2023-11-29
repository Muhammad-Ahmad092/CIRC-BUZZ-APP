#pragma once

#include"Players.h"
#include<iostream>
using namespace std;

class Team : public Player {
	// attributes of class
	string team_Name;
	int noOfPlayers;
	int totalMatchesWon;
	int totalMatchesLost;
	string teamCaptain;
	string teamCoach;
public:
	string ranking;
	string AdminUsername;
	string AdminPassword;
	//constructor
	Team() : Player() {
		AdminUsername = " ";
		AdminPassword = " ";
		team_Name = " ";
		teamCaptain = " ";
		ranking = " ";
		noOfPlayers = 0;
		totalMatchesLost = 0;
		totalMatchesWon = 0;
		
		teamCoach = " ";
		
	}
	// function of the class team
	void add_Player();
	void remove_Player();
	void search_Player();
	void update_Player();
	void displayMatches();
	void updateCaptain();
	void updateCoach();
	void displayTeam();
	void get_information();
	void setUsername(string Admin_Username) 
	{
		this->AdminUsername = Admin_Username;
	}
	string getUsername() {
		return AdminUsername;
	}
	void setAdmin_Password(string Admin_Password) 
	{
		this->AdminPassword = Admin_Password;
	}
	string getAdmin_Password() {
		return AdminPassword;
	}
};
