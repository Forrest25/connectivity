/* for test */
#include <stdio.h>
#include <stdlib.h>

// 函数声明
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    char operator;
    float num1, num2, result;

    // 打印欢迎信息
    printf("=== 简单计算器 ===\n");
    printf("支持的操作符：+ (加), - (减), * (乘), / (除)\n");

    // 获取用户输入
    printf("请输入表达式（格式：数字1 操作符 数字2）：\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    // 根据操作符执行相应的计算
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("错误：除数不能为零！\n");
                return 1; // 返回错误码
            }
            result = divide(num1, num2);
            break;
        default:
            printf("错误：无效的操作符 '%c'\n", operator);
            return 1; // 返回错误码
    }

    // 输出结果
    printf("结果：%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}

// 加法函数
float add(float a, float b) {
    return a + b;
}

// 减法函数
float subtract(float a, float b) {
    return a - b;
}

// 乘法函数
float multiply(float a, float b) {
    return a * b;
}

// 除法函数
float divide(float a, float b) {
    return a / b;
}
