// Extern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"MainDialog.h"
#include"Square.h"
#include"Circle.h"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{   // this is just to check check in
	MainDialog *ptrMainDialog;
	ptrMainDialog = new MainDialog();
	Circle *ptrSquare = new Circle();
	
	system("pause");
	return 0;
}

