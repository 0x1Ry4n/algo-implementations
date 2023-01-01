#include <stdio.h>
#define SIZEOF(array) (sizeof(array) / sizeof(array[0]))

typedef unsigned int u_int; 

int binary_search(const u_int list[], const u_int item) {
	u_int bottom = 0; 
	u_int top = SIZEOF(list) - 1; 
	u_int middle = (bottom + top) / 2; 

	while (bottom <= top) {
		if (middle == item) 
			return middle;
		else if (middle < item)
		       	bottom = middle + 1;
		else 
			top = middle - 1; 	
	}

	return -1;
}



int main() {
	u_int list[] = { 1, 3, 5, 7, 9 };
	
	printf("%d", binary_search(list, 3));

	return 0; 
}
