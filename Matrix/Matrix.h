#pragma once
#ifndef MATR_H
#define NATR_H

template <typename T>
class CMatrix {
private:
	void swap(CMatrix & x);
	T **matrix;
	int m_columns;
	int m_rows;

public:
	CMatrix<T>() : m_rows(0), m_columns(0), matrix(nullptr) {};
	CMatrix(unsigned int n, unsigned int m);
	CMatrix(T **matr, unsigned int _n, unsigned int _m);
	CMatrix(CMatrix const & x);
	~CMatrix<T>();

	unsigned int rowsNumber() const; // Tested
	unsigned int columnsNumber() const; // Tested
	bool readFromFile(char *path);
	void writeToConsole() const;

	CMatrix &operator =(const CMatrix& m2);
	CMatrix operator +(const CMatrix& m2); // Tested
	CMatrix operator -(const CMatrix& m2); // Tested
	CMatrix operator *(double num); // Tested
	CMatrix operator *(const CMatrix& m2); // Tested
	bool operator ==(const CMatrix& m2);
	T* operator [](unsigned int index); // Tested
};

#include "Matrix.cpp"

#endif