#include <stdio.h>
#include<conio.h>
#include<iostream.h>

int main(void)
{
   char file[80];

   /* prompt for file name to delete */
   printf("File to delete: ");
   gets(file);

   /* delete the file */
   if (remove(file) == 0)
      printf("Removed %s.\n",file);
   else
      perror("remove");
   getch();
   return 0;
}