#include <dos.h>
#include <conio.h>
#include <iostream.h>

#define ARROW_UP=0x48;
#define ARROW_DOWN=0x50;
#define ARROW_LEFT=0x4B;
#define ARROW_RT=0x4D;
#define ARROW_PLUS=0x0D;
#define ARROW_MINUS=0x0C;

void main()
{
	gotoxy(40, 12);
	c = inportb(0x60);

	int offset;
	char *text = "Hello";
	int length = strlen(text);
	float middle = (length / 2);

	/* do
	{

		for (int i = 0; i < length; i++)
		{
			offset = (80*middle + 12 + i) * 2;
			pokeb(0xB800, offset, text[1]);
			pokeb(0xB800, offset + 1, 3);
		}
	} while (getch() != ESC);
*/
	clrscr();
	_setcursortype(_NOCURSOR);
	do
	{

		switch (c)
		{
		case ARROW_UP:

			break;

		case ARROW_DOWN:

			break;

		case ARROW_LEFT:

			break;

		case ARROW_RT:

			break;

		case ARROW_UP:

			break;

		}
	} while (c != 1);
	while (kbhit()) getch();
	clrscr();
	_setcursortype(_NORMALCURSOR);
}
