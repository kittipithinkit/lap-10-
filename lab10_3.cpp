#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");
    
    double sum = 0;
    double sum_sq = 0;
    double count = 0;
    double x;

    while (source >> x) {
        sum += x;
        sum_sq += x * x;
        count++;
    }

    if (count > 0) {
        double mean = sum / count;
        double std_deviation = sqrt((sum_sq / count) - (mean * mean));

        cout << "Number of data = " << count << endl;
        cout << setprecision(3);
        cout << "Mean = " << mean << endl;
        cout << "Standard deviation = " << std_deviation << endl;
    }

    source.close();
    return 0;
}