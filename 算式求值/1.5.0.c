#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();              // 吃掉 scanf 后留在缓冲区的换行符

    while (t--) {
        int result = 0;     // 累计总和
        int current = 0;    // 当前乘除段
        char prev_op = '+'; // 第一个数前面默认有个 +

        char c = getchar(); // 读第一个字符，开始循环处理
        while (c != '=') {  // 读到 '=' 就结束这道题

            // --- 第 1 步：拼出一个完整的整数 ---
            int num = 0;
            while (c >= '0' && c <= '9') {   // 是数字字符就继续拼
                num = num * 10 + (c - '0');  // 核心技巧
                c = getchar();               // 读下一个字符
            }
            // 拼完一个数后，此时 c 一定是运算符 (+ - * /) 或 '='

            // --- 第 2 步：根据 prev_op 处理这个 num ---
            if (prev_op == '+') {
                current = num;
            } else if (prev_op == '-') {
                current = -num;
            } else if (prev_op == '*') {
                current = current * num;
            } else if (prev_op == '/') {
                current = current / num;
            }

            // --- 第 3 步：如果当前 c 是 + 或 -，说明乘除段结束了 ---
            if (c == '+' || c == '-') {
                result = result + current;  // 把 current 累加进总和
                current = 0;
            }

            // --- 第 4 步：记录当前运算符，准备处理下一个数 ---
            if (c != '=') {
                prev_op = c;
                c = getchar();
            }
        }

        result = result + current;  // 读到 '=' 时，最后再累加一次
        printf("%d\n", result);
    }
    return 0;
}