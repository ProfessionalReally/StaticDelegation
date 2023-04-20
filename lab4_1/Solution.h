#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

//Пациент
class Patient
{
private:
	string FIO; //ФИО
public:
	Patient(string s) { FIO = s; };
	void PrintName() { cout << "Patient " << FIO; };
};

//Абстрактный класс
class AbsractStationaryEst
{
protected:
	string Name; //Имя
};

//Интерфейс
class StationaryEst: public AbsractStationaryEst
{
private:
	Patient* patient;
public:
	StationaryEst(string s) { Name = s; };
	void virtual PutPatient() = 0;
	void PrintName() { cout << Name << endl; };
	void DirectPatient(Patient* s) { patient = s; };
	void PrintPatient() { patient->PrintName(); };
};

//Дочерние классы

//Госпиталь
class Hospital : public StationaryEst
{
public:
	Hospital() :StationaryEst("Hospital") {};
	void PutPatient() { cout << " admitted to "; };
};

//Больница
class Infirmary : public StationaryEst
{
public:
	Infirmary() :StationaryEst("Infirmary") {};
	void PutPatient() { cout << " sent to "; };
};

//Родильный дом
class MaternityHome : public StationaryEst
{
public:
	MaternityHome() :StationaryEst("MaternityHome") {};
	void PutPatient() { cout << " observed in the "; };
};

//Реанимация
class Reanimation : public StationaryEst
{
public:
	Reanimation() :StationaryEst("Reanimation") {};
	void PutPatient() { cout << " put in the "; };
};


