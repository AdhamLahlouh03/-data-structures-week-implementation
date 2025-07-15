#include <iostream>
using namespace std;
template<typename T>
class Node {
public:
	T data;
	Node* next;

	Node(T val) {
		data = val;
		next = nullptr;
	}
};
template<typename T>
class Queue {
private:
	Node<T>* front;
	Node<T>* back;
	T size;

public:
	Queue() {
		front = nullptr;
		back = nullptr;
		size = 0;
	}

	bool isEmpty() {
		return front == nullptr;
	}

	void push(T x) {
		Node<T>* n = new Node<T>(x);
		n->data = x;
		n->next = nullptr;

		if (isEmpty()) {
			front = n;
			back = n;
			size++;
		}
		else {
			back->next = n;
			back = n;
			size++;
		}
	}

	void pop() {
		if (isEmpty()) {
			cout << "Empty" << endl;
		}
		else if(front == back) {
			Node<T>* p = front;
			front = back = nullptr;
			delete p;
			size--;
		}
		else {
			Node<T>* p = front;
			front = front->next;
			delete p;
			size--;
		}
	}

	int getSize() {
		return size;
	}
	T getFront() {
		return front->data;
	}
	T getBack() {
		return back->data;
	}
};
int main()
{
	Queue<int> que;

	que.push(5);
	que.push(10);
	que.push(15);
	que.push(20);

	// cout << que.getFront() << " " << que.getBack() << " " << que.getSize() << endl;

	while (!que.isEmpty()) {
		cout << que.getFront() << " ";
		que.pop();
	}
}
