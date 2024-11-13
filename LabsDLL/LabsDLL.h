#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace LabsDLL {
	public ref class Class1
	{
    public:
        static double Vvod(TextBox^ t);
        static void Vivod(double x, TextBox^ t);
        static void Vivod(double x, Label^ l);
        static double Solve1(double a, double b, double x);
        static void Solve2(double a, double b, double x, TextBox^ t);
        static void Solve2(double a, double b, double x, Label^ l);
        static void Solve12(double a, double b, double x, TextBox^ t1, TextBox^ t2);
        static void Solve12(double a, double b, double x, Label^ l1, Label^ l2);
	};
}
