#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    system("clear");
    int a, b, c;
    cout << "Enter values for a , b , c in the format -> " << endl;
    cout << "  a*x^2 + b*x + c = 0 " << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    cout << "Polynomial:" << endl;
    cout << "->   " << a << "x^2 + " << b << "x + " << c << " = 0 " << endl;
    float solution1, solution2;
    float discriminant;
    discriminant = (pow(b, 2) - 4 * a * c);
    solution1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
    solution2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);
    cout << "discriminant:" << discriminant << endl;
    if (solution1 == solution2 && discriminant == 0)
    {
        solution1 = solution2;
        cout << "Solution is " << solution1 << "." << endl;
        cout << "x=" << solution1 << endl;
    }
    else if (discriminant < 0)
    {
        cout << "Equation has no solution currently" << endl;
    }
    else
    {
        cout << "Solutions are " << endl;
        cout << "   1." << solution1 << endl;
        cout << "   2." << solution2 << endl;
        cout << "x={" << solution1 << "," << solution2 << "}" << endl;
    }
}
