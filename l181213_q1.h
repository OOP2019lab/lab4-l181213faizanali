#include <string>
using namespace std;
class cricketTeam
{
private:
	string * membernames;
int no_of_members;
char *teamName;
int Scoreinlast10matches[10];
int Rank;
string captain;

public:
	cricketTeam(string teamname, int No_of_members);
	cricketTeam(string test);
	cricketTeam();
	void inputTeamMember(string name);
	void inputScore(int score);
	void setcaptain(string name);
	string getcaptain();
	void setrank(int r);
	int getrank();
	void setteamname(char*nam );
	char *getteamname();
	void setno_of_members(int memb);
	int getno_of_members();
	int avgscore(int avg);
	void printinfo();

};
