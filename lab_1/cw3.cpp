#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float f(float x) {
    return sqrt(x * x + 1) - 1;
}

double f(double x) {
    return sqrt(x * x + 1) - 1;
}

long double f(long double x) {
    return sqrt(x * x + 1) - 1;
}

float g(float x) {
    return (x * x) / (sqrt(x * x + 1) + 1);
}

double g(double x) {
    return (x * x) / (sqrt(x * x + 1) + 1);
}

long double g(long double x) {
    return (x * x) / (sqrt(x * x + 1) + 1);
}

int main() {
    const int table_size = 6;
    const int big_table_size = 6;

    float float_array[table_size] = {0.125f, 0.015625f, 0.001953125f, 0.000244140625f, 0.000030517578125f, 3.814697265625e-06f};
    double double_array[table_size] = {0.125, 0.015625, 0.001953125, 0.000244140625, 0.000030517578125, 3.814697265625e-06};
    long double long_double_array[table_size] = {0.125L, 0.015625L, 0.001953125L, 0.000244140625L, 0.000030517578125L, 3.814697265625e-06L};

    float f_float_result[table_size] = {0, 0, 0, 0, 0, 0};
    float g_float_result[table_size] = {0, 0, 0, 0, 0, 0};

    double f_double_result[table_size] = {0, 0, 0, 0, 0, 0};
    double g_double_result[table_size] = {0, 0, 0, 0, 0, 0};

    long double f_long_double_result[table_size] = {0, 0, 0, 0, 0, 0};
    long double g_long_double_result[table_size] = {0, 0, 0, 0, 0, 0};

    for (int i = 0; i < table_size; i++) {
        float x = float_array[i];
        f_float_result[i] = f(x);
        g_float_result[i] = g(x);
    }

    for (int i = 0; i < table_size; i++) {
        double x = double_array[i];
        f_double_result[i] = f(x);
        g_double_result[i] = g(x);
    }

    for (int i = 0; i < table_size; i++) {
        long double x = long_double_array[i];
        f_long_double_result[i] = f(x);
        g_long_double_result[i] = g(x);
    }
    cout << "float\n";
    cout << "Argument\tf(x)\tg(x)\tróżnica\n";
    int precision = 8;
    for (int i = 0; i < table_size; i++) {
        cout << float_array[i] << "\t" <<
                f_float_result[i] << "\t" <<
                g_float_result[i] << "\t" <<
                abs(f_float_result[i] - g_float_result[i]) << "\n";
    }

    cout << "double\n";
    cout << "Argument\tf(x)\tg(x)\tróżnica\n";
    for (int i = 0; i < table_size; i++) {
        cout << double_array[i] << "\t" <<
                f_double_result[i] << "\t" <<
                g_double_result[i] << "\t" <<
                abs(f_double_result[i] - g_double_result[i]) << "\n";
    }

    cout << "long double\n";
    cout << "Argument\tf(x)\tg(x)\tróżnica\n";
    for (int i = 0; i < table_size; i++) {
        cout << long_double_array[i] << "\t" <<
                f_long_double_result[i] << "\t" <<
                g_long_double_result[i] << "\t" <<
                abs(f_long_double_result[i] - g_long_double_result[i]) << "\n";
    }

    cout << "duży double, x = 1.5e308\n";
    double x = 1.5e308;
    cout << f(x) << "\t" << g(x) << "\n";
    return 0;
}
