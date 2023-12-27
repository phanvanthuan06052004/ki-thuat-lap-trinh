#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void tao();
void doc();

int main()
{
    tao();
    doc();
    return 0;
}

void tao()
{
    fstream output;
    output.open("SONGUYEN.INP", ios::out | ios::binary);
    if (output)
    {
        int A[10];
        int n = 3;
        srand((unsigned)time(NULL));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                A[j] = rand() % 10;
                cout << A[j] << " ";
            }
            output.write(reinterpret_cast<char *>(&A), sizeof(A));
            output.write("\n", 1);
            cout << endl;
        }
        output.close();
    }
}

void doc()
{
    fstream input("SONGUYEN.INP", ios::in | ios::binary);
    if (!input)
    {
        cout << "Khong mo duoc file!";
        exit(0);
    }

    ofstream SoChan("SOCHAN.OUT", ios::out);
    if (!SoChan)
    {
        cout << "Khong tao duoc file SOCHAN.OUT!";
        exit(0);
    }

    ofstream SoLe("SOLE.OUT", ios::out);
    if (!SoLe)
    {
        cout << "Khong tao duoc file SOLE.OUT!";
        exit(0);
    }

    cout << "----------------------------------------" << endl;

    int n = 0;
    int A[10000];
    while (true)
    {
        int B[10];
        input.read(reinterpret_cast<char *>(&B), sizeof(B));
        char C;
        input.read(reinterpret_cast<char *>(&C), sizeof(C));
        if (input.eof())
            break;
        for (int i = 0; i < 10; i++)
        {
            A[n] = B[i];
            n++;
        }
    }
    input.close();

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            SoChan << A[i] << " ";
        }
        else
        {
            SoLe << A[i] << " ";
        }
    }

    SoChan.close();
    SoLe.close();
}

