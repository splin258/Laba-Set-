#pragma once

class Matrix {                                    //   ����� Matrix

public:
	Matrix(int numberOfrows, int numberOfColuns); //   ����������� � ����� ������������
	Matrix(const Matrix & matrix);                //   ����������� ����������� 
	~Matrix();                                    //   ���������� 

	void inputMatrix();                           //   ������� ����� �������
	void outputMatrix();                          //   ������� ������ �������

	Matrix operator+(Matrix& b);                  //   ������� ��������
	Matrix operator-(Matrix& b);                  //   �������� ���������
	void transposeMatrix();                       //   ������� ���������������� �������
private:

	int _numberOfrows;                            //   ���������� ���������� ����� 
	int _numberOfColuns;                          //   ���������� ���������� �������� 
	float** _matrix;

};
