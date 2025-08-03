#include <stdio.h>
#include <string.h>

struct book {
    char title[100];
    char author[50];
    int publishyear;
};

struct library {
    char name[100];
    struct book books[5];
};

int main() {
    struct library citylibrary;
    
    strcpy(citylibrary.name, "City Library");

    strcpy(citylibrary.books[0].title, "Halo: The Silent Storm");
    strcpy(citylibrary.books[0].author, "Troy Denning");
    citylibrary.books[0].publishyear = 2018;

    strcpy(citylibrary.books[1].title, "Halo: Shadow of Intent");
    strcpy(citylibrary.books[1].author, "Joseph Staten");
    citylibrary.books[1].publishyear = 2015;

    printf("Library Name: %s \n", citylibrary.name);
    
    for(int i = 0; i < 2; i++) {
        printf("Book: %d \n", i+1);
        printf("Title: %s \n", citylibrary.books[i].title);
        printf("Author: %s \n", citylibrary.books[i].author);
        printf("Year Published: %d \n", citylibrary.books[i].publishyear);
    }
    
    return 0;
}