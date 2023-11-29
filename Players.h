#pragma once
#include<iostream>
using namespace std;


class Player {
private:
	int shirtNo;
	int average;
	int totalRuns;
	int matchPlayed;
	int totalWickets;
public:
	string ICC_ranking;
	string Name;
	Player() {
		Name = " ";
		shirtNo = 0;
		average = 0;
		ICC_ranking = " ";
		totalRuns = 0;
		matchPlayed = 0;
		totalWickets = 0;
	}
	// function of class player
	void information();
	void remove();
	void search();
	void update();
	virtual void add_Player() = 0 ;
	virtual void remove_Player() = 0 ;
	virtual void search_Player() = 0 ;
	virtual void update_Player() = 0 ;
};