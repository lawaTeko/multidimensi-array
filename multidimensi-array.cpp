// lawaTeko, Kairatu
// membuat Multidimensi array khususnya 2D dan 3D, maaf jika ada sedikit kesalahan pengkodean
#include <iostream>
using namespace std;

int main() {
	
	/* 	Pada dasarnya array multidimensi ini seperti Matriks
		Misalnya, array 2D dapat dianggap sebagai matriks dengan baris dan kolom, 
		di mana setiap elemen dapat diakses menggunakan dua indeks: 
		satu untuk baris dan satu untuk kolom.
	*/
	
	//	Array 2D
	int array2D[2][2] = {
		{1, 2},
		{3, 4}
	};
	
	cout << "array 2D :" << endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << array2D[i][j] << " ";
		}
		cout << endl;
	}
	
	/* cout << "array 2D :" << endl;
	cout << array2D[0][0] << " " << array2D[0][1] << endl;
	cout << array2D[1][0] << " " << array2D[1][1] << endl;
	*/
	
	cout << endl;
	
	// Array 3D
	int array3D[3][3][2] = {
	{
		{1, 2},
		{3, 4},
		{5, 6}
	},
	{
		{5, 6},
		{7, 8},
		{9, 10}
	},
	{
		{11, 12},
		{13, 14},
		{15, 16}
	}
};
	
	cout << "array 3D :" << endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 2; k++){
				cout << array3D[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << "------" << endl;
	}
	
	/* cout << "array 3D :" << endl;
	cout << array3D[0][0][0] << " " << array3D[0][0][1] << endl;
	cout << array3D[0][1][0] << " " << array3D[0][1][1] << endl;
	
	cout << array3D[1][0][0] << " " << array3D[1][0][1] << endl;
	cout << array3D[1][1][0] << " " << array3D[1][1][1] << endl;*/
	
	return 0;
}
