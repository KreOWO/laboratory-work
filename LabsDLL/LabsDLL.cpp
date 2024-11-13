#include "pch.h"
#include "LabsDLL.h"

#include <cmath>

using namespace System; // Дописываем объявления пространств имен
using namespace System::Windows::Forms;

namespace LabsDLL {
    double Class1::Vvod(TextBox^ t)
    {
        if (t->Text == "") {
            t->Text = "0";
            return 0;
        }
        else {
            return Convert::ToDouble(t->Text->Replace('.', ','));
        }
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

    void Class1::Solve2(double* w, double a, double b, double x)
    {
        *w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
    }

    void Class1::Solve12(double* z, double* w, double a, double b, double x)
    {
        *z = Class1::Solve1(a, b, x);
        Class1::Solve2(w, a, b, x);
    }
}