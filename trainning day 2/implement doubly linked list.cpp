#include <iostream>
using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node<T>* next;
	Node<T>* prev;
};

template<typename T>
class DLL {
public:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;

	void addToLast(int x) {
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;
		n->prev = nullptr;

		if (head == nullptr) {
			head = n;
			tail = n;
		}
		else {
			tail->next = n;
			n->prev = tail;
			tail = n;
		}
	}

	void removeElement(int x) {
		if (head == tail && head->data == x) {
			Node<T>* p = head;
			head = nullptr;
			tail = nullptr;
			delete p;
			return;
		}
		if (head->data == x) {
			Node<T>* p = head;
			head = head->next;
			head->prev = nullptr;
			delete p;
			return;
		}
		if (tail->data == x) {
			Node<T>* p = tail;
			tail = tail->prev;
			tail->next = nullptr;
			delete p;
			return;
		}
		Node<T>* p = head;
		while (p != nullptr) {
			if (p->data == x) {
				p->prev->next = p->next;
				p->next->prev = p->prev;
				delete p;
				return;
			}
			else {
				p = p->next;
			}
		}
	}

	void print() {
		Node<T>* p = head;
		while (p != nullptr) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl << "=====================" << endl;
	}

	void printRrev() {
		Node<T>* p = tail;
		while (p != nullptr) {
			cout << p->data << " ";
			p = p->prev;
		}
		cout << endl << "=====================" << endl;
	}
};
int main()
{
	DLL<int> myList;

	myList.addToLast(5);
	myList.print();
	myList.addToLast(10);
	myList.print();
	myList.addToLast(15);
	myList.print();
	myList.addToLast(20);
	myList.print();
	myList.addToLast(25);
	myList.print();
	myList.printRrev();
	myList.removeElement(15);
	myList.print();
	myList.printRrev();
	myList.removeElement(5);
	myList.print();
	myList.printRrev();
}
