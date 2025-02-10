#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina <= jantan*10) {
        betina += tanggal;
        jantan += 1;
        tanggal ++;
    }

    cout << tanggal << endl;
}
