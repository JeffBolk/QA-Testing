#include "Verification.h"

// Jeffrey Bolk
// Verifications

string stringVerify(string word) {
	if (word != "") {
		return word;
	}
	else {
		return "UNDEFINED";
	}
}

string dateVerify(string date) {
	if (date != "") {
		return date;
	}
	else {
		return "UNDEFINED";
	}
}

int intVerify(int num) {
	if (num > 0) {
		return num;
	}
	return 0;
}