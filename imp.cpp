#include<fstream>
#include "Header.h"
#include <iostream>
using namespace std;
cricketTeam::cricketTeam()
{
	string * membernames=nullptr;
int no_of_members=0;
char *teamName=nullptr;
int Scoreinlast10matches[10]={0};
int Rank=0;
string captain;

}
void cricketTeam::setcaptain(string name)
{
	captain=name;
}
string cricketTeam::getcaptain()
{
return captain;
}
void cricketTeam::setrank(int r)
{
Rank=r;
}
int cricketTeam::getrank()
{
return Rank;
}
void cricketTeam:: setteamname(char *nam )
{
	teamName=nam;
}
char *cricketTeam::getteamname()
{
return teamName;
}
void cricketTeam:: setno_of_members(int memb)
{
	no_of_members=memb;
}
	int cricketTeam::getno_of_members()
	{
	return no_of_members;
	}
cricketTeam::cricketTeam(string teamname, int No_of_members)
	{
		int i=1;
		while(teamname[i]!='\0')
		{
		i++;
		}
		teamName=new char[i-1];
		for(int j=0;j<=i;j++)
		{
		teamName[j]=teamname[j];
		}
		if(No_of_members>=0)
		{
		no_of_members=No_of_members;
		}
		else
		{
			no_of_members=0;
		}
	}
void cricketTeam:: inputTeamMember(string name)
{
	membernames=new string[No_of_member];
	int i=0;
	while(i<No_of_members)
	{
		i++
	
if(i<No_of_members)
{
	membernames[i]=name;
}
else
cout<<"not enough space";
}
}
void cricketTeam::inputScore(int score)
{
	
	int i=0;
	for(;Scoreinlast10matches[i]!=0;i++);
	if(i<10)
	{
		Scoreinlast10matches[i]=score;
	}
else
for(int i=0;i<10;i++)
{
	Scoreinlast10matches[i]=Scoreinlast10matches[i+1];
Scoreinlast10matches[10]=score;
	}
}
int cricketTeam::avgscore(int avg)
{
	for(int i=0;i<No_of_members;i++)
	{
	
	avg=avg+Scoreinlast10matches[i]
}
avg=avg/No_of_members;
return avg;
}
void cricketTeam::printinfo()
{
	cout<<"team name"<<teamName<<endl;
	cout<<"no. of member"<<No_of_members<<endl;
	cout<<"rank"<<Rank<<endl;
cout<<"captain name"<<captain;
	for(int i=0;i<No_of_members;i++)
	{
		cout<<membernames[i]<<endl;
		
	}
	
	int i=0;
	for(;Scoreinlast10matches[i]!=0;i++)
	{
		cout<<Scoreinlast10matches[i]<<endl;
	}
	
}
