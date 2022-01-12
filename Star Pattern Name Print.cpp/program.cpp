#include <iostream>
using namespace std;
void printname(char temp)
{
    if (temp == 'A' || temp == 'a')
    {
        // A
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || j == 5 || i == 4)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'B' || temp == 'b')
    {
        // B
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || j == 5 || i == 4 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'C' || temp == 'c')
    {
        // C
        cout << endl;
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'D' || temp == 'd')
    {
        // D
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 2 || j == 5 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'E' || temp == 'e')
    {
        // E
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || (i == 4 && j != 5) || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'F' || temp == 'f')
    {
        // F
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || (i == 3 && j != 5))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'G' || temp == 'g')
    {
        // G
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || (i == 4 && j != 2) || i == 7 || (j == 5 && i == 5) || (j == 5 && i == 6))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'H' || temp == 'h')
    {
        // H
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5 || i == 4)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'I' || temp == 'i')
    {
        // I
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 3 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'J' || temp == 'j')
    {
        // J
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 3 || (j == 1 && i == 5) || (j == 1 && i == 6) || (i == 7 && j == 2))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'K' || temp == 'k')
    {
        // K
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                if (j == 1 || (i == 3 && j == 2) || (i == 5 && j == 2) || (i == 2 && j == 3) || (i == 6 && j == 3) || (i == 1 && j == 4) || (i == 7 && j == 4))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'L' || temp == 'l')
    {
        // L
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'M' || temp == 'm')
    {
        // M
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5 || (i == 2 && j == 2) || (i == 3 && j == 3) || (i == 2 && j == 4))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'N' || temp == 'n')
    {
        // N
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5 || (j == 2 && i == 2) || (i == 4 && j == 3) || (i == 6 && j == 4))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'O' || temp == 'o')
    {
        // O
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || i == 7 || j == 5)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'P' || temp == 'p')
    {
        // P
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || i == 4 || (i == 2 && j == 5) || (i == 3 && j == 5))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'Q' || temp == 'q')
    {
        // Q
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || (i == 7 && j != 4) || (i == 6 && j == 4) || (i == 5 && j == 3) || (j == 5 && i != 6))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'R' || temp == 'r')
    {
        // R
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || i == 4 || (i == 2 && j == 5) || (i == 3 && j == 5) || (i == 5 && j == 3) || (i == 6 && j == 4) || (i == 7 && j == 5))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'S' || temp == 's')
    {
        // S
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || i == 7 || i == 4 || (j == 1 && i == 2) || (j == 1 && i == 3) || (j == 5 && i == 5) || (j == 5 && i == 6))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'T' || temp == 't')
    {
        // T
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 3)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'U' || temp == 'u')
    {
        // U
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5 || i == 7)
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'V' || temp == 'v')
    {
        // V
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if ((j == 1 && i == 1) || (j == 1 && i == 2) || (j == 1 && i == 3) || (j == 1 && i == 5) || (j == 1 && i == 4) || (j == 2 && i == 6) || (i == 7 && j == 3) || (i == 6 && j == 4) || (j == 5 && i == 1) || (j == 5 && i == 2) || (j == 5 && i == 3) || (j == 5 && i == 4) || (j == 5 && i == 5))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'W' || temp == 'w')
    {
        // W
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (j == 1 || j == 5 || (j == 2 && i == 6) || (j == 3 && i == 5) || (j == 4 && i == 6))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
    if (temp == 'X' || temp == 'x')
    {
        // X
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if ((j == 1 && i == 1) || (j == 1 && i == 2) || (j == 1 && i == 6) || (j == 1 && i == 7) || (j == 2 && i == 3) || (j == 3 && i == 4) || (j == 4 && i == 5) || (j == 5 && i == 6) || (j == 5 && i == 7) || (j == 2 && i == 5) || (j == 4 && i == 3) || (j == 5 && i == 2) || (j == 5 && i == 1))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'Y' || temp == 'y')
    {
        // Y
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if ((j == 1 && i == 1) || (j == 1 && i == 2) || (j == 2 && i == 3) || (j == 3 && i == 4) || (j == 4 && i == 3) || (j == 5 && i == 2) || (j == 5 && i == 1) || (j == 3 && i == 5) || (j == 3 && i == 6) || (j == 3 && i == 7))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (temp == 'Z' || temp == 'z')
    {
        // Z
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                if (i == 1 || i == 7 || (j == 1 && i == 6) || (j == 2 && i == 5) || (j == 3 && i == 4) || (j == 4 && i == 3) || (j == 5 && i == 2))
                    cout << "* ";
                else
                    cout << "  ";
            }
            cout << endl;
        }
    }
}
int main()
{
    char name[30];
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << endl;
    for (int i = 0; name[i] != '\0'; i++)
    {
        char temp = name[i];
        printname(temp);
    }
    return 0;
}