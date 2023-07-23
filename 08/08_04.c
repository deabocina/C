#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Define a structure for time.Write a function that takes two arguments representing time and returns the time difference.
// Display the difference in the format hh:mm:ss.

struct Time {
    int hours, minutes, seconds;
};

void timeDifference(struct Time start, struct Time end, struct Time* diff) {
    if (end.seconds < start.seconds) {
        end.seconds += 60;
        --end.minutes;
    }
    diff->seconds = end.seconds - start.seconds;

    if (end.minutes < start.minutes) {
        end.minutes += 60;
        --end.hours;
    }
    diff->minutes = end.minutes - start.minutes;

    diff->hours = end.hours - start.hours;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter the start time in hours, minutes, and seconds:\n");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time in hours, minutes, and seconds:\n");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    timeDifference(startTime, endTime, &difference);
    printf("\nTime difference: %d:%d:%d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}