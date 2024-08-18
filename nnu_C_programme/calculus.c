#include <stdio.h>
#include <windows.h>

// 定义被积函数
double f(double x) {
    return x * x;  // 示例函数 f(x) = x^2
}

// 使用梯形法则计算定积分
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        sum += f(a + i * h);
    }
    return h * sum;
}

int main() {
    double a, b;
    int n;

    printf("请输入积分的下限和上限：");
    scanf("%lf %lf", &a, &b);
    printf("请输入划分的区间数：");
    scanf("%d", &n);

    double integral = trapezoidalRule(a, b, n);
    printf("定积分的近似值为：%.4lf\n", integral);

    return 0;
}