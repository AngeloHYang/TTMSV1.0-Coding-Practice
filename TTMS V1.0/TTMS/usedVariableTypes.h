#pragma once
struct movie
// A movie cannot be played once more if it's over endDay
{
	char name[1000];
	int price;
	long long int ID;
	long long int startDay;
	long long int endDay;
	struct movie* next;
};

struct studio
{
	long long int ID;
	int lines;
	int columns;
	long long int moviePlayingID; // -1 stands for no movie's playing
	struct studio* next;
};

struct ticketHistory
{
	long long int ticketID;
	long long int movieID;
	long long int shouldWatchDay;
	long long int studioID;
	int whichLine;
	int whichColumn;
	int status; // 0 for not sold, 1 for sold(watched), 2 for unable to watch
	

	struct ticketHistory* next;
};

struct brokenSeatHistory
{
	long long int studioID;
	int whichLine;
	int whichColumn;
	long long int startDay;
	long long int endDay;

	struct brokenSeatHistory* next;
};

struct user
{
	char username[1000];
	char password[1000];

	// 0 for God, 1 for admin, 2 for manager, 3 for ticketSeller
	int userGroup;

	struct user* next;
};


// Global variables

extern struct user* userStart; // The start of users.

extern int today;

extern struct movie* movieStart;

extern long long int movieIDCounter;

extern long long int studioIDCounter;

extern struct studio* studioStart;

extern struct brokenSeatHistory* brokenSeatHistoryStart;

extern long long int ticketIDCounter;

extern struct ticketHistory* ticketHistoryStart;