#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
	return(top ==-1);
}

int is_full()
{
	return( top == (MAX_STACK_SIZE -1));
}

void push(element item)
{
	if(is_full())
	{
		fprintf(stderr,"스택이 가득!");
		exit(1);
	}
	else
	 	stack[++top] = item;
}

element pop()
{
	if(is_empty())
	{
		fprintf(stderr, "스택이 없어요!");
	  exit(1);
	}
	else
		return stack[top--];
}
element peek()
{
	if(is_empty())
	{
		fprintf(stderr, "스택이 없어요!");
		exit(1);
	}
	else
	 	return stack[top];
}

int main(void)
{
	push(1);
	push(2);
	push(3);
  printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	return 0;
}
