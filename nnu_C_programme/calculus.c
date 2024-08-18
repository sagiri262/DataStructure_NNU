#include <stdio.h>
#include <windows.h>

// ���屻������
double f(double x) {
    return x * x;  // ʾ������ f(x) = x^2
}

// ʹ�����η�����㶨����
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

    printf("��������ֵ����޺����ޣ�");
    scanf("%lf %lf", &a, &b);
    printf("�����뻮�ֵ���������");
    scanf("%d", &n);

    double integral = trapezoidalRule(a, b, n);
    printf("�����ֵĽ���ֵΪ��%.4lf\n", integral);

    return 0;
}