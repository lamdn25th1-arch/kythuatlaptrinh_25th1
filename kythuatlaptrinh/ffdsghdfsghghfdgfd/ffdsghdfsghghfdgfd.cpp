

#include <iostream>
using namespace std;
#define MAX 100

struct Book {
	int id;
	char name[50];
	double price;
	friend istream& operator>>(istream& in, Book& b) {
		cout << "Author information: " << endl;
		cout << "\t+ Id: ";
		in >> b.id;
		cout << "\t+ Name: ";
		cin.ignore();
		in.getline(b. name, 50);
		cout << "\t+ Price: ";
		in >> b.price;
		return in;
	}
	friend ostream& operator<<(ostream& out, Book& b) {
		out << "\t+ Id: " << b.id << endl;
		out << "\t+ Name: " << b.name << endl;
		out << "\t+ Price: " << b.price << endl;
		return out;
	}
};

#define MAX 100
int nBook = 0;
Book books[MAX];

void AddBook(Book b) {
	if (nBook >= MAX) {
		cout << "out of storeage" << endl;
		return;
	}
	books[nBook++] = b;
}

void Show() {
	for (int i = 0;i < nBook; i++) {
		cout << books[i];
	}
}

void Sort() {
	for (int i = 0; i < nBook - 1; i++) {
		for (int j = i + 1; i < nBook; j++) {
			if (books[j].price > books[i].price) {
				Book temp = books[i];
				books[i] = books[j];
				books[j] = temp;
			}
		}
	}
}

int main()
{
	do {
		system("cls");
		cout << "-----------BOOK MANAGEMENT---------" << endl;
		cout << "1. Add a book" << endl;
		cout << "2. Show a book" << endl;
		cout << "3. Sort a book " << endl;
		cout << "4. find a book " << endl;
		cout << "0. exit" << endl;
		cout << "------------------------------------------" << endl;
		cout << "choice: ";
		int choose;
		cin >> choose;
		switch (choose) {
		case 1: {
			Book b;
			cin >> b;
			AddBook(b);
			break;

		}
		case 2: {
			Show();
			break;

		}
		case 3: {
			Sort();
			sorted = true;
			break;
		}
		case 4: {
			break;

		}
		case 0: 
			return 0;
		default: {
			cout << "Invalid choice, try again" << endl;
			break;
		}
		}
		system("pause");
		cout << "Press any key to continue..";
	} while (true);
		
	
}
