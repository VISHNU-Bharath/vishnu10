#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("out.txt");
	char string[300] "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
	fout<<string;
	fout.close() ;
	return 0;
}

