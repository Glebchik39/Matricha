#include <iostream>
using namespace std;
#pragma once
template <typename T>
class Matricha
{
public:
	void Init();
	Matricha(int r, int c, const T& value);
	~Matricha();
	void Print();
	void InitMatricha();
	int GetRols();
	int GetCols();
	void MinMax();
	T* GetPtr();
	int operator+=(int number);
	int operator-=(int number);
	int operator*=(int number);
	int operator/=(int number);


private:
	int rols = 3;
	int cols = 5;
	T** ptr;
};



template<typename T>
inline void Matricha<T>::Init()
{
	srand(unsigned(time(0)));
	ptr = new T*[rols];
	for (int i = 0; i < rols; ++i) {
		ptr[i] = new T[cols];
		for (int j = 0; j < cols; ++j) {
			ptr[i][j] = rand() % 101;
		}
	}

}


template<typename T>
Matricha<T>::Matricha(int r, int c, const T& value) {
	rols = r;
	cols = c;
	ptr = new T * [rols];
	for (int i = 0; i < rols; i++) {
		ptr[i] = new T[cols];
		for (int j = 0; j < cols; j++) {
			ptr[i][j] = value; // Заполняем матрицу значением value
		}
	}
}







template<typename T>
inline Matricha<T>::~Matricha()
{
	for (size_t i = 0; i < rols; i++)	
	{
		delete[]ptr[i];
	}
	delete[]ptr;
}

template<typename T>
inline void Matricha<T>::Print()
{
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t k = 0; k < cols; k++)
		{
			cout << ptr[i][k] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
inline void Matricha<T>::InitMatricha()
{
	ptr = new T*[rols];
	for (size_t i = 0; i < rols; i++)
	{
		ptr[i] = new T[cols];
		for (size_t k = 0; k < cols; k++)
		{
			cout << "Enter element: ";
			cin >> ptr[i][k];
		}
	}
}



template<typename T>
inline int Matricha<T>::GetRols()
{
	return rols;
}

template<typename T>
inline int Matricha<T>::GetCols()
{
	return cols;
}

template<typename T>
inline void Matricha<T>::MinMax()
{
	int min = 0;
	int max = 15;
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t k = 0; k < rols; k++)
		{
			if (ptr[i][k] > min)
			{
				min = ptr[i][k];
				
			}
			if(ptr[i][k] < max)
			{
				max = ptr[i][k];
			}
		}
	}
	cout << " Max: " << min;
	cout << " min: " << max;
}

template<typename T>
inline T* Matricha<T>::GetPtr()
{
	return *ptr;
}

template<typename T>
inline int Matricha<T>::operator+=(int number)
{
	cout << "+:\n";
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t c = 0; c < cols; c++)
		{
			 ptr[i][c] += number;
			 cout << ptr[i][c] << "\t";
		}
	}
	return number;
}




template<typename T>
inline int Matricha<T>::operator-=(int number)
{
	cout << "-:\n";
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t c = 0; c < cols; c++)
		{
			ptr[i][c] -= number;
			cout << ptr[i][c] << "\t";
		}
	}
	return number;
}

template<typename T>
inline int Matricha<T>::operator*=(int number)
{
	cout << "*:\n";
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t c = 0; c < cols; c++)
		{
			ptr[i][c] *= number;
			cout << ptr[i][c] << "\t";
		}
	}
	return number;
}

template<typename T>
inline int Matricha<T>::operator/=(int number)
{
	cout << "/:\n";
	for (size_t i = 0; i < rols; i++)
	{
		for (size_t c = 0; c < cols; c++)
		{
			ptr[i][c] /= number;
			cout << ptr[i][c] << "\t";
		}
	}
	return number;
}







class Point
{
	int x;
	int y;


public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;

	}
	Point operator+=(int value) {
		x += value;
		y += value;
		return *this;
	}


	Point operator-=(int value) {
		x -= value;
		y -= value;
		return *this;
	}


	Point operator*=(int value) {
		x *= value;
		y *= value;
		return *this;
	}

	Point operator/=(int value) {
		x /= value;
		y /= value;
		return *this;
	}



	int& GetX()
	{
		return x;
	}

	int& GetY()
	{
		return y;
	}



	//Point operator+=(Point& obj)
	//{
	//	obj.x += x;
	//	obj.y += y;
	//}
	

};

ostream& operator<<(ostream& os, Point& obj)
{
	os <<" x: " << obj.GetX();
	os << " y: " << obj.GetY();
	return os;
}


istream& operator>>(istream& is, Point& obj)
{
	is >> obj.GetX();
	is >> obj.GetY();
	return is;
}














