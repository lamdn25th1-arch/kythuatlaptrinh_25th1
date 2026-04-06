// buoi2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct person {
	int id;
	string name;
	friend ostream& operator << (ostream& os, const person& p) {
		os << "\t+ id: " << p.id;
		os << "\t+ name: " << p.name;
	}
};
struct node {
	person data;
	node* next;

};
struct linkedlist {
	node* head;
};



int main()
{
	linkedlist list = { NULL };
	do {
		system("cls");
		cout << "--------HUMAN RESOURE--------" << endl;
		cout << "1. view person list" << endl;
		cout << "2. add a person" << endl;
		cout << "3. remove a person" << endl;
		cout << "4. find a person by name" << endl;
		cout << "5. export to file" << endl;
		cout << "6. inport from file" << endl;
		cout << "0. exit" << endl;
		cout << "-----------------------------" << endl;
		cout << "your command";
		int cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 1: {
			 break;
		}
		case 2: {
			 break;

		}
		case 3: {
			int id;
			cout << "input id to remove: ";
			cin >> id;
			 break;
		}
		case 4: {
			string name;
			cout << "input name to find: ";
			cin.ignore();
			getline(cin, name);
			bool res = false;
			if (res) {
				cout << "found person with name" << name << endl;
			}
			else
				cout << "person isn't existed" << endl;
			break;

		}
		case 5: {
			cout << "export successfully" << endl;
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		}
		default:
			cout << "your commnad isn't found, try agian....." << endl;
			break;
		}
		cout << "press enter to continue......";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;

}
