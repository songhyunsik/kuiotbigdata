static int stack[100];
static int tos; 	// top of stack  // 전역변수는 초기화 가능

void push(int data) {		// func. definition
   stack[tos] = data;
   ++tos;
}

int pop(void) {
   --tos;
   return stack[tos];
}
