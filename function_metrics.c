#include <stdio.h>
#include <stdarg.h>

char buffer[80];
int vspfunc(char *format, ...) {
   va_list aptr;
   int ret;

   va_start(aptr, format);
   ret = vsprintf(buffer, format, aptr);
   va_end(aptr);

   return(ret);
}

int f1()
{
	int i;
}

int main () {
   int i = 5;
   float f = 27.0;
   char str[50] = "tutoriaspoint.com";

	f1();
   vspfunc("%d %f %s", i, f, str);
   printf("%s\n", buffer);
   
   return(0);
}