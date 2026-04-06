#include <iostream>
#include <string>
using namespace std;

struct Author {
	int id;
	string name;
	friend istream& operator>>(istream& in, Author& a) {
		cout << "Author information: " << endl;
		cout << "\t+ Id: ";
		in >> a.id;
		cout << "\t+ Name: ";
		in.ignore();
		getline(in, a.name);
		return in;
	}
};

struct Book {
	int id;
	string name;
	Author author;
	friend ostream& operator<<(ostream& os, const Book& b) {
		os << "Book information: " << endl;
		os << "\t+ Id: " << b.id << endl;
		os << "\t+ Name: " << b.name << endl;
		os << "\t+ Author name: " << b.author.name << endl;
		return os;
	}
	friend istream& operator>>(istream& in, Book& b) {
		cout << "Book information: " << endl;
		cout << "\t+ Id: ";
		in >> b.id;
		cout << "\t+ Name: ";
		in.ignore();
		getline(in, b.name);
		in >> b.author;
		return in;
	}
};

struct Node {
	Book data;
	Node* next;
	void Create(Book b) {
		data = b;
		next = nullptr;
	}
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
	void AddFirst(Node* p) {
		p->next = head->next;
		head->next = p;
	}
	bool Remove(int removeId) {
		if (head == NULL) {
			cout << "no book available" << endl;
			return true;
		}
		Node* item = head;
		if (item->data.id == removeId) {
			head = item->next;
			delete item;
			return true;
		};

		while (item->next != NULL) {
			if (item->next->data.id == removeId) {
				Node* temp = item->next;
				item->next = item->next->next;
				delete temp;
				return true;
			}
			item = item->next;
		}
		return false;
	}
	bool Update(int updateId) {
		if (head == NULL) {
			cout << "no book available" << endl;
			return false;
		}
		node* item = head;
		while (item != NULL) {
			if (item->data.id == updateId)
				cin >> item->data;
			return true;

		}
		item = item->next;
	}
	return false;
};

void main()
{
	linkedList books = { NULL };
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
			books.Show();
			break;
		}
		case 2: {
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
			break;
		}
		case 6: {
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
