#include <iostream>

using namespace std;

void swap(int &n, int &m)
{
    int l = n;
    n = m;
    m = l;
}

int main()
{
    int i,j;
    cout << "i = "; 
    cin >> i;
    cout << "j = ";
    cin >> j;
    cout << "Swapping...\n";
    swap(i,j);
    cout << "i = " << i << "\nj = " << j << endl;
}
