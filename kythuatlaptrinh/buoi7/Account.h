#include <string>
using namespace std;
struct Account {
	string lnk, usr, pwd, desc;
	friend ostream& operator<<(ostream& os, Account& b) {
		os << "Account information: " << endl;
		os << "\t+ Link: " << b.lnk << endl;
		os << "\t+ User Name: " << b.usr << endl;
		os << "\t+ Author name: " << b.author.name << endl;
		return os;
	}
};
