#pragma once
#include "Attendee.h"
#include <iostream>

// Jeffrey Bolk
// Event Header

using namespace std;

static int idList[10];
static int length = 0;

class Event
{
public:
	Event();
	Event(int, string, string);

	string getName() { return name; }
	string getDate() { return date; }
	int getID() {return id;}

	void registerAttendee(int id, string name, string email);

	void setId(int iId) { id = iId; }
	void setName(string iName) { name = iName; }
	void setDate(string iDate) { date = iDate; }

	Attendee attendeeList[10];
	int attendeeLength = 0;
	int checkedAttendee = 0;

	// Private members
private:
	int id;
	string name;
	string date;
};

