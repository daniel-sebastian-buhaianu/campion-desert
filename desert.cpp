#include <fstream>
#include <iomanip>
using namespace std;
ifstream fin("desert.in");
ofstream fout("desert.out");
int N, K, P;
float desert(int);
int main()
{
	fin >> N >> K >> P;	
	fin.close();
	fout << fixed << setprecision(3) << desert(N);
	fout.close();
	return 0;
}
float desert(int n)
{
	if (n == 1) return 100*K/P;
	if (n == 2) return 200*K/P;
	return 100*K/(P*(2*n-3)) + desert(n-1);
}
// scor 10
