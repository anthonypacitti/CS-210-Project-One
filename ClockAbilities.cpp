#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <Windows.h>
#include "SleepNClear.h"

using namespace std;

int AddTime(int standardHour, int militaryHour, int sharedMinutes, int sharedSeconds, int selection) {
	if (selection == 1) {
		standardHour += 1;
		militaryHour += 1;
	}
	else if (selection == 2) {														/* This is the function used when a user is adding time of any sort. */
		sharedMinutes += 1;
	}
	else if (selection == 3) {
		sharedSeconds += 1;
	}
	else {
		sharedSeconds += 0;
	}
	return standardHour, militaryHour, sharedMinutes, sharedSeconds;
}

int UpdateTime(int standardHour, int militaryHour, int minutes, int seconds) {
	if (seconds > 59) {
		minutes += 1;
		seconds = 0;
	}
	if (minutes > 59) {
		standardHour += 1;
		militaryHour += 1;														/* This is the function that updates the time. */
		minutes = 0;
	}
	if (standardHour > 12) {
		standardHour = 1;
	}
	if (militaryHour > 23) {
		militaryHour = 0;
	}
	return seconds, minutes, militaryHour, standardHour;
}

int DisplayTime(int standardHour, int militaryHour, int minutes, int seconds) {				/* This function simply displays the time. */
	string meridiem;

	if (militaryHour >= 12 && militaryHour <= 23) {
		meridiem = " PM";
	}
	if (militaryHour >= 0 && militaryHour < 12) {
		meridiem = " AM";
	}

	cout << "\n\n\n\n\t*********************************\t*********************************" << endl;
	cout << "\t*\t  12-Hour Clock\t\t*\t*\t  24-Hour Clock\t\t*" << endl;
	cout << "\t*\t    " << standardHour << ":" << minutes << ":" << seconds << meridiem << "\t\t*";
	cout << "\t*\t     " << militaryHour << ":" << minutes << ":" << seconds << "\t\t*" << endl;
	cout << "\t*********************************\t*********************************" << endl;

	return standardHour, militaryHour, minutes, seconds;
}

void DisplayMenu() {

	cout << "\n\n\t*********************************" << endl;
	cout << "\t*\t1 - Add One Hour\t*" << endl;
	cout << "\t*\t2 - Add One Minute\t*" << endl;
	cout << "\t*\t3 - Add One Second\t*" << endl;
	cout << "\t*\t4 - Exit the program\t*" << endl;
	cout << "\t*********************************" << endl;
}
