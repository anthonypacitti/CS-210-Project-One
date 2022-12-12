/* Anthony Pacitti */
/* 7 November 2022 */
/* CS-210 */
/* Project One */

#include <iostream>
#include <iomanip>
#include <chrono>									/* I included different libraries */
#include <thread>									/* I found online to help run the */
#include <cstdlib>									/* various modules and program better. */
#include <string>
#include <conio.h>
#include <Windows.h>
#include "ClockAbilities.h"
#include "SleepNClear.h"

using namespace std;

int main() {
	char userInput = '0';
	int standardHour = 6;
	int militaryHour = 18;
	int sharedMinutes = 22;
	int sharedSeconds = 35;

	while (userInput != 4) {
		DisplayTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
		DisplayMenu();
		cout << "Edit the clock using the inputs above.";

		if (_kbhit()) {
			
			if (_getch() == '1') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 1);					/* The main program that prompts the user to enter an input */
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '2') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 2);
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '3') {
				AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 3);
				UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			}
			if (_getch() == '4') {
				break;
			}
		}
		else {
			AddTime(standardHour, militaryHour, sharedMinutes, sharedSeconds, 3);
			UpdateTime(standardHour, militaryHour, sharedMinutes, sharedSeconds);
			Sleep();
			ClearScreen();
		}
	}
 }
