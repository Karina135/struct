#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

struct film
{
	string  Intern;    //Название фильма;
	string comedy_melodrama;   //Жанр;
	string Nancy_Myers;//Режиссер;
	int two_thousand_fifteen;		//год выхода в прокат
	float  eight;	//Рейтинг популярности;
	double cost;	//Цена диска.
};

// Прототипы функций. 
// Создать определения и реализовать алгоритмы функций
film searchByName(string a);
film searchByGenre(string a);
film searchByDirector(string a);
film searchByYear(string a);

film searchByRating(float a);
film searchByCost(double a);

void showFilm(film f);
void showAllFilms(film*& f, int size);

void showFilm(film f)
{
	cout << "==================================" << "\n";
	cout << "Название фильма: " << f.Intern << "\n";
	cout << "Жанр: \t\t" << f.comedy_melodrama << "\n";
	cout << "Режиссер: \t" << f.Nancy_Myers << "\n";
	cout << "Год выпуска: \t " << f.two_thousand_fifteen << "\n";
	cout << "Рейтинг: \t" << f.eight << "\n";
	cout << "Стоимость: \t" << f.cost << "\n\n";
	cout << "==================================" << "\n";
}

void showAllFilms(film*& f, int size)
{
	for (int i = 0; i < size; i++)
	{
		showFilm(f[i]);
	}
}



film inputFilm()
{
	film temp;
	cout << "Введи описание фильма: \n";
	cout << "Название фильма: \n";
	cout << "Введи жанр фильма: \n";
	cout << "Введи режиссера фильма: \n";
	getline(cin, temp.Intern);
	// Дописать ввод остальных полей

	return temp;
}


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int sizeStore = 5;
	film* videoStore = new film[sizeStore];


	videoStore =
	{
	{ "Стажёр",  2015, 8.0, 350.000 },
	{ "Матрица", "2", "3", 1999, 9.0, 400.00 },
	{ "Лето", "1", "3", 2013, 8.0, 235.00 },
	{ "в", "2", "3", 1945, 9.0, 230.00 },
	{ "и", "2", "3", 1945, 9.0, 230.00 }
	}

		//int sizeElement = sizeof(videoStore[0]);
		//int sizeArray = sizeof(videoStore);
		//int countOfElements = sizeArray / sizeElement;
		showAllFilms (videoStore, sizeStore);


	delete[]videoStore;
	int* ptr1{ new int(5) };   
	int* ptr2{ new int { 6 } };

	return 0;
}
