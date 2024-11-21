#include <iostream>
using namespace std;

int main() {
	
	/* 	pada dasarnya array multidimensi ini seperti Matriks
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
	cout << array2D[0][0] << " " << array2D[0][1] << endl;
	cout << array2D[1][0] << " " << array2D[1][1] << endl;
	
	cout << endl;
	
	// Array 3D
	int array3D[2][2][2] = {
	{
		{1, 2},
		{3, 4}
	},
	{
		{5, 6},
		{7, 8}
	}
};
	
	cout << "array 3D :" << endl;
	cout << array3D[0][0][0] << " " << array3D[0][0][1] << endl;
	cout << array3D[0][1][0] << " " << array3D[0][1][1] << endl;
	
	cout << array3D[1][0][0] << " " << array3D[1][0][1] << endl;
	cout << array3D[1][1][0] << " " << array3D[1][1][1] << endl;
	
	return 0;
}
