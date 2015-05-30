/* Goz Custom OS Maker
 * May 29, 2015
 * Version 0.1
 */


#include <stdio.h>
#include <peekpoke.h>
#include <conio.h>

typedef unsigned char byte;
byte lmargin = 2;

int main()
{
    clrscr();
    printf("Goz Custom OS Maker\n\n");

    printf("Left margin (%d): ", lmargin);
    scanf("%d",lmargin);
    printf("You entered: %d", lmargin);

    scanf("%d",lmargin);
    return (0);
}
