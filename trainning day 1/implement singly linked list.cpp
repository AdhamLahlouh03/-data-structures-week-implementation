#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T data;
	Node* next;
};
template <typename T>
class SLL {
public:
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;

	bool isEmpty() {
		return head == nullptr;
	}

	void addAtBegining(T x) {
		// creation new node
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;

		// linked list is empty
		if (isEmpty()) {
			head = n;
			tail = n;
		}

		// linked list is not empty
		else {
			n->next = head;
			head = n;
		}
	}

	void deleteFromBeginning() {
		if (isEmpty()) {
			cout << "Empty list" << endl;
		}
		else {
			Node<T>* p = head;
			head = head->next;
			delete p;
		}
	}

	void addAfter(T e, T x) {
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;

		Node<T>* p = head;
		while (p != nullptr) {
			if (p->data == e) {
				n->next = p->next;
				p->next = n;
				break;
			}
			else {
				p = p->next;
			}
		}
		if (p == nullptr) {
			cout << "not found element" << endl;
		}
	}

	Node<T>* search(T x) {
		Node<T>* p = head;
		Node<T>* target = nullptr;
		while (p != nullptr) {
			if (p->data == x) {
				target = p;
				//break;
			}
			p = p->next;
		}
		return target;
	}

	void addBefore(T e, T x) {
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;
		Node<T>* p = search(e);
		if (p == nullptr) cout << "not found" << endl;
		if (p == head) {
			n->next = head;
			head = n;
		}
		else {
			Node<T>* prev = head;
			while (prev->next != p) {
				prev = prev->next;
			}
			n->next = p;
			prev->next = n;
		}

	}

	void addToLast(T x) {
		// creation new node
		Node<T>* n = new Node<T>;
		n->data = x;
		n->next = nullptr;

		// linked list is empty
		if (isEmpty()) {
			head = n;
			tail = n;
		}

		// linked list is not empty
		else {
			tail->next = n;
			tail = n;
		}
	}

	void deleteFromEnd() {
		if (isEmpty()) {
			cout << "Empty list" << endl;
		}
		else {
			Node<T>* p = nullptr;
			Node<T>* t = head;
			while (t->next != nullptr) {
				p = t;
				t = t->next;
			}
			if (p == nullptr) {
				head == nullptr;
			}
			else {
				p->next = nullptr;
			}
			delete t;
		}
	}

	void print() {
		Node<T>* p = head;
		while (p != nullptr) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl << "=============" << endl;
	}

};
int main()
{
	SLL<int> myList;
	myList.addToLast(10);
	myList.print();
	myList.addToLast(15);
	myList.print();
	myList.addAtBegining(20);
	myList.print();
	myList.addAfter(10, 5);
	myList.print();
	myList.addBefore(10, 5);
	myList.print();
	myList.deleteFromBeginning();
	myList.print();
	myList.deleteFromEnd();
	myList.print();
	cout << myList.search(10);
}
