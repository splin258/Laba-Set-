#include <iostream>
#include "class.h"

using namespace std;

int main()
{
	
	Matrix matrix_one(2, 2);   // ������ 1 �������
	Matrix matrix_two(2, 2);   // ������ 2 �������

	cout << "Enter Matrix matrix_one" << endl;
    matrix_one.inputMatrix();  // ���� 1 �������
	cout << endl;
	matrix_one.outputMatrix();   // ����� 1 �������

	cout << endl << endl;
	
	cout << "Enter Matrix matrix_two" << endl;
	matrix_two.inputMatrix();   // ���� 1 �������
	cout << endl;
	matrix_two.outputMatrix();   // ����� 2 �������

	cout << endl << endl;

	Matrix matrix_three = matrix_one + matrix_two;  //  ����������  1 � 2 ������� � ������� ��������� � 3 ������� 
	matrix_three.outputMatrix();   //  ������� 3 �������
	cout << endl;

	Matrix matrix_four = matrix_one - matrix_two;           //   �������� �� 1 ������� ������ � ������� ��������� � 4 �������
	matrix_four.outputMatrix();    //   ������� 4 �������
	cout << endl;


	matrix_one.transposeMatrix();    //  ���������������� ������ �������
	matrix_one.outputMatrix();       //  ����� ����������������� 1 �������
	cout << endl;

	 Matrix matrix_five = matrix_one;   // ����������� ������ �������
	 matrix_five.outputMatrix(); 
	 return 0;
}