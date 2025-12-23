#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    int id;
    char name[50];
    int age;
    char gender[10];
    int classNum;
    struct Student* next;
} Student;

Student* head = NULL;

void addStudent() {
    Student* n = (Student*)malloc(sizeof(Student));
    printf("ID: "); scanf("%d", &n->id);
    printf("Name: "); scanf(" %[^\n]s", n->name);
    printf("Age: "); scanf("%d", &n->age);
    printf("Gender: "); scanf("%s", n->gender);
    printf("Class: "); scanf("%d", &n->classNum);
    n->next = head;
    head = n;
    printf("> Added.\n");
}

void deleteStudent() {
    int id;
    printf("ID to delete: "); scanf("%d", &id);
    Student *t = head, *p = NULL;
    if (t && t->id == id) {
        head = t->next; free(t);
        printf("> Deleted.\n"); return;
    }
    while (t && t->id != id) { p = t; t = t->next; }
    if (!t) { printf("> Not found.\n"); return; }
    p->next = t->next;
    free(t);
    printf("> Deleted.\n");
}

void searchStudent() {
    int id;
    printf("ID to search: "); scanf("%d", &id);
    Student* t = head;
    while (t) {
        if (t->id == id) {
            printf("[%d] %s | %d | %s | Cls: %d\n", t->id, t->name, t->age, t->gender, t->classNum);
            return;
        }
        t = t->next;
    }
    printf("> Not found.\n");
}

void displayByClass() {
    int c, f = 0;
    printf("Class: "); scanf("%d", &c);
    Student* t = head;
    while (t) {
        if (t->classNum == c) {
            printf("[%d] %s | %dyrs | %s\n", t->id, t->name, t->age, t->gender);
            f = 1;
        }
        t = t->next;
    }
    if (!f) printf("> Empty.\n");
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Add 2.Del 3.Src 4.Cls 5.Exit\n: ");
        scanf("%d", &ch);
        if (ch == 1) addStudent();
        else if (ch == 2) deleteStudent();
        else if (ch == 3) searchStudent();
        else if (ch == 4) displayByClass();
        else if (ch == 5) break;
        else printf("!\n");
    }
    return 0;
}
