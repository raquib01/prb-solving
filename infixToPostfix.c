#include<stdio.h>
#include<stdlib.h>
#define MAX 20
typedef struct stack{
	int top;
	char* arr;
}stack;

int isEmpty(stack *s){
	return s->top==-1;
}

int isOperator(char c){
	if(c=='+' || c=='-' || c=='/' || c=='*'){
		return 1;
	}
	return 0;
}

int precedence(char c){
	if(c=='+' || c=='-'){
		return 1;
	}
	if(c=='/' || c=='*'){
		return 2;
	}
	return -1;//if stack is empty
}

void push(stack* s,char c){
	(s->top)++;
	s->arr[s->top] = c;
}

char pop(stack *s){
	char c = s->arr[s->top];
	(s->top)--;
	return c;
}

int stackTop(stack *s){
	if(isEmpty(s)){
		return -1;
	}
	return s->arr[s->top];
}
int main(){
	//initialising stack
	stack s;
	s.top = -1;
	s.arr = (char*)malloc(MAX*sizeof(char));

	//input and output str
	char input_str[MAX] = "x-y/z-k*q";
	char output_str[MAX];
	//input and output str traversing index
	int i = 0, j = 0;


	while(input_str[i]!='\0'){//traversing input
		if(isOperator(input_str[i])){//dealing with operators
			while(precedence(input_str[i])<=precedence(stackTop(&s))){//popping from stack and putting in output_str
				output_str[j]=pop(&s);
				j++;
			}
			push(&s,input_str[i]);//pushing in stack
			
		}
		else{//coping operand as it is
			output_str[j]=input_str[i];
			j++;
		}
		i++;
	}
	while(!isEmpty(&s)){//popping and putting in output_str(remaining operator in stack)
		output_str[j]=pop(&s);
		j++;
	}
	output_str[j]='\0';//ending output_str
	printf("Postfix: %s\n",output_str);
	return  0;
}