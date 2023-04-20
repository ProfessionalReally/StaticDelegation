#include "Solution.h"


int main()
{
	//Создание разных видов стационарных заведений
	StationaryEst* hospital = new Hospital(),
		* infirmary = new Infirmary(),
		* maternityHome = new MaternityHome(),
		* reanimation = new Reanimation();

	//Создание различных пациентов
	Patient* pt1 = new Patient("Ivan Ivanovich Ivanov"),
		* pt2 = new Patient("Ruslan Ahmedovich Uranov"),
		* pt3 = new Patient("Irina Pavlova Fedorova"),
		* pt4 = new Patient("Anton Alexandrovich Rov");
		

	//Направляем разных пациентов в стационарные заведения
		cout << "HOSPITAL: " << endl;
		hospital->DirectPatient(pt1);
		hospital->PrintPatient();
		hospital->PutPatient();
		hospital->PrintName();

		cout << endl;

		cout << "INFIRMARY: " << endl;
		infirmary->DirectPatient(pt2);
		infirmary->PrintPatient();
		infirmary->PutPatient();
		infirmary->PrintName();

		cout << endl;

		cout << "MATERNITYHOME: " << endl;
		maternityHome->DirectPatient(pt3);
		maternityHome->PrintPatient();
		maternityHome->PutPatient();
		maternityHome->PrintName();

		cout << endl;

		cout << "REANIMATION: " << endl;
		reanimation->DirectPatient(pt4);
		reanimation->PrintPatient();
		reanimation->PutPatient();
		reanimation->PrintName();

		//Удаление объектов
		delete hospital,
			infirmary,
			maternityHome,
			reanimation;

		delete pt1,
			pt2,
			pt3,
			pt4;
}		
