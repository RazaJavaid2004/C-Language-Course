#include <stdio.h>

int main() {
    int PEOPLE_NUMBER = 25;
    int SHEETS_PER_REAM = 500;
    int EXTRA_COPIES = 5;
    int REPORT_PAGES = 140;

    int totalCopies = PEOPLE_NUMBER + EXTRA_COPIES;
    int totalPages = totalCopies * REPORT_PAGES;
    int reamsNeeded = totalPages / SHEETS_PER_REAM;

    printf("Reams needed: %d\n", reamsNeeded);

    return 0;
}