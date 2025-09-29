void uartinit(void);
void uart_puts(char *s);

int bss_test_var[16];
int main(){
    uartinit();

    // 验证逻辑
    int is_bss_cleared = 1;
    for (int i = 0; i < 16; i++) {
        if (bss_test_var[i] != 0) {
            is_bss_cleared = 0;
            break;
        }
    }

    if (is_bss_cleared) {
        uart_puts("BSS segment is cleared correctly!\n");
    } else {
        uart_puts("Error: BSS segment is NOT cleared!\n");
    }
    uart_puts("Hello, OS!\n");
    // printf("Hello, OS!\n");
    while(1);
}