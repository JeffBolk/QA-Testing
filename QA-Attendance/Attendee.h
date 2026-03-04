#pragma once
#include <iostream>

// Jeffrey Bolk
// Attendee Header

using namespace std;

static int attendeeIdList[10];
static int attendeeLength = 0;


class Attendee
{
public:
	Attendee();
	Attendee(int, string, string);

	int getID() { return id; }
	string getName() { return name; }
	string getEmail() { return email; }
	bool getChecked() { return checked; }

	void checkIn() { checked=true; }

	void setId(int iId) { 
		id = iId; 
	}
	void setName(string iName) { 
		name = iName; 
	}
	void setEmail(string iEmail) {
		email = iEmail;
	}
	void setCheck(bool iCheck) {
		checked = iCheck;
	}
private:
	int id;
	string name;
	string email;
	bool checked;
};

