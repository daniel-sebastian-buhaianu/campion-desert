#include <fstream>
#include <iomanip>
using namespace std;
ifstream fin("desert.in");
ofstream fout("desert.out");
int N, K;
float P;
float desert(int);
int main()
{
	fin >> N >> K >> P;	
	fin.close();
	P = P/100;
	fout << fixed << setprecision(3) << desert(N);
	fout.close();
	return 0;
}
float desert(int n)
{
	if (n <= 2) return n*K/P;
	return K/(P*(2*n-3)) + desert(n-1);
}
// scor 100
