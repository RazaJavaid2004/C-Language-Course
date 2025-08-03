#include <stdio.h>
#include <time.h>

int main() {
    // Using time() to get the current calendar time
    time_t current_time;
    time(&current_time);
    printf("Current time using time(): %s", ctime(&current_time));
    
    // Using difftime() to compute the difference between two times
    time_t start_time, end_time;
    start_time = time(NULL);
    // Simulating some process by sleeping for 3 seconds
    sleep(3);
    end_time = time(NULL);
    double difference = difftime(end_time, start_time);
    printf("Difference in seconds using difftime(): %.f seconds\n", difference);
    
    // Using clock() to get processor time used by the program
    clock_t begin = clock();
    // Simulating some process by sleeping for 2 seconds
    sleep(2);
    clock_t end = clock();
    double cpu_time_used = ((double) (end - begin)) / CLOCKS_PER_SEC;
    printf("CPU time used using clock(): %f seconds\n", cpu_time_used);
    
    // Using asctime() to convert calendar time to string
    struct tm *timeinfo;
    timeinfo = localtime(&current_time);
    printf("Current local time using asctime(): %s", asctime(timeinfo));

    // Using gmtime() to convert to UTC
    timeinfo = gmtime(&current_time);
    printf("Current UTC time using gmtime(): %s", asctime(timeinfo));
    
    // Using mktime() to convert struct tm to time_t
    struct tm custom_time = {0};
    custom_time.tm_year = 2023 - 1900;  // Year since 1900
    custom_time.tm_mon = 11 - 1;        // Month (0-11)
    custom_time.tm_mday = 15;           // Day of the month
    custom_time.tm_hour = 12;
    custom_time.tm_min = 34;
    custom_time.tm_sec = 56;
    time_t custom_time_t = mktime(&custom_time);
    printf("Custom time using mktime(): %s", ctime(&custom_time_t));
    
    // Using strftime() to format the time
    char buffer[80];
    strftime(buffer, 80, "Formatted current time: %Y-%m-%d %H:%M:%S\n", localtime(&current_time));
    printf("%s", buffer);

    return 0;
}

/*
time():

Retrieves the current calendar time.

Used ctime() to convert time_t to a readable string.

difftime():

Calculates the difference between two time_t values.

clock():

Retrieves the processor time used by the program.

Demonstrates how to measure CPU time used.

asctime():

Converts a struct tm to a string representation.

gmtime():

Converts time_t to struct tm in UTC.

localtime():

Converts time_t to struct tm in local time.

mktime():

Converts struct tm to time_t.

strftime():

Formats the time as a string according to the provided format.
*/