#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Library {
private:
    vector<string> books;

public:
    void addBook(string title) {
        books.push_back(title);
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books in the library.\n";
        } else {
            cout << "Library Catalog:\n";
            cout << "----------------\n";
            for (const string& book : books) {
                cout << book << "\n";
            }
            cout << "----------------\n";
        }
    }
};

int main() {
    Library library;

    int choice;
    string title;

    do {
        cout << "\nLibrary Management System\n";
        cout << "-------------------------\n";
        cout << "1. Add a Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the title of the book: ";
                cin.ignore();
                getline(cin, title);
                library.addBook(title);
                cout << "Book added successfully.\n";
                break;
            case 2:
                library.displayBooks();
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
