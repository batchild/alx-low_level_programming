#include <stdio.h>

/**
 * main - prints to string
 * Description: Prints "and that piece of art is usedull.." without puts
 * return: 1
 */

int main(void)

{
char *s = "and the piece of art is useful\" -Dora kopar, 2015-10-19\n";
long l = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
_asm_("syscall"
		: "=a" (ret)
		: "=a" (syscall),
		"D" (fd),
		"S" (s),
		"d" (l));
return (1);
}
