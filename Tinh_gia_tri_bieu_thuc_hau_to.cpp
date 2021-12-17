#include <iostream>
#include <string.h>
 
using namespace std;
 

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};
 

struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
 
    if (!stack) return NULL;
 
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
 
    if (!stack->array) return NULL;
 
    return stack;
}
 
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
 
char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
 
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
 
void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}
 
 
// Hàm trả về giá trị biểu thức hậu tố
int evaluatePostfix(char* exp)
{
    // tạo một ngăn xếp có dung lượng bằng độ dài của chuỗi biểu thức
    struct Stack* stack = createStack(strlen(exp));
    int i;
 
    // Nếu taoh thành công
    if (!stack) return -1;
 
    // Quét tất cả các kí tự lần lượt
    for (i = 0; exp[i]; ++i)
    {
        // Nếu gặp một toán hạng thì đẩy vào ngăn xếp
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
 
        // Quét được một toán tử thì đẩy hai giá trị ra khỏi ngăn xếp
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}
 

int main()
{
    int t;
    cin >> t;
    while (t--){
        char exp[20] ;
        cin >> exp;
        getchar();
        cout<< evaluatePostfix(exp) << endl;
    }
    return 0;
}