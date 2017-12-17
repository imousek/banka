#include "kurzor.h"
#include <windows.h>


void ChangeCursorStatus(bool Visible)
{
	CONSOLE_CURSOR_INFO *c=new CONSOLE_CURSOR_INFO;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

	if (Visible)
	{
		c->bVisible=TRUE;
		c->dwSize=5;
	}
	else
	{
		c->bVisible=FALSE;
		c->dwSize=1;
	}
	
	SetConsoleCursorInfo(h,c);
}
