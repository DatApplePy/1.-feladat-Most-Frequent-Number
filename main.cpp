#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    // Input
    ifstream f("input.txt");
    if (f.fail())
    {
        cout << "FILE OPEN ERROR!";
        return 1;
    }

    vector <int> x;
    int e;

    while (f >> e)
    {
        x.push_back(e);
    }

    int Max = x[0];
    int Db = 1, MaxDb = 1;

    // Calculation
    for (unsigned int i = 0; i < x.size(); ++i)
    {
        Db = 1;
        unsigned int j = 0;
        for (j; j < x.size(); ++j)
        {
            if (x[i] == x[j] && j != i)
            {
                ++Db;
            }

        }
        if (Db > MaxDb)
        {
            MaxDb = Db;
            Max = x[i];
        }
    }
    cout << "A szamsorozat leggyakoribb eleme: " << Max;

    return 0;
}
