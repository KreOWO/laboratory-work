#include "pch.h"

#include "LabsDLL.h"
#include <cmath>


using namespace System; // Дописываем объявления пространств имен
using namespace System::Windows::Forms;

namespace LabsDLL {
    double Class1::Vvod(TextBox^ t)
    {
        return Convert::ToDouble(t->Text->Replace('.', ','));
    }

    void Class1::Vivod(double x, TextBox^ t)
    {
        t->Text = Convert::ToString(x);
    }

    void Class1::Vivod(double x, Label^ l)
    {
        l->Text = Convert::ToString(x);
    }

    double Class1::Solve1(double a, double b, double x)
    {
        double z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b));
        return z;
    }

    void Class1::Solve2(double a, double b, double x, TextBox^ t2)
    {
        double w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
        Class1::Vivod(w, t2);
    }

    void Class1::Solve2(double a, double b, double x, Label^ l2)
    {
        double w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
        Class1::Vivod(w, l2);
    }

    void Class1::Solve12(double a, double b, double x, TextBox^ t1, TextBox^ t2)
    {
        double result1 = Class1::Solve1(a, b ,x);
        Class1::Solve2(a, b, x, t2);
        Class1::Vivod(result1, t1);
    }

    void Class1::Solve12(double a, double b, double x, Label^ l1, Label^ l2)
    {
        double result1 = Class1::Solve1(a, b ,x);
        Class1::Solve2(a, b, x, l2);
        Class1::Vivod(result1, l1);
    }
}
