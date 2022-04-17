#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct node {
	int nodeID;
	struct node *previous_node;
	struct node *next_node; 
} node;
void array(void){
	int array[1];
	{int* ptr_array = array;}
	int array_3D[1][1][3] = {{1,2,3}};
	{
		int (*ptr_array) [1][3] = array_3D;
		printf("this is a 3D array %i\n", *ptr_array)
	}
};
void linked_list(void){};
void double_linked_list(void){};
void queue(void){};
void treee(void){};
void stack(void){};

node* new_node(void) {
	return (node*) malloc(sizeof(node));
};




int main(){
	array();
	return 0;
}
