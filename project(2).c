#include <stdio.h>

int id[50], issued[50];
char name[50][30];
int count = 0;

void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &id[count]);

    printf("Enter Book Name: ");
    scanf("%29s", name[count]);

    issued[count] = 0;
    count++;

    printf("Book Added Successfully!\n");
}

void displayBooks() {
    int i;

    for (i = 0; i < count; i++) {
        printf("\nBook ID: %d", id[i]);
        printf("\nBook Name: %s", name[i]);
        printf("\nStatus: %s\n",
        issued[i] ? "Issued" : "Available");
    }
}

void searchBook() {
    int key, i;

    printf("Enter Book ID: ");
    scanf("%d", &key);

    for (i = 0; i < count; i++) {
        if (id[i] == key) {
            printf("Book Found: %s\n", name[i]);
            return;
        }
    }

    printf("Book Not Found!\n");
}

void issueBook() {
    int key, i;

    printf("Enter Book ID: ");
    scanf("%d", &key);

    for (i = 0; i < count; i++) {
        if (id[i] == key && issued[i] == 0) {
            issued[i] = 1;
            printf("Book Issued Successfully!\n");
            return;
        }
    }

    printf("Book Not Available!\n");
}

void returnBook() {
    int key, i;

    printf("Enter Book ID: ");
    scanf("%d", &key);

    for (i = 0; i < count; i++) {
        if (id[i] == key && issued[i] == 1) {
            issued[i] = 0;
            printf("Book Returned Successfully!\n");
            return;
        }
    }

    printf("Invalid Book ID or Book Already Available!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== LIBRARY MANAGEMENT =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Count Books\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6:
                printf("Total Books: %d\n", count);
                break;
            case 7:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}

OUTPUT:

       ===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 1

Enter Book ID: 101
Enter Book Name: Python
Book Added Successfully!

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 1

Enter Book ID: 102
Enter Book Name: Cprogram
Book Added Successfully!

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 2

Book ID: 101
Book Name: Python
Status: Available

Book ID: 102
Book Name: Cprogram
Status: Available

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 3

Enter Book ID: 101
Book Found: Python

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 4

Enter Book ID: 101
Book Issued Successfully!

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 2

Book ID: 101
Book Name: Python
Status: Issued

Book ID: 102
Book Name: Cprogram
Status: Available

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 5

Enter Book ID: 101
Book Returned Successfully!

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 6

Total Books: 2

===== LIBRARY MANAGEMENT =====
1. Add Book
2. Display Books
3. Search Book
4. Issue Book
5. Return Book
6. Count Books
7. Exit
Enter Choice: 7

Thank You!