#include <iostream>

using namespace std;
int MAX_SIZE, i, j, k;
double R, s;
int main(){
    cout<<"размер матрицы: "<<endl;
    cin>>MAX_SIZE;
    double **a = new double *[MAX_SIZE];
    for (i = 0; i <= MAX_SIZE; i++){
        a[i] = new double [MAX_SIZE];
    }
    double **a1 = new double *[MAX_SIZE];
    for (i = 0; i <= MAX_SIZE; i++){
        a1[i] = new double [MAX_SIZE];
    }
    double *b = new double [MAX_SIZE];
    double *x = new double [MAX_SIZE];
    cout << "Введите значения элементов матрицы " << endl;


    for (i = 1; i <= MAX_SIZE; i++){
        for (j = 1; j <= MAX_SIZE; j++){
            cout << "a[ " << i << "," << j << "]= ";
            cin >> a[i][j];
            a1[i][j] = a[i][j];
        }
    cout << "b,[ " << i << "]= ";
    cin >> b[i];
    }
    for (k = 1; k <= MAX_SIZE; k++){ // прямой ход
        for (j = k + 1; j <= MAX_SIZE; j++){
            R = a[j][k] / a[k][k]; // формула (1)
            for (i = k; i <= MAX_SIZE; i++){
                a[j][i] = a[j][i] - R * a[k][i]; // формула (2)
            }
            b[j] = b[j] - R * b[k]; // формула (3)
        }
    }
    for (k = MAX_SIZE; k >= 1; k--){ // обратный ход
        R = 0;
        for (j = k + 1; j <= MAX_SIZE; j++){
            s = a[k][j] * x[j]; // формула (4)
            R = R + s; // формула (4)
        }
        x[k] = (b[k] - R) / a[k][k]; // формула (4)
    }
    cout << "Решение системы: " << endl;
    for( i = 1; i <= n; i++){
        cout << "x[" << i << "]=" << x[i] << " " << endl;
    }
    return 0;
}