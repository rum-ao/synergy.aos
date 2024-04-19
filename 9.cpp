#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	fork();
	srand(time(0));
    cout << "матрица 1:" << endl;
	int n1, m1, a1[100][100];
	cin >> n1 >> m1;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			int start = 10;
			int end = 99;
			int x = rand() % (end - start + 1) + start;
			a1[i][j] = x; 
			cout << a1[i][j] << ' ';
		}
		cout << endl;
	} 
    cout << "матрица 2:" << endl;
    int n2, m2, a2[100][100];
	cin >> n2 >> m2;
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			int start = 10;
			int end = 99;
			int x = rand() % (end - start + 1) + start;
			a2[i][j] = x; 
			cout << a2[i][j] << ' ';
		}
		cout << endl;
	} 
    int result[100][100];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                result[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
    cout << "произведение матриц:" << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
	return 0
}