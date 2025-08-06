#include <stdio.h>

struct address {
    int house_no;
    int block;
    char city[20];
    char state[20];
};

void print(struct address add);

int main() {
    struct address add[5];
    
    printf("Enter Info for Person 1: \n");
    scanf("%d", &add[0].house_no);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    printf("Enter Info for Person 2: \n");
    scanf("%d", &add[1].house_no);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    printf("Enter Info for Person 3: \n");
    scanf("%d", &add[2].house_no);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);

    printf("Enter Info for Person 4: \n");
    scanf("%d", &add[3].house_no);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    printf("Enter Info for Person 5: \n");
    scanf("%d", &add[4].house_no);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    print(add[0]);
    print(add[1]);
    print(add[2]);
    print(add[3]);
    print(add[4]);

    return 0;
}

void print(struct address add) {
    printf("Address is: %d, %d, %s, %s \n", add.house_no, add.block, add.city, add.state);
}