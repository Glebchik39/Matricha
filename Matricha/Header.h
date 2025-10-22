#include <iostream>
using namespace std;
#pragma once
template <typename T>
class Matricha
{
public:
	void Init();
	~Matricha();
	void Print();
	void InitMatricha();
	int GetRols();
	int GetCols();
	//T* GetPtr();
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








//template<typename T>
//inline T* Matricha<T>::GetPtr()
//{
//	return ptr;
//}


//template<class T>
//ostream& operator<<(ostream& os, Matricha<T>& obj)
//{
//	for (size_t i = 0; i < obj.GetRols(); i++)
//	{
//		for (size_t k = 0; k < obj.GetCols(); k++)
//		{
//			os << obj.GetPtr()[i][k] << "\t";
//		}
//	}
//}







