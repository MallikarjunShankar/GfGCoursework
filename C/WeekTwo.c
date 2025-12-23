#include <stdio.h>
#include <string.h>

#define MAX 100

char names[MAX][50];
char phones[MAX][15];
int count = 0;

int searchName(int i, char *name) {
    if (i == count) return -1;
    if (strcmp(names[i], name) == 0) return i;
    return searchName(i+1, name);
}

void addContact() {
    if (count >= MAX) {
        printf("Book full!\n");
        return;
    }
    printf("Name: ");
    scanf("%s", names[count]);
    printf("Phone: ");
    scanf("%s", phones[count]);
    count++;
    printf("Added!\n");
}

void display() {
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s\n", i+1, names[i], phones[i]);
    }
}

void searchContact() {
    char query[50];
    printf("Enter name: ");
    scanf("%s", query);
    int idx = searchName(0, query);
    if (idx != -1) {
        printf("Found: %s - %s\n", names[idx], phones[idx]);
    } else {
        printf("Not found!\n");
    }
}

void deleteContact() {
    char query[50];
    printf("Enter name to delete: ");
    scanf("%s", query);
    int idx = searchName(0, query);
    if (idx != -1) {
        for (int i = idx; i < count-1; i++) {
            strcpy(names[i], names[i+1]);
            strcpy(phones[i], phones[i+1]);
        }
        count--;
        printf("Deleted!\n");
    } else {
        printf("Not found!\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1.Add 2.Display 3.Search 4.Delete 5.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) addContact();
        else if (choice == 2) display();
        else if (choice == 3) searchContact();
        else if (choice == 4) deleteContact();
        else if (choice == 5) return 0;
    }
}
