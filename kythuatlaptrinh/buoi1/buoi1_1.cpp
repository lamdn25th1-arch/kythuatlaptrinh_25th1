#include <iostream>
#include <vector>
using namespace std;

struct person {
	int id;
	string name;
	int age;
	string address;

};
void viewpersonlist(vector<person)
int main() {
	vector<person> list;
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