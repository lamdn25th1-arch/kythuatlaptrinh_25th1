// buoi7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "LinkedList.h"

int main()
{
	linkedList books = { NULL };
	do {
		system("cls");
		cout << "-----------BOOK MANAGEMENT---------" << endl;
		cout << "1. show all Account" << endl;
		cout << "2. Add a Account" << endl;
		cout << "3. Delete a Account" << endl;
		cout << "4. Update a Account " << endl;
		cout << "5. find a Account " << endl;
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
			books.Show();
			break;
		}
		case 2: {
			Book b;
			cin >> b;
			Node* newNode = new Node;
			newNode->Create(b);
			books.AddFirst(newNode);
			break;

		}
		case 3: {
			int removeId;
			cout << "enter book's id to remove:  ";
			cin >> removeId;
			bool res = books.Remove(removeId);
			if (res)
				cout << "remove book successfully" << endl;
			else
				cout << "Invalid book id" << endl;
			break;
		}
		case 4: {
			int updateId;
			cout << "enter book id to update: ";
			cin >> updateId;
			bool res = books.Update(updateId);
			if (res)
				cout << "enter book successfully" << endl;
			else
				cout << "invalid book id" << endl;
			break;

		}
		case 5: {
			string bookName;
			cout << "enter a books name to find: ";
			cin.ignore();
			getline(cin, bookName);
			Book* res = books.Find(bookName);
			if (res != NULL) {
				cout << *res;
			}
			else {
				cout << "no books with name: " << bookName << endl;
			}
			break;
		}
		case 6: {
			books.Export("25TH1.dla");
			cout << "Exported successfully" << endl;
			break;
		}
		case 0: {
			return;
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

}
