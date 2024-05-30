#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	srand(time(NULL));
	int arr_size;
	int sort_count;
	
	while (1) {
		printf("Bubble Sort \n");
		printf("Count: ");
		scanf_s("%d", &arr_size);
		
		if (arr_size <= 0) {
			printf("Please enter a number greater than 1!\n");
			continue;
		}

		int arr[arr_size];
		for (int i=0; i<arr_size; i++)
			arr[i] = rand()%100;
		
		printf("\n");
		printf("BEFOR ARRAY \n");
		for (int i=0; i<arr_size; i++)
			printf("%2d ", arr[i]);
		
		printf("\n\n");
		printf("SORTING . . . \n");
		sort_count = 0;
		for (int i=0; i<arr_size; i++) {
			bool sorted = false;
			for (int l=0; l<arr_size-1; l++)
				if (arr[l] > arr[l+1]) {
					sorted = true;
					int temp = arr[l+1];
					arr[l+1] = arr[l];
					arr[l] = temp;
				}
			
			if (!sorted)
				break;
			sort_count += 1;
			
			printf("%2d. ", sort_count);
			for (int j=0; j<arr_size; j++)
				printf("%2d ", arr[j]);
			printf("\n");
		}
		
		printf("\n");
		printf("AFTER ARRAY \n");
		for (int i=0; i<arr_size; i++)
			printf("%2d ", arr[i]);
		printf("\n\n");
		
		system("pause");
		system("cls");
	}
}
