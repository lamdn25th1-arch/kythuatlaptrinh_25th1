// buoi5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Author {
    int id;
    string name;
};

struct Book {
    int id;
    string name;
    Author author;
	friend ostream& operator<< (ostream& os, const Book& b) {
		os << "Book information: " << endl;
		os << "\t+ Id: " << b.id << endl;
		os << "\t+ Name: " << b.name << endl;
		os << "\t+ Author name: " << b.author.name << endl;
		return os;
	}
};

struct Node {
    Book data;
    Node* next;
};

struct linkedList {
    Node* head;
	void Show() {
		if (head == NULL) {
			cout << "No book available" << endl;
			return;
		}
		Node* item = head;
		while (item != NULL) {
			cout << item->data;
			item = item->next;
		}
	}
};

int main()
{
    linkedList book = { NULL };
	do {
		system("cls");
		cout << "-----------BOOK MANAGEMENT---------" << endl;
		cout << "1. show all books" << endl;
		cout << "2. Add a book" << endl;
		cout << "3. Delete a book" << endl;
		cout << "4. Update a book " << endl;
		cout << "5. find a book " << endl;
		cout << "6. export to file" << endl;
		cout << "7. inport from file" << endl;
		cout << "0. exit" << endl;
		cout << "------------------------------------------" << endl;
		cout << "enter choice: ";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			book.Show();
			break;
		}
		case 2: {
			break;

		}
		case 3: {
			break;
		}
		case 4: {
			break;

		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		}
		default: {
			cout << "Invalid choice, try again" << endl;
			break;
		}
		}
		system("pause");
		cout << "Press any key to continue..";
    } while (true);
}

