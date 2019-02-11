#include<iostream>
#include<string>
#include"l181213_q1.h"
using namespace std;
int main()
{
 cricketTeam(string teamname, int No_of_members);
	cricketTeam c1;
	int mem;
	string cname;
	cout<<"enter no. of team memeber";
	cin>>mem;
	string nam;
	string name;
	int ra;
	cout<<"enter team name";
getline(cin,name);
cricketTeam(name,mem);
cout<<"enter teammember";
cout<<"enter rank";
cin>>ra;
cout<<"enter teamname";
cin>>nam;
	cout<<"enter captain";
	getline(cin,cname);
	 c1.setcaptain( cname);
	 c1.getcaptain();
	c1.setrank(ra);
	c1.getrank();
	c1.setteamname( nam );
	string getteamname();
	void setno_of_members(int memb);
	int getno_of_members();
	c1.inputScore(270);
	c1.inputScore(289);
	c1.inputScore(190);
	c1.inputScore(170);
	c1.inputScore(250);
	c1.inputScore(150);
	c1.inputScore(119);
	c1.inputScore(200);
	c1.inputScore(225);
	c1.inputScore(220);
	c1.inputTeamMember("Noman");
    c1.inputTeamMember("Qasim");
    c1.inputTeamMember("Bilal");
    c1.inputTeamMember("Haider");
system("pause");
return 0;
}


