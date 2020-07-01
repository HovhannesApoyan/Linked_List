#include <iostream>

struct LinkedListNode {
	int data;
	LinkedListNode* next;
};

bool find(LinkedListNode* head, int value) {
	bool b = false;
	while (head != nullptr) {
		if (head->data == value) {
			b = true;
		}
		head = head->next;
	}
	return b;
}

int main()
{
	/*LinkedListNode head;
	LinkedListNode second;
	LinkedListNode third;

	head.data = 8;
	head.next = &second;

	second.data = 9;
	second.next = &third;

	third.data = 10;
	third.next = nullptr;*/

	int array_size;
	std::cout << "array_size: ";
	std::cin >> array_size;
	LinkedListNode* arr = new LinkedListNode[array_size];
	for (int i = 0; i < array_size; ++i) {
		if (i < array_size - 1) {
			std::cin >> arr[i].data;
			arr[i].next = &arr[i + 1];
		}
		else
		{
			std::cin >> arr[i].data;
			arr[i].next = nullptr;
		}
	}
	//arr[array_size-1].next = NULL;

	int value;
	std::cout << "input value: ";
	std::cin >> value;
	if (find(arr, value))
		std::cout << "yes" << "\n";
	else
		std::cout << "no" << "\n";

	delete[]arr;
	arr = nullptr;
}