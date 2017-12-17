#include <windows.h>
#include <iostream>

void gotoxy(int x, int y) { 
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

void check_enter(){
	while (std::cin.get() == '\n')
		{
			gotoxy(0,1);		
		}
}		
