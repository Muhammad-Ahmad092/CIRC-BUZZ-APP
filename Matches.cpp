#include"Matches.h"

void Match::conductMatch() {
	cout << "**********Function For TO CONDUCT Matches**********" << endl;
	cout << "1) PAKISTAN VS INDIA || MONDAY " << endl;
	cout << "2) WESTEN INDIES VS SOUTHAFRICA ||TUESDAY " << endl;
	cout << "3) ZIMBAWA VS NEATHERLAND ||WEDNESDAY " << endl;
	int num;
	cout << "Enter Option to Conduct Match : ";
	cin >> num;
	if (num == 1) {
		team1 = "PAKISTAN";
		team2 = "INDIA";
		Venue = "KADAFI";
		Day = 8;
		Month = 2;
		Year = 2010;
		Match_type = "ODI";
		Tournament_Name = "PSL";
		Commentators = "WASIM";
		No_Umpires = 2;
		Match_status = "TEST";
		cout << "TEAM 1 : " << team1 << endl;
		cout << "TEAM 2 : " << team2 << endl;
		cout << "Venue : " << Venue << endl;
		cout << "Day/Month/Year : " << Day << "/" << Month << "/" << Year << endl;
		cout << "Match_type : " << Match_type << endl;
		cout << "Tournament_Name : " << Tournament_Name << endl;
		cout << "Commentators : " << Commentators << endl;
		cout << "No_Umpires : " << No_Umpires << endl;
		cout << "Match_status : " << Match_status << endl;
	}
	if (num == 2) {
		team1 = "WESTEN INDIES";
		team2 = " SOUTHAFRIKA";
		Venue = "KADAFI";
		Day =11;
		Month = 11; 
		Year = 2011;
		Match_type = "ODI";
		Tournament_Name = "PSL";
		Commentators = "RAJA";
		No_Umpires = 6;
		Match_status = "TEST";
		cout << "TEAM 1 : " << team1 << endl;
		cout << "TEAM 2 : " << team2 << endl;
		cout << "Venue : " << Venue << endl;
		cout << "Day/Month/Year : " << Day << "/" << Month << "/" << Year << endl;
		cout << "Match_type : " << Match_type << endl;
		cout << "Tournament_Name : " << Tournament_Name << endl;
		cout << "Commentators : " << Commentators << endl;
		cout << "No_Umpires : " << No_Umpires << endl;
		cout << "Match_status : " << Match_status << endl;
	}
	if (num == 3) {
		team1 = "ZIMBAWA";
		team2 = " =NETHERLAND";
		Venue = "KADAFI ";
		Day = 3;
		Month = 4;
		Year = 2020;
		Match_type = "T20";
		Tournament_Name = "IPL";
		Commentators = "IMAD";
		No_Umpires = 2;
		Match_status = "TEST";
		cout << "TEAM 1 : " << team1 << endl;
		cout << "TEAM 2 : " << team2 << endl;
		cout << "Venue : " << Venue << endl;
		cout << "Day/Month/Year : " << Day << "/" << Month << "/" << Year << endl;
		cout << "Match_type : " << Match_type << endl;
		cout << "Tournament_Name : " << Tournament_Name << endl;
		cout << "Commentators : " << Commentators << endl;
		cout << "No_Umpires : " << No_Umpires << endl;
		cout << "Match_status : " << Match_status << endl;
	}
	else {
		cout << "YOU Enter The Wrong Choice " << endl;;
	}
}
void Match::scheduleMatch() {
	cout << "**********Function For TO Schedule Matches**********" << endl;
	cout << "ENTER TEAM 1 NAME : ";
	cin >> team1;
	cout << "ENTER TEAM 2  NAME: ";
	cin >> team2;
	cout << "Enter Date: ";
	cout << "Enter Day ";
	cin >> Day;
	cout << "Enter Month  : ";
	cin >> Month;
	cout << "Enter Year : ";
	cin >> Year;
	cout << "Enter Venue : ";
	cin >> Venue;
	cout << "Enter Match Type : ";
	cin >> Match_type;
	cout << "Enter Tournament Name : ";
	cin >> Tournament_Name;
	cout << "Enter name of Commentator : ";
	cin >> Commentators;
	cout << "Enter NO Of  Empires : ";
	cin >> No_Umpires;
	cout << "Enter Match Status : ";
	cin >> Match_status;
}
