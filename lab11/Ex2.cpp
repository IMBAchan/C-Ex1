#include <iostream>

using namespace std;

struct Date{
    int hours;
    int minutes;
};

int main() {
    Date start_time;
    Date end_time;

    int start_time_in_minutes, end_time_in_minutes, duration_in_minutes;

    start:
	
    cout << "Enter hours:";
    cin >> start_time.hours;
	
    if (start_time.hours > 24){
        cout << "Entered more then 24\n";
        goto start;
    }
	
    cout << "Enter minutes:";
    cin >> start_time.minutes;
	
    if (start_time.minutes >= 60){
        cout << "Entered more then 60\n";
        goto start;
    }

    cout << "Enter hours:";
    cin >> end_time.hours;
	
    if (end_time.hours > 24){
        cout << "Entered more then 24\n";
        goto start;
    }
	
    cout << "Enter minutes:";
    cin >> end_time.minutes;
	
    if (end_time.minutes >= 60){
        cout << "Entered more then 60\n";
        goto start;
    }

    start_time_in_minutes = start_time.hours * 60 + start_time.minutes;
    end_time_in_minutes = end_time.hours * 60 + end_time.minutes;

    duration_in_minutes = end_time_in_minutes - start_time_in_minutes;

    int duration_hours = duration_in_minutes / 60;
    int duration_minutes = duration_in_minutes % 60;

    cout << "Event duration: " << duration_hours << ":" << duration_minutes << endl;
}
