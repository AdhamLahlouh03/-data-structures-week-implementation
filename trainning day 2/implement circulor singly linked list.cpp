#include <iostream>
using namespace std;

template<typename T>
class Node {
public:
	T data;
	Node<T>* next;

	Node(T val) {
		data = val;
		next = nullptr;
	}
};
template<typename T>
class CSLL {
private:
	Node<T>* tail;

public:
	CSLL() {
		tail = nullptr;
	}

	bool isEmpty() {
		return tail == nullptr;
	}

	void addAtBiginning(T x) {
		Node<T>* n = new Node<T>(x);
		n->data = x;
		n->next = nullptr;

		if (isEmpty()) {
			tail = n;
			tail->next = tail;
		}
		else {
			n->next = tail->next;
			tail->next = n;
		}
	}

	void addAtEnd(T x) {
		Node<T>* n = new Node<T>(x);
		n->data = x;
		n->next = nullptr;

		if (isEmpty()) {
			tail = n;
			tail->next = tail;
		}
		else {
			n->next = tail->next;
			tail->next = n;
			tail = n;
		}
	}

	void removeFromBeginning() {
		if (isEmpty()) {
			cout << "List is empty" << endl;
			return;
		}
		else {
			Node<T>* head = tail->next;
			if (head == tail) {
				delete head;
				tail = nullptr;
			}
			else {
				tail->next = head->next;
				delete head;
			}
		}
	}

	void print() {
		if (isEmpty()) {
			cout << "List is empty" << endl;
			return;
		}

		Node<T>* current = tail->next; // Start from head
		do {
			cout << current->data << " ";
			current = current->next;
		} while (current != tail->next);
		cout << endl;
	}
};
int main()
{
	CSLL<int> myList;

	myList.addAtEnd(15);
	myList.addAtEnd(20);
	myList.print();
	myList.addAtBiginning(10);
	myList.print();
	myList.addAtBiginning(5);
	myList.print();
	myList.removeFromBeginning();
	myList.print();
}
