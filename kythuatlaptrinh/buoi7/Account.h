#include <string>
using namespace std;
struct Account {
	int id;
	string lnk, usr, pwd, desc;
	friend ostream& operator<<(ostream& os, Account& b) {
		os << "Account information: " << endl;
		os << "\t+ Link: " << b.lnk << endl;
		os << "\t+ User Name: " << b.usr << endl;
		os << "\t+ Passord: " << b.pwd << endl;
		os << "\t+ Description: " << b.desc << endl;
		return os;
	}
	friend istream& operator>>(istream& in, Account& b) {
		cout << "Account information: " << endl;
		cout << "\t+ Id: ";
		in >> b.id;
			cout << "\t+ Link: ";
		in.ignore();
		in.getLine(b.lnk, 50);
		cout << "\t+ User name: ";
		in.getLine(b.usr, 50);
		cout << "\t+ Password: ";
		in.getLine(b.pwd, 50);
		cout << "\t+ Description: ";
		in.getLine(b.desc, 50);
		return in;
	}
};
