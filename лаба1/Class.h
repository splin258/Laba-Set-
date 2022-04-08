#pragma once

class Matrix {                                    //   Класс Matrix

public:
	Matrix(int numberOfrows, int numberOfColuns); //   Конструктор с двумя параментрами
	Matrix(const Matrix & matrix);                //   Конструктор копирования 
	~Matrix();                                    //   Деструктор 

	void inputMatrix();                           //   Функция ввода матрицы
	void outputMatrix();                          //   Функция вывода матрицы

	Matrix operator+(Matrix& b);                  //   Операто сложения
	Matrix operator-(Matrix& b);                  //   Оператор вычитания
	void transposeMatrix();                       //   Функция транспонирования матрицы
private:

	int _numberOfrows;                            //   Переменная количества строк 
	int _numberOfColuns;                          //   Переменная количества столбцов 
	float** _matrix;

};
