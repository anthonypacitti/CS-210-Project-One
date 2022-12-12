#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <Windows.h>
#include "ClockAbilities.h"

using namespace std;

/* Two different functions used 
to allow the clock to clear every
second and for the clock to sleep 
if no input is given. I learned about 
some std functions through websites like:
https://www.geeksforgeeks.org/why-it-is-important-to-write-using-namespace-std-in-cpp-program/ */

void Sleep() {

	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void ClearScreen() {

	std::system("clear");
	std::system("cls");
}
