#include "Class.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int numberOfrows, int numberOfColuns)    //   Реализация конструктора с двумя параметрами
{

	_numberOfrows = numberOfrows;
	_numberOfColuns = numberOfColuns;

	_matrix = new float*[_numberOfrows];

	for (int i = 0; i < numberOfrows; i++)
	{
		_matrix[i] = new float[numberOfColuns];
	}

}
Matrix::Matrix(const Matrix & matrix)                          //   Реализация конструктора копирования матрицы
{
	_numberOfrows = matrix._numberOfrows;
	_numberOfColuns = matrix._numberOfColuns;

	_matrix = new float*[_numberOfrows];


	for (int i = 0; i < _numberOfrows; i++)
	{
		_matrix[i] = new float[_numberOfColuns];
	}

	for (int i = 0; i < _numberOfrows; i++)
	{

		for (int j = 0; j < _numberOfColuns; j++)
		{
			_matrix[i][j] = matrix._matrix[i][j];
		}
	}

}
Matrix::~Matrix()          // Деструктор
{
	for (int i = 0; i < _numberOfrows; i++)
	{
		delete[] _matrix[i];
	}
	delete[] _matrix;


}


void Matrix::inputMatrix() //   Реализация функция ввода матрицы
{

	for (int i = 0; i < _numberOfrows; i++)
	{

		cout << "Enter " << i << " rows" << endl;

		for (int j = 0; j < _numberOfColuns; j++)
		{

			cin >> _matrix[i][j];
		}
	}

}

void Matrix::outputMatrix() //  Реализация функция вывода матрицы
{

	for (int i = 0; i < _numberOfrows; i++)
	{


		for (int j = 0; j < _numberOfColuns; j++)
		{

			cout << _matrix[i][j] << "  ";
		}
		cout << endl;
	}

}

Matrix Matrix::operator+(Matrix& b)   //  Реализация оператора сложения 
{
	Matrix sumMatrix(_numberOfrows, _numberOfColuns);

	for (int i = 0; i < _numberOfrows; i++)
	{
		for (int j = 0; j < _numberOfColuns; j++)
		{
			sumMatrix._matrix[i][j] = this->_matrix[i][j] + b._matrix[i][j];

		}
	}
	return sumMatrix;
}

Matrix Matrix::operator-(Matrix& b)    //   Реализация оператора вычитания
{
	Matrix subtractionMatrix(_numberOfrows, _numberOfColuns);

	for (int i = 0; i < _numberOfrows; i++)
	{
		for (int j = 0; j < _numberOfColuns; j++)
		{
			subtractionMatrix._matrix[i][j] = this->_matrix[i][j] - b._matrix[i][j];

		}
	}
	return subtractionMatrix;
}


void Matrix::transposeMatrix()         //  Реализация функция транспонирования матрицы
{
	float temp;
	for (int i = 0; i < _numberOfrows; i++)
	{
		for (int j = i; j < _numberOfColuns; j++)
		{
			temp = this->_matrix[i][j];
			this->_matrix[i][j] = this->_matrix[j][i];
			this->_matrix[j][i] = temp;
		}
	}
}

