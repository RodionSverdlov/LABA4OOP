// Вариант 18(3)
// Реальзовать класс "Человек", включающий в себя фамилию, имя, отчество, год рождения и методы
// позволяющие изменять/получать значения этих полей.
// Реализовать следующие производные классы:
// -"Предприниматель" с полями: номер лицензии, адресс регистрации, УНН, данные о налоговых плтежах(массив вида:"Дата - сумма")
// -"Турист" содержит данные паспорта(строка), данные о пересечении границы в виде массива пар (Дата - страна)
// -"Челнок" (производный от второго и третьего класса) добавляется массив строк списка адресов по которым покупается товар.
// классы должны содержать методы доступа и изменения всех полей.

#include <iostream>
#include <string>
using namespace std;

class Man
{
public:
	string Name;
	string Surname;
	string Patronymic;
	string Year;

	void changeName();
	void changeSurname();
	void changePatronymic();
	void changeYear();

	string getName();
	string getSurname();
	string getPatronymic();
	string getYear();

private:

};

void Man::changeName() {
	string newName;
	cout << "Введите имя: "; cin >> newName;
	Name = newName;
}

void Man::changeSurname() {
	string newSurname;
	cout << "Введите фамилию: "; cin >> newSurname;
	Surname = newSurname;
}

void Man::changePatronymic() {
	string newPatronymic;
	cout << "Введите отчество: "; cin >> newPatronymic;
	Patronymic = newPatronymic;
}

void Man::changeYear() {
	string newYear;
	cout << "Введите год рождения: "; cin >> newYear;
	Year = newYear;
}

string Man::getName(){
	return Name;
}

string Man::getSurname(){
	return Surname;
}

string Man::getPatronymic(){
	return Patronymic;
}

string Man::getYear(){
	return Year;
}

// -"Предприниматель" с полями: номер лицензии, адресс регистрации,
// УНН, данные о налоговых плтежах(массив вида:"Дата - сумма")
class Businessman :public virtual Man
{
public:
	int License_number;
	string Registration_address;
	int TaxPay[3][2];
	void Set_TaxPay();
	void Get_TaxPay();
	void Set_License_number();
	int Get_License_number();
	void Set_Registration_address();
	string Get_Registration_address();
private:
	
};

//-"Турист" содержит данные паспорта(строка), данные о пересечении границы в виде массива пар(Дата - страна)
class Turist :public virtual Man
{
public:
	string PassDATA;
	string border[3][2];
	void Set_PassDATA();
	string Get_PassDATA();
	void Set_border();
	void Get_border();

private:

};

// -"Челнок" (производный от второго и третьего класса) добавляется массив строк списка адресов по которым покупается товар.
// классы должны содержать методы доступа и изменения всех полей.
class Chelnok :public Businessman, public Turist
{
public:
	string Taddr[3];//tovar-address
	void Set_Taddr();
	void Get_Taddr();
private:

};




int main() 
{
	setlocale(LC_ALL, "ru");
	bool Exit = true;
	/*Businessman b1;
	b1.changeName();
	b1.changeSurname();
	b1.changePatronymic();
	b1.changeYear();
	b1.Set_Registration_address();
	b1.Set_License_number();
	system("pause");
	b1.Set_TaxPay();*/
	while (Exit)
	{
		int Variant;
		cout << "Create people (1)" << endl;
		cout << "Create businessman (2)" << endl;
		cout << "Create turist (3)" << endl;
		cout << "Create chelnok (4)" << endl;
		cin >> Variant;
		system("cls");
		switch (Variant)
		{
		 case 1: // создать Человека
		 {
			 Man m1;
			 int Variant1;
			 bool Exit1 = true;
			 while (Exit1)
			 {
				 cout << "0-Ввести информацию" << endl;
				 cout << "1-Изменить имя" << endl;
				 cout << "2-Изменить фамилию" << endl;
				 cout << "3-Изменить отчество" << endl;
				 cout << "4-Изменить год рождения" << endl;
				 cout << "5-Вывод информации" << endl;
				 cout << "6-Назад" << endl;
				 cin >> Variant1;
				 system("pause");
				 system("cls");
				 switch (Variant1)
				 {
				 case 0: {
					 m1.changeName();
					 m1.changeSurname();
					 m1.changePatronymic();
					 m1.changeYear();
				 }; break;
				 case 1: {
					 m1.changeName();
				 }; break;
				 case 2: {
					 m1.changeSurname();
				 }; break;
				 case 3: {
					 m1.changePatronymic();
				 }; break;
				 case 4: {
					 m1.changeYear();
				 }; break;
				 case 5: {
					 cout << "Имя: " << m1.getName() << endl;
					 cout << "Фамилия: " << m1.getSurname() << endl;
					 cout << "Отчество :" << m1.getPatronymic() << endl;
					 cout << "Год рождения: " << m1.getYear() << endl;
					 system("pause");
					 system("cls");
				 }; break;
				 case 6: {
					 Exit1 = false;
					 system("cls");
				 }; break;
				 default:
					 break;
				 }
			 }

		 }; break;
		 case 2: // создать Бизнессмена
		 {
			 Businessman b1;
			 int Variant2;
			 bool Exit2 = true;
			 while (Exit2)
			 {
				 cout << "0-Ввести информацию" << endl;
				 cout << "1-Изменить имя" << endl;
				 cout << "2-Изменить фамилию" << endl;
				 cout << "3-Изменить отчество" << endl;
				 cout << "4-Изменить год рождения" << endl;
				 cout << "5-Изменить регистрационный адрес" << endl;
				 cout << "6-Изменить номер лицензии" << endl;
				 cout << "7-Изменить информацию о налоговых платежах" << endl;
				 cout << "8-Вывод информации" << endl;
				 cout << "9-Назад" << endl;
				 cin >> Variant2;
				 switch (Variant2)
				 {
				 case 0: {
					 b1.changeName();
					 b1.changeSurname();
					 b1.changePatronymic();
					 b1.changeYear();
					 b1.Set_Registration_address();
					 b1.Set_License_number();
					 system("pause");
					 b1.Set_TaxPay();
				 }; break;
				 case 1: {
					 b1.changeName();
				 }; break;
				 case 2: {
					 b1.changeSurname();
				 }; break;
				 case 3: {
					 b1.changePatronymic();
				 }; break;
				 case 4: {
					 b1.changeYear();
				 }; break;
				 case 5: {
					 b1.Set_Registration_address();
				 }; break;
				 case 6: {
					 b1.Set_License_number();
				 }; break;
				 case 7: {
					 b1.Set_TaxPay();
				 }; break;
				 case 8: {
					 cout << "Имя: " << b1.getName() << endl;
					 cout << "Фамилия: " << b1.getSurname() << endl;
					 cout << "Отчество :" << b1.getPatronymic() << endl;
					 cout << "Год рождения: " << b1.getYear() << endl;
					 cout << "Регистрационный адрес: " << b1.Get_Registration_address() << endl;
					 cout << "Номер лицензии: " << b1.Get_License_number() << endl;
					 b1.Get_TaxPay();
				 }; break;
				 case 9: {
					 Exit2 = false;
				 }; break;
				 default:
					 break;
				 }

			 }
			 
		 }
		 case 3:// create turist
		 {
			 Turist t1;
			 int Variant3;
			 bool Exit3 = true;
			 while (Exit3)
			 {
				 cout << "0-Ввести информацию" << endl;
				 cout << "1-Изменить имя" << endl;
				 cout << "2-Изменить фамилию" << endl;
				 cout << "3-Изменить отчество" << endl;
				 cout << "4-Изменить год рождения" << endl;
				 cout << "7-Изменить паспортные данные" << endl;
				 cout << "8-Изменить данные о пересечении границы" << endl;
				 cout << "5-Вывод информации" << endl;
				 cout << "6-Назад" << endl;
				 cin >> Variant3;
				 switch (Variant3)
				 {
				 case 0: {
					 t1.changeName();
					 t1.changeSurname();
					 t1.changePatronymic();
					 t1.changeYear();
					 t1.Set_PassDATA();
					 system("pause");
					 t1.Set_border();
				 }; break;
				 case 1: {
					 t1.changeName();
				 }; break;
				 case 2: {
					 t1.changeSurname();
				 }; break;
				 case 3: {
					 t1.changePatronymic();
				 }; break;
				 case 4: {
					 t1.changeYear();
				 }; break;
				 case 5: {
					 cout << "Имя: " << t1.getName() << endl;
					 cout << "Фамилия: " << t1.getSurname() << endl;
					 cout << "Отчество :" << t1.getPatronymic() << endl;
					 cout << "Год рождения: " << t1.getYear() << endl;
					 cout << "Паспортные данные: " << t1.Get_PassDATA() << endl;
					 t1.Get_border();
				 }; break;
				 case 6: {
					 Exit3 = false;
				 }; break;
				 case 7: {
					 t1.Get_PassDATA();
				 }; break;
				 case 8: {
					 t1.Get_border();
				 }
				 default:
					 break;
				 }
			 }
		 }
		 case 4: // create chelnok
		 {
			 Chelnok c1;
			 int Variant4;
			 bool Exit4 = true;
			 while (Exit4)
			 {
				 cout << "0-Ввести информацию" << endl;
				 cout << "1-Изменить имя" << endl;
				 cout << "2-Изменить фамилию" << endl;
				 cout << "3-Изменить отчество" << endl;
				 cout << "4-Изменить год рождения" << endl;
				 cout << "5-Изменить регистрационный адрес" << endl;
				 cout << "6-Изменить номер лицензии" << endl;
				 cout << "7-Изменить информацию о налоговых платежах" << endl;
				 cout << "71-Изменить паспортные данные" << endl;
				 cout << "81-Изменить данные о пересечении границы" << endl;
				 cout << "82-Изменить адреса товаров" << endl;
				 cout << "8-Вывод информации" << endl;
				 cout << "9-Назад" << endl;
				 cin >> Variant4;
				 switch (Variant4)
				 {
				 case 0: {
					 c1.changeName();
					 c1.changeSurname();
					 c1.changePatronymic();
					 c1.changeYear();
					 c1.Set_Registration_address();
					 c1.Set_License_number();
					 system("pause");
					 c1.Set_TaxPay();
					 system("pause");
					 c1.Set_PassDATA();
					 system("pause");
					 c1.Set_border();
					 c1.Set_Taddr();
				 }; break;
				 case 1: {
					 c1.changeName();
				 }; break;
				 case 2: {
					 c1.changeSurname();
				 }; break;
				 case 3: {
					 c1.changePatronymic();
				 }; break;
				 case 4: {
					 c1.changeYear();
				 }; break;
				 case 5: {
					 c1.Set_Registration_address();
				 }; break;
				 case 6: {
					 c1.Set_License_number();
				 }; break;
				 case 7: {
					 c1.Set_TaxPay();
				 }; break;
				 case 71: {
					 c1.Set_PassDATA();
				 }; break;
				 case 81: {
					 c1.Set_border();
				 }; break;
				 case 82: {
					 c1.Set_Taddr();
				 }; break;
				 case 8: {
					 cout << "Имя: " << c1.getName() << endl;
					 cout << "Фамилия: " << c1.getSurname() << endl;
					 cout << "Отчество :" << c1.getPatronymic() << endl;
					 cout << "Год рождения: " << c1.getYear() << endl;
					 cout << "Регистрационный адрес: " << c1.Get_Registration_address() << endl;
					 cout << "Номер лицензии: " << c1.Get_License_number() << endl;
					 c1.Get_TaxPay();
					 cout<<"Паспортные данные: " << c1.Get_PassDATA();
					 c1.Get_border();
					 c1.Get_Taddr();
				 }; break;
				 case 9: {
					 Exit4 = false;
				 }; break;
				 default:
					 break;
				 }

			 }
		 }
		default:
			break;
		}
	}
	
}

void Businessman::Set_TaxPay()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
		{
			if (j == 0) {
				cout << "Введите дату: " << i + 1 << "-ого платежа: "; cin >> TaxPay[i][j];
			}
			if (j == 1) {
				cout << "Введите сумму: " << i + 1 << "-ого платежа: "; cin >> TaxPay[i][j];
			}
		}
	}
}

void Businessman::Get_TaxPay()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++)
		{
			if (j == 0) {
				cout << "дата: " << i + 1 << "-ого платежа: "; cout << TaxPay[i][j]<<"  ";
			}
			if (j == 1) {
				cout << "сумма: " << i + 1 << "-ого платежа: "; cout << TaxPay[i][j]<<"  ";
			}
		}
		cout << endl;
	}
}

void Businessman::Set_License_number()
{
	cout << "Введите номер лицензии: "; cin >> License_number;
}

int Businessman::Get_License_number()
{
	return License_number;
}

void Businessman::Set_Registration_address()
{
	cout << "Введите регистрационный адрес: "; cin >> Registration_address;
}

string Businessman::Get_Registration_address()
{
	return Registration_address;
}

void Turist::Set_PassDATA()
{
	cout << "Введите паспортные данные: "; cin >> PassDATA;
}

string Turist::Get_PassDATA()
{
	return PassDATA;
}

void Turist::Set_border()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				cout << "Введите дату: ";
				cin >> border[i][j];
			}
			if (j == 1) {
				cout << "Введите страну: ";
				cin >> border[i][j];
			}
		}
	}
}

void Turist::Get_border()
{
	cout << "Информация о пересечении границы" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << border[i][j]<<"--";
		}
		cout << endl;
	}
}

void Chelnok::Set_Taddr()
{
	for (int i = 0; i < 3; i++) {
		cout << "Введите адрес: "; cin >> Taddr[i];
	}
}

void Chelnok::Get_Taddr()
{
	cout << "Список адресов по которым покупался товар" << endl;
	for (int i = 0; i < 3; i++) {
		cout << Taddr[i] << endl;
	}
}
