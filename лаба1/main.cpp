#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	
	Matrix matrix_one(2, 2);   // Размер 1 матрицы
	Matrix matrix_two(2, 2);   // размер 2 матрицы

	cout << "Enter Matrix matrix_one" << endl;
    matrix_one.inputMatrix();  // Ввод 1 матрицы
	cout << endl;
	matrix_one.outputMatrix();   // Вывод 1 матрицы

	cout << endl << endl;
	
	cout << "Enter Matrix matrix_two" << endl;
	matrix_two.inputMatrix();   // Ввод 1 матрицы
	cout << endl;
	matrix_two.outputMatrix();   // Вывод 2 матрицы

	cout << endl << endl;

	Matrix matrix_three = matrix_one + matrix_two;  //  Складываем  1 и 2 матрицу и заносим результат в 3 матрицу 
	matrix_three.outputMatrix();   //  Выводим 3 матрицу
	cout << endl;

	Matrix matrix_four = matrix_one - matrix_two;           //   Вычитаем из 1 матрицы вторую и заносим результат в 4 матрицу
	matrix_four.outputMatrix();    //   Выводим 4 матрицу
	cout << endl;


	matrix_one.transposeMatrix();    //  Транспонирование первой матрицы
	matrix_one.outputMatrix();       //  Вывод транспонированной 1 матрицы
	cout << endl;

	 Matrix matrix_five = matrix_one;   // Копирование первой матрицы
	 matrix_five.outputMatrix(); 
	 return 0;
}