#include "Attendee.h"
#include "Verification.h"
#include <string>

// Jeffrey Bolk
// Attendee Class

Attendee::Attendee() {
	
}
Attendee::Attendee(int iId, string iName, string iEmail) {
	setId(iId);
	setName(iName);
	setEmail(iEmail);
	setCheck(false);
}
