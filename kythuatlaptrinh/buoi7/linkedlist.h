#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node {
	T data;
	Node* next;
};

template <typename T>
struct LinkedList {
	Node<T>* head;
	void Show();
	void Add(T item);
	bool Remove(int id);
	bool Update(int id);
	void Find(string userName);

};

template<typename T>
void LinkedList<T>::Find(string userName) {
	if (!head) {
		cout << "no account available" << endl;
		return;
	}
	Node<T>* item = head;
	while (item != NULL) {
		if (item->data.userName == userName) {
			cout << item->data << endl;
			return;
		}
		item = item->next;
	}
	cout << "No account found" << endl;
}

template<typename T>
void LinkedList<T>::Show() {
	if (head == NULL) {
		cout << "no item avalable" << endl;
		return;
	}
	Node<T>* item = head;
	while (item != NULL) {
		cout << item->data << endl;
		item = item->next;
	}
}

template<typename T>
void LinkedList<T>::Add(T item) {
	Node<T>* newNode = new Node<T>;
	newNode->data = item;
	newNode->next = nullptr;
	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node<T>* item = head;
		while (item->next != NULL) {
			item = item->next;
		}
		item->next = newNode;
	}

}

template<typename T>
bool LinkedList<T>::Remove(int id) {
	if (!head) {
		cout << "No account available" << endl;
		return false;
	}
	Node<T>* item = head;
	if (item->data.id == id) {
		head = item->next;
		delete item;
		return true;
	}
	//...
	item = item->next;
	return false;
}







