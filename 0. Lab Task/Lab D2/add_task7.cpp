#include <iostream>
using namespace std;

struct book {
    int id;
    int pages;
    float rating;
};

void input(book &b) {
    cout << "Enter book ID: ";
    cin >> b.id;
    cout << "Enter number of pages: ";
    cin >> b.pages;
    cout << "Enter rating: ";
    cin >> b.rating;
}

void printBookId(book b) {
    cout << "Book ID: " << b.id << endl;
}

int main() {
    book books[10];

    for(int i = 0; i < 10; i++) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        input(books[i]);
        cout << endl;
    }

    cout << endl;

    cout << "IDs of books with rating > 4.2 :" << endl;
    for(int i = 0; i < 10; i++) {
        if(books[i].rating > 4.2) {
            printBookId(books[i]);
        }
    }

    cout << endl;

    cout << "IDs of books with more than 300 pages :" << endl;
    for(int i = 0; i < 10; i++) {
        if(books[i].pages > 300) {
            printBookId(books[i]);
        }
    }

    return 0;
}