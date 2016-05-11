#include "utils.h"


void clearScreen(){

	COORD upperLeftCorner = { 0, 0 };
	DWORD charsWritten;
	DWORD conSize;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO  csbi;

	GetConsoleScreenBufferInfo(hCon, &csbi);
	conSize = csbi.dwSize.X * csbi.dwSize.Y;

	// fill with spaces
	FillConsoleOutputCharacter(hCon, TEXT(' '), conSize, upperLeftCorner, &charsWritten);
	GetConsoleScreenBufferInfo(hCon, &csbi);
	FillConsoleOutputAttribute(hCon, csbi.wAttributes, conSize, upperLeftCorner, &charsWritten);

	// cursor to upper left corner
	SetConsoleCursorPosition(hCon, upperLeftCorner);
}


unsigned short int leUnsignedShortInt(unsigned short int min, unsigned short int  max){
	unsigned short int num;

	cin >> num;
	while (num < min || num > max);
	{
		cout << "\nOutput Invalido. Introduza um numero entre " << min << " e " << max << " : ";
		cin >> num;
	}
	return num;

}


int leInteiro(int min, int max){

	// A IMPLEMENTAR

}
