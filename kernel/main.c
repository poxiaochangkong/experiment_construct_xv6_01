void uartinit(void);
void uart_puts(char *s);
int main(){
    uartinit();
    uart_puts("Hello, OS!\n");
    // printf("Hello, OS!\n");
    while(1);
}