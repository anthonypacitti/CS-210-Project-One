/* Header file to declare functions
so the clock can have its different functions. */

int AddTime(int standardHour, int militaryHour, int sharedMinutes, int sharedSeconds, int selection);
int UpdateTime(int standardHour, int militaryHour, int minutes, int seconds);
int DisplayTime(int standardHour, int militaryHour, int minutes, int seconds);
void DisplayMenu();
