// =========================================================
// ============== C Essentials - Dan Gookin ================
// =========================================================

// 06. writing a simple program
/* #include <stdio.h>

int main() {
   printf("Hello, World!\n");
   puts("Goodbye, cruel world!");

   return 0;
} */


//========================================
// 07. write your own code
/* #include <stdio.h>

int main() {
   puts("Welcome to the world of c programming.");
   puts("C programming is fun at last.");

   return 0;
} */


//========================================
// 09.1 reviewing code structure
// #include <stdio.h>

// int main()
// {
//    int a,b;

//    printf("Type a positive value: ");
//    scanf("%d",&b);
//    for(a=0;a<b;a++)
//    {
//        printf("I must do this %d times\n",b);
//        if(a==9)
//            break;
//    }

//    return(0);
// }


//========================================
// 09.2 reviewing code structure
//#include <stdio.h>
//
//int main()
//{
//    int a,b;
//
//    printf("Type a positive value: ");
//    scanf("%d",&b);
//    for(a=0;a<b;a++)
//    {
//        printf("I must do this %d times\n",b);
//        if(a==9) break;
//    }
//
//    return(0);
//}


//========================================
// 09.3 reviewing code structure
//#include <stdio.h>
//
//int main()
//{
//    int a,b;
//
//    printf("Type a positive value: ");
//    scanf("%d",&b);
//    for(a=0;a<b;a++)
//        printf("I must do this %d times\n",b);
//
//    return(0);
//}


//==============================================
// 09.4 reviewing code structure
/* #include <stdio.h>
int main(){int a,b;printf("Type a positive value: ");scanf("%d",&b);for(a=0;a<b;a++){printf("I must do this %d times\n",b);if(a==9) break;}return(0);} */


//==============================================
// 10.1 exploring the preprocessor directives
// preprocessor directive prepares a source code file for compiling
// #define // for substitution constant const, const expression, macro
// #elif
// #else
// #endif
// #error
// #if
// #ifdef
// #ifndef
// #include // inserts code from the named file into the source code file. eg. <math.h>(searches in 'include' directory of compiler) or "inputParser.h"(searches in same directory as the source code)
// #line

/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int a;

   srand( (unsigned)time(NULL) ); // seed function

   for(a=0;a<10;a++)
       printf("%3d ",rand()%100+1);
   putchar('\n');

   return(0);
} */


//==============================================
// 10.2 exploring the preprocessor directives
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

int main()
{
   int a;

   srand( (unsigned)time(NULL) );
   for(a=0;a<COUNT;a++)
       printf("%3d ",rand()%100+1);
   putchar('\n');

   return(0);
} */


//==============================================
// 10.3 exploring the preprocessor directives
/* #include <stdio.h>

#define GREETING "Howdy do!"

int main()
{
   puts(GREETING);
   return(0);
} */


//==============================================
//11. understanding header files and libraries
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    puts("Introducing header files");

//    return 0;
// }


//==============================================
// 12.1 adding comments
/* 
   Sample source code file for C Essential Training
   @Zahidul Islam
   August 20, 2020
   This code outputs a message
 */

// #include <stdio.h> //comment to a preprocessor directive

/* This code contains only the main() function */
// int main()
// {
//    puts("I can generate text all day long.");	

//    return(0);
// }


//==============================================
// 12.2 adding comments
/********************************************************
 *  Sample source code file for C Essential Training	*
 *  Zahidul Islam Jewel                             	*
 *  August 20, 2020                              		*
 *  This code outputs a message                     	*
 ********************************************************/
//#include <stdio.h>

/***********************************************/
/* This code contains only the main() function */
/***********************************************/

//int main()
//{
//    puts("I can generate text all day long.");
//
//    return(0);
//}


//==============================================
// 12.3 adding comments
/* Sample source code file for C Essential Training */
/* Zahidul Islam */
/* August 20, 2020 */
/* This code outputs a message */

//#include <stdio.h>
//
//int main()
//{
//	puts("I can generate text all day long.");
//
//    return(0);
//}


//==============================================
// 13. challenge - comment code
/*
 * Author: Zahidul Islam Jewel
 * Date: August 20, 2020
 * This code is demonstration of comments
 */

//#include <stdio.h>
//
//int main()
//{
//    int a,b;
//
//    printf("Type a positive value: ");
//    scanf("%d",&b);
//    for(a=0;a<b;a++)
//    {
//        printf("I must do this %d times\n",b);
//        if(a==9)
//            break;
//    }
//
//    return(0);
//}


//==============================================
// 16.1 using constants
/* #include <stdio.h>

int main()
{
   int a;

   a = 4+5;
   printf("4 + 5 = %d\n",a);

   return(0);
} */


//==============================================
// 16.2 using constants
/* #include <stdio.h>

int main()
{
   putchar('H');
   putchar('e');
   putchar('l');
   putchar('l');
   putchar('o');
   putchar('\n');

   return(0);
} */


//==============================================
// 16.3 using constants
/* #include <stdio.h>

int main()
{
   const char greetings[] = "String literal";

   puts(greetings);

   return(0);
} */


//==============================================
// 16.4 using constants
/* #include <stdio.h>

#define greetings "Constant Expression"

int main()
{
   puts(greetings);

   return(0);
} */


//==============================================
// 16.5 using constants
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int x,r[5];

   srand((unsigned)time(NULL)); // seed function for rand()

   for(x=0;x<5;x++)
       r[x] = rand()%10+1;

   printf("Here are your %d random values:\n",5);
   for(x=0;x<5;x++)
       printf("%3d\n",r[x]);

   return(0);
} */


//==============================================
// 16.6 using constants
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int n = 5;
   int x,r[n];

   srand((unsigned)time(NULL));

   for(x=0;x<n;x++)
       r[x] = rand()%10+1;

   printf("Here are your %d random values:\n",n);
   for(x=0;x<n;x++)
       printf("%3d\n",r[x]);

   return(0);
} */


//==============================================
// 16.7 using constants
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ITEMS 10

int main()
{
   int x,r[ITEMS];

   srand((unsigned)time(NULL));

   for(x=0;x<ITEMS;x++)
       r[x] = rand()%10+1;

   printf("Here are your %d random values:\n",ITEMS);
   for(x=0;x<ITEMS;x++)
       printf("%3d\n",r[x]);

   return(0);
} */


//==============================================
// 18.1 declaring variables
/* #include <stdio.h>

int main()
{
   char a;
   int b;
   float c;
   double d;

   a = 'A';
   b = 2;
   c = 0.25;
   d = 2.5e6;

   printf("a is %c\n",a);
   printf("b is %d\n",b);
   printf("c is %f\n",c);
   printf("d is %f\n",d);

   return(0);
} */


//==============================================
// 18.2 declaring variables
/* #include <stdio.h>

int main()
{
   char a = 'A';
   int b = 2;
   float c = 0.25;
   double d = 2500000.0;

   printf("a is %c\n",a);
   printf("b is %d\n",b);
   printf("c is %f\n",c);
   printf("d is %f\n",d);

   return(0);
} */


//==============================================
// 18.3 declaring variables
/* #include <stdio.h>

int main()
{
   char a,b,c,d,e;

   a = 'H';
   b = 'e';
   c = 'l';
   d = 'o';
   e = '\n';

   printf("%c%c%c%c%c%c",a,b,c,c,d,e);

   return(0);
} */


//==============================================
// 18.4 declaring variables
/* #include <stdio.h>

int main()
{
   float x;

   printf("The value of %f is unknown\n",x);

   x = 3.141;

   printf("The value of %f is known\n",x);

   return(0);
} */


//==============================================
// 19. challenge - make variables and constants
/* #include <stdio.h>

int main()
{
   int a = 16;
   const char b = 'Z';

   printf("Here is the value of A: %d\n",a);
   printf("Here is the value of B: %c\n",b);

   return(0);
} */


//==============================================
// 21.1 understanding variable scope, auto
// # keywords to define storage class
// # auto - local and private to the function, local scope
// # extern - exists outside i.e external of any function, global scope
// # static - scope is limited to function but value retained

/* #include <stdio.h>

void sum(void)
{
   auto int a,b; // auto keyword is redundant here, so not needed

   a = 91; b = 7;
   printf("%d / %d = %d\n",a,b,a/b);
}

int main()
{
   puts("Calling the sum() function:");
   sum();
   puts("done");

   return(0);
} */


//==============================================
// 21.2 understanding variable scope, auto
/* #include <stdio.h>

void sum(void)
{
   int a,b;

   a = 91; b = 7;
   printf("%d / %d = %d\n",a,b,a/b);
}

int main()
{
   int a,b;

   puts("Calling the sum() function:");
   sum();
   puts("And in main():");
   printf("%d / %d = %d\n",a,b,a/b);

   return(0);
} */


//==============================================
// 21.3 understanding variable scope, extern
/* #include <stdio.h>

int a,b;

void sum(void)
{
   extern int a,b;

   a = 91; b = 7;
   printf("%d / %d = %d\n",a,b,a/b);
}

int main()
{
   extern int a,b;

   puts("Calling the sum() function:");
   sum();
   puts("And in main():");
   printf("%d / %d = %d\n",a,b,a/b);

   return(0);
} */


//==============================================
// 21.4 understanding variable scope, static
/* #include <stdio.h>

char *myName()
{
   // char me[] = "Zahidul Islam"; // wrong output
   static char me[] = "Zahidul Islam"; // retained in memory even after function return

   return(me);
}

int main()
{
	char *author = myName();
	printf("Author name is %s\n", author);

   return(0);
} */


//==============================================
// 22.1 making new variables
// defined variabl types i.e typedef
// eg. time_t [data type for storing clock tick values since January 1, 1970]

/* #include <stdio.h>
#include <time.h>

int main()
{
   time_t now;

   time(&now);
   printf("%s",ctime(&now));

   return(0);
} */


//==============================================
// 22.2 making new variables
// typedef alias
/* #include <stdio.h>

typedef float radius;

int main()
{
   // typedef float radius;
   radius a;

   a = 27.5;

   printf("A circle with radius %.2f has an area of  %.2f\n",
          a,
          a*a*3.1415926
   );

   return(0);
} */


//==============================================
// 23.1 using typedef with structures
/* #include <stdio.h>
#include <string.h>

int main()
{
   struct Person {
       char name[32];
       int iq;
   };
   struct Person me;

   strcpy(me.name,"Zahidul Islam");
   me.iq = 567;

   printf("%s has an IQ of %d\n",me.name,me.iq);

   return(0);
} */


//==============================================
// 23.2 using typedef with structures
/* #include <stdio.h>
#include <string.h>

int main()
{
   struct Person {
       char name[32];
       int iq;
   };
   typedef struct Person Human;
   Human me;

   strcpy(me.name,"Zahidul Islam");
   me.iq = 567;

   printf("%s has an IQ of %d\n",me.name,me.iq);

   return(0);
} */


//==============================================
// 25.1 specifying integers and real numbers
/* #include <stdio.h>

int main()
{
   printf("%f\n",2.5E6); // 2.5 x 10^6
   printf("%f\n",2.5e-6); // 2.5 x 10^-6

   return(0);
} */


//==============================================
// 25.2 specifying integers and real numbers
/* #include <stdio.h>

int main()
{
   int x,o,b;

   for(x=0x1; x<=0x10; x++)
       printf("0x%X = %d\n",x,x);
   
   for(o=01; o<=010; o++)
       printf("0%o = %d\n",o,o);
   
   for(b=0b1; b<=0b1010; b++)
       printf("0b%b = %d\n",b,b);

   return(0);
} */


//==============================================
// 26.1 typecasting a variable
/* #include <stdio.h>

int main() {
   int a, b;

   a = 100;
   b = 7;

   printf("%d / %d = %f\n", a, b,(float)a / b);

   return 0;
} */


//==============================================
// 26.2 typecasting a variable
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int x,r[5];

   srand((unsigned)time(NULL));

   for(x=0;x<5;x++)
       r[x] = rand()%10+1;

   printf("Here are your %d random values:\n",5);
   for(x=0;x<5;x++)
       printf("%3d\n",r[x]);

   return(0);
} */


//==============================================
// 28.1 putting math operators to work
/* #include <stdio.h>

int main()
{
   int a,b;

   a = 18;
   b = 3;

   puts("Basic math");
   printf("%d + %d = %d\n",a,b,a+b);
   printf("%d - %d = %d\n",a,b,a-b);
   printf("%d * %d = %d\n",a,b,a*b);
   printf("%d / %d = %d\n",a,b,a/b);

   return(0);
} */


//==============================================
// 28.2 putting math operators to work
/* #include <stdio.h>

int main()
{
   int a,b;

   a = 10;
   b = a;

   printf("a is %d, b is %d\n",a,b);
   a++;
   b--;
   printf("a is %d, b is %d\n",a,b);

   return(0);
} */


//==============================================
// 28.3 putting math operators to work
/* #include <stdio.h>

int main()
{
   int a,b;

   a = 10;
   b = a;

   printf("a is %d, b is %d\n",a++,b--);
   printf("a is %d, b is %d\n",a,b);
   printf("a is %d, b is %d\n",++a,--b);

   return(0);
} */


//==============================================
// 28.4 putting math operators to work
/* #include <stdio.h>

int main()
{
   int x,a;

   for(x=1; x<=10; x++)
   {
       a = x % 2;
       printf("%2d %% 2 = %d\n",x,a);
   }

   return(0);
} */


//==============================================
// 29. challenge - do some math
/* #include <stdio.h>

int main()
{
   int a,c;
   float b;

   a = 15;
   b = a/2.0;
   c = b * 4;

   printf("Value of variable A = %d\n",a);
   printf("Value of variable B = %f\n",b);
   printf("value of vairable C = %d\n",c);

   return(0);
} */


//==============================================
// 31.1 using assignment operators
/* #include <stdio.h>

int main()
{
   int a = 25;;

   printf("The value of a is %d\n",a);
   a = a + 5;
   printf("The value of a is %d\n",a);
   a = a - 5;
   printf("The value of a is %d\n",a);
   a = a * 5;
   printf("The value of a is %d\n",a);
   a = a / 5;
   printf("The value of a is %d\n",a);

   return(0);
} */


//==============================================
// 31.2 using assignment operators
/* #include <stdio.h>

int main()
{
   int a = 25;

   printf("The value of a is %d\n",a);
   a += 5;
   printf("The value of a is %d\n",a);
   a -= 5;
   printf("The value of a is %d\n",a);
   a *= 5;
   printf("The value of a is %d\n",a);
   a /= 5;
   printf("The value of a is %d\n",a);

   return(0);
} */


//==============================================
// 32. obeying the order of precedence
/* #include <stdio.h>

int main()
{
   int a;

   a = 6 / 2 * (1 + 2);
   printf("The people who said %d are correct.\n",a);

   return(0);
} */


//==============================================
// 33. challenge - get the order correct
/* #include <stdio.h>

int main()
{
   int artifacts,rooms,paintings,sculptures;

   rooms = 12;
   paintings = 16;
   sculptures = 4;

   artifacts = rooms * (paintings + sculptures);

   printf("This museum has %d artifacts\n",artifacts);

   return(0);
} */


//==============================================
// 35.1 working with relational operators
/* #include <stdio.h>

int main()
{
   int a;

   printf("Type a value: ");
   scanf("%d",&a);
   if( a < 10 )
   {
       puts("You typed a value less than 10");
   }
   puts("Thank you");

   return(0);
} */


//==============================================
// 35.2 working with relational operators
/* #include <stdio.h>

int main()
{
   int a;

   for(a=0;a<=20;a++)
   {
       puts("Help! I'm trapped in the computer!");
   }

   return(0);
} */


//==============================================
// 35.3 working with relational operators
/* #include <stdio.h>

int main()
{
   int a = 0;

   while( a <= 20 )
   {
       puts("Good day to you!");
       a++;
       if( a == 10 )
           break;
   }

   return(0);
} */


//==============================================
// 36.1 using logical operators
/* #include <stdio.h>

int main()
{
   int a = 1;

   while(a <= 20)
   {
       if( a > 6 && a < 15 )
           putchar('*');
       printf("%d\n",a);
       a++;
   }

   return(0);
} */


//==============================================
// 36.2 using logical operators
/* #include <stdio.h>

int main()
{
   int a;

   a = 1;

   while( a <= 20)
   {
       if( a <= 5 || a >= 16 || a == 10 )
           putchar('*');
       printf("%d\n",a);
       a++;
   }

   return(0);
} */


//==============================================
// 37.1 understanding bitwise operators
/* #include <stdio.h>

char *binString(unsigned short n)
{
   static char bin[17];
   int x;

   for(x=0;x<16;x++)
   {
       bin[x] = n & 0x8000 ? '1' : '0'; // Ox8000 ~ 32768d
	   // e.g. n = 0000 0000 0000 1010
	   // 0x8000 = 1000 0000 0000 0000
       n <<= 1; // n = n << 1;
   }
   bin[16] = '\0';

   return(bin);
}

int main()
{
   unsigned short a,b,c;

   a = 0xAAAA;
   b = 0x00FF;

   printf("Start: %04X - %s\n",a,binString(a));
   printf("     & %04X - %s\n",b,binString(b));
   c = a & b;
   printf("  End: %04X - %s\n",c,binString(c));

   return(0);
} */


//==============================================
// 37.2 understanding bitwise operators
/* #include <stdio.h>

char *binString(unsigned short n)
{
   static char bin[17];
   int x;

   for(x=0;x<16;x++)
   {
       bin[x] = n & 0x8000 ? '1' : '0';
       n <<= 1;
   }
   bin[16] = '\0';

   return(bin);
}

int main()
{
   unsigned short a,b,c;

   a = 0xAAAA;
   b = 0x5555;

   printf("Start: %04X - %s\n",a,binString(a));
   printf("     & %04X - %s\n",b,binString(b));
   c = a | b;
   printf("  End: %04X - %s\n",c,binString(c));

   return(0);
} */


//==============================================
// 37.3 understanding bitwise operators
/* #include <stdio.h>

char *binString(unsigned short n)
{
   static char bin[17];
   int x;

   for(x=0;x<16;x++)
   {
       bin[x] = n & 0x8000 ? '1' : '0';
       n <<= 1;
   }
   bin[16] = '\0';

   return(bin);
}

int main()
{
   unsigned short a,b,c;

   a = 0xAAAA;
   b = 0x55FF;

   printf("Start: %04X - %s\n",a,binString(a));
   printf("     ^ %04X - %s\n",b,binString(b));
   c = a ^ b;
   printf("     ^ %04X - %s\n",c,binString(c));
   a = c ^ b;
   printf("Start: %04X - %s\n",a,binString(a));

   return(0);
} */


//==============================================
// 37.4 understanding bitwise operators
/* #include <stdio.h>

char *binString(unsigned short n)
{
   static char bin[17];
   int x;

   for(x=0;x<16;x++)
   {
       bin[x] = n & 0x8000 ? '1' : '0';
       n <<= 1;
   }
   bin[16] = '\0';

   return(bin);
}

int main()
{
   unsigned short a,b;

   a = 0xAAAA;

   printf("Start: %04X - %s\n",a,binString(a));
   b = ~a;
   printf("  End: %04X - %s\n",b,binString(b));

   return(0);
} */


//==============================================
// 38.1 shifting bits
/* #include <stdio.h>

char *binString(unsigned short n)
{
   static char bin[17];
   int x;

   for(x=0;x<16;x++)
   {
       bin[x] = n & 0x8000 ? '1' : '0';
       n <<= 1;
   }
   bin[16] = '\0';

   return(bin);
}

int main()
{
   unsigned short a;
   int x;

   a = 0x0003;

   for(x=0;x<16;x++)
   {
       printf("%04X - %s\n",a,binString(a));
       a = a << 1;
   }

   return(0);
} */


//==============================================
// 38.1 shifting bits, left shift
/* #include <stdio.h>

int main()
{
   int a = 1;

   while(a < 33000)
   {
       printf("%d\n",a);
       a = a << 1;
   }

   return(0);
} */


//==============================================
// 38.1 shifting bits, right shift
/* #include <stdio.h>

int main()
{
   int a = 1000000;

   while(a > 0)
   {
       printf("%d\n",a);
       a = a >> 1;
   }

   return(0);
} */


//==============================================
// 39.1 exploring unary operators, sizeof
// 'sizeof' operator returns'size_t' type value
// 'size_t' is a data type defined in stdio.h
/* #include <stdio.h>

int main()
{
   char a;
   int b;
   float c;
   double d;
   char string[] = "Hello!";
   int buffer[10];

   printf("char variable 'a' uses %lu bytes\n",sizeof(a));
   printf("int variable 'b' uses %lu bytes\n",sizeof(b));
   printf("float variable 'c' uses %lu bytes\n",sizeof(c));
   printf("double variable 'd' uses %lu bytes\n",sizeof(d));
   printf("string array 'string' uses %lu bytes\n",sizeof(string));
   printf("int buffer 'buffer' uses %lu bytes\n",sizeof(buffer));

   return(0);
} */


//==============================================
// 39.2 exploring unary operators
/* #include <stdio.h>

int main()
{
   int a;

   for(a=0;a<20;a++)
   {
       if( !(a<10) )
           putchar('*');
       printf("%d\n",a);
   }

   return(0);
} */


//==============================================
// 39.3 exploring unary operators
/* #include <stdio.h>

int main()
{
   int a,b;

   a = +50;
   b = -10;

   printf("%d + %d = %d\n",a,b,a+b);

   return(0);
} */


//==============================================
// 39.4 exploring unary operators
/* #include <stdio.h>

int main()
{
   int a,b;

   a = 50;
   b = 10;

   printf("%d + %d = %d\n",+a,-b,+a+-b);

   return(0);
} */


//==============================================
// 40.1 making a decision
/* #include <stdio.h>

int main()
{
   int a;

   printf("Type a value: ");
   scanf("%d",&a);
   if( a < 10 )
   {
      puts("You typed a value less than 10");
   }
   puts("Thank you");

   return(0);
} */


//==============================================
// 40.2 making a decision
/* #include <stdio.h>

int main()
{
   int a;

   printf("Type a value: ");
   scanf("%d",&a);
   if( a < 10 )
   {
       puts("You typed a value less than 10");
       a -= 5;
       printf("The value is now %d\n",a);
   }
   puts("Thank you");

   return(0);
} */


//==============================================
// 40.3 making a decision
/* #include <stdio.h>

int main()
{
   int a = 1;

   while(a <= 20)
   {
       if( a > 6 )
       {
           if( a < 15 )
               putchar('*');
       }
       printf("%d\n",a);
       a++;
   }

   return(0);
} */


//==============================================
// 40.4 making a decision
/* #include <stdio.h>

int main()
{
   int a = 1;

   while(a <= 20)
   {
       if( a > 6 && a < 15 )
           putchar('*');
       printf("%d\n",a);
       a++;
   }

   return(0);
} */


//==============================================
// 41.1 exploring the possibilities
/* #include <stdio.h>

int main()
{
   int a,b;

   printf("Enter value 1: ");
   scanf("%d",&a);
   printf("Enter value 2: ");
   scanf("%d",&b);
   if( a > b )
       printf("%d is greater than %d\n",a,b);
   else
       printf("%d is greater than %d\n",b,a);

   return(0);
} */


//==============================================
// 41.2 exploring the possibilities
/* #include <stdio.h>

int main()
{
   int a,b;

   printf("Enter value 1: ");
   scanf("%d",&a);
   printf("Enter value 2: ");
   scanf("%d",&b);
   if( a > b )
       printf("%d is greater than %d\n",a,b);
   else if( b > a )
       printf("%d is greater than %d\n",b,a);
   else
       printf("%d is equal to %d\n",a,b);

   return(0);
} */


//==============================================
// 41.3 exploring the possibilities
/* #include <stdio.h>

int main()
{
   char a;

   printf("Type a character: ");
   scanf("%c",&a);

   if( a >= 'a' && a <= 'z' )
       puts("You typed a lowercase letter");
   else if( a >= 'A' && a <= 'Z' )
       puts("You typed an uppercase letter");
   else if( a >= '0' && a <= '9' )
       puts("You typed a number");
   else if( a == ' ' )
       puts("You typed a space");
   else
       printf("You typed the %c symbol\n",a);

   return(0);
} */


//==============================================
// 42. challenge - select an item
/* #include <stdio.h>

int main()
{
   int a;

   printf("Select item 1, 2, or 3: ");
   scanf("%d",&a);

   if( a == 1 )
       puts("This is the first item");
   else if( a == 2 )
       puts("This is the second item");
   else if( a == 3)
       puts("This is the third item");
   else
       puts("Invalid choice!");

   return(0);
} */


//==============================================
// 44.1 using the ternary operator
/* #include <stdio.h>

int main()
{
   int a,b,c;

   a = 10;
   b = 14;
   if( a > b )
       c = a;
   else
       c = b;
   printf("%d is the greater of %d and %d\n",c,a,b);

   return(0);
} */


//==============================================
// 44.2 using the ternary operator
// '?:' => ternary operator ~ elvis operator
/* #include <stdio.h>

int main()
{
   int a,b,c;

   a = 10;
   b = 14;
   c = ( a > b ) ? a : b;
   printf("%d is the greater of %d and %d\n",c,a,b);

   return(0);
} */


//==============================================
// 44.3 using the ternary operator
/* #include <stdio.h>

int main()
{
   int x;

   for(x=1; x<=10; x++)
   {
       printf("%d - %s\n",x,x % 2 ? "odd" : "even");
   }

   return(0);
} */


//==============================================
// 45.1 working with the switch case structure
/* #include <stdio.h>

int main()
{
   int a;

   printf("Select item 1, 2, or 3: ");
   scanf("%d",&a);

   switch(a)
   {
       case 1:
           puts("This is the first item");
           break;
       case 2:
           puts("This is the second item");
           break;
       case 3:
           puts("You chose the third item");
           break;
       default:
           puts("Invalid choice");
   }

   return(0);
} */


//==============================================
// 45.2 working with the switch case structure
/* #include <stdio.h>

int main()
{
   char a;

   puts("Menu");
   puts("A - Bugs");
   puts("B - Snake Surprise");
   puts("C - Eyeball Soup");
   printf("Your choice: ");
   scanf("%c",&a);

   switch(a)
   {
       case 'A':
       case 'a':
           puts("Delicious! A hearty snack.");
           break;
       case 'B':
       case 'b':
           puts("A family favorite!");
           break;
       case 'C':
       case 'c':
           puts("From a secret recipe.");
           break;
       default:
           puts("Invalid choice");
   }

   return(0);
} */


//==============================================
// 46.1 creating a for loop
/* #include <stdio.h>

int main()
{
   int a;

   for(a = 0; a < 10; a++ )
   {
       puts("I must do this 10 times");
   }

   return(0);
} */


//==============================================
// 46.2 creating a for loop
/* #include <stdio.h>

int main()
{
   int a,b;

   printf("Type a positive value: ");
   scanf("%d",&b);
   for(a=0; a<b; a++ )
       printf("I must do this %d times\n",b);

   return(0);
} */


//==============================================
// 46.3 creating a for loop
/* #include <stdio.h>

int main()
{
   int a,b;

   for(a=1, b=10; a<=10; a++, b-- )
       printf("%2d %2d\n",a,b);

   return(0);
} */


//==============================================
// 46.4 creating a for loop
/* #include <stdio.h>

int main()
{
   int a,b;

   b = 10;
   for(a=1; a<10; a++)
   {
       printf("%2d %2d\n",a,b);
       b--;
   }

   return(0);
} */


//==============================================
// 46.5 creating a for loop
/* #include <stdio.h>

int main()
{
   int a,b;

   b = 10;
   a = 1;
   for(;a<10;)
   {
       printf("%2d %2d\n",a,b);
       b--;
       a++;
   }

   return(0);
} */


//==============================================
// 47.1 setting up a while loop
/* #include <stdio.h>

int main()
{
   int a;

   a = 0;
   while(a < 10)
   {
       puts("I must do this 10 times");
       a++;
   }

   return(0);
} */


//==============================================
// 47.2 setting up a while loop
/* #include <stdio.h>

int main()
{
   int a = 10;
   while(a >= 0)
   {
       printf("Countdown: %d\n",a);
       a--;
   }

   return(0);
} */


//==============================================
// 47.3 setting up a do while loop
/* #include <stdio.h>

int main()
{
   int a;

   printf("Enter a value: ");
   scanf("%d",&a);

   do
   {
       puts("Here we go!");
       a--;
   } while(a > 0);

   return(0);
} */


//==============================================
// 48.1 challenge - repeat some text
/* #include <stdio.h>

int main()
{
   int a;

   printf("How long is the line? ");
   scanf("%d",&a);

   int i;
   for(i=0;i<a;i++)
   {
       putchar('-');
   }
   putchar('\n');

   return(0);
} */


//==============================================
// 48.2 challenge - repeat some text
/* #include <stdio.h>

int main()
{
   int a;

   printf("How long is the line? ");
   scanf("%d",&a);

   int i=0;
   while (i<a)
   {
       putchar('-');
       i++;
   }
   putchar('\n');

   return(0);
} */


//==============================================
// 50.1 nesting loops - for 
/* #include <stdio.h>

int main()
{
   int row;
   char column;

   for(row=1; row<=10; row++)
   {
       for(column='A'; column<='J'; column++)
       {
           printf("%2d%c   ", row, column);
       }
       putchar('\n');
   }

   return(0);
} */


//==============================================
// 50.1 nesting loops - while
/* #include <stdio.h>

int main()
{
   int row;
   char column;

   row = 1;
   while(row<=10)
   {
       column = 'A';
       while(column<='J')
       {
           printf("%2d%c   ",row,column);
           column++;
       }
       putchar('\n');
       row++;
   }

   return(0);
} */


//==============================================
// 51.1 breaking out of a loop
/* #include <stdio.h>

int main()
{
   int a,b;

   printf("Type a positive value: ");
   scanf("%d",&b);
   for(a=0;a<b;a++)
   {
       printf("I must do this %d times\n",b);
       if(a==9)
           break;
   }

   return(0);
} */


//==============================================
// 51.2 breaking out of a loop
/* #include <stdio.h>

int main()
{
   int row;
   char column;

   for(row=1;row<=10;row++)
   {
       for(column='A';column<='J';column++)
       {
           printf("%2d%c   ",row,column);
           if(column=='E')
               break;
       }
       putchar('\n');
   }

   return(0);
} */


//==============================================
// 51.3 breaking out of a loop
/* #include <stdio.h>

int main()
{
   int ch;

   puts("Type 0 to end:");
   while(1)
   {
       ch = getchar();
       if( ch == '0')
           break;
       putchar(ch);
   }

   return(0);
} */

//==============================================
// 51.4 breaking out of a forever loop
/* #include <stdio.h>

int main()
{
   int ch;

   puts("Type 0 to end:");
   for(;;)
   {
       ch = getchar();
       if( ch == '0')
           break;
       putchar(ch);
   }

   return(0);
} */


//==============================================
// 51.5 breaking out of a loop
/* #include <stdio.h>

int main()
{
   int a;

   a = 0;
   while(1)
   {
       a++;
       printf("%d\n",a);
       if( a < 10 )
           continue;
       a++;
       if( a > 20 )
           break;
   }

   return(0);
} */


//==============================================
// 52.1 avoiding the goto keyword
/* #include <stdio.h>

int main()
{
   int a = 10;

here:
   printf("%d\n",a);
   a--;
   if( a > 0 )
       goto here;

   return(0);
} */


//==============================================
// 52.2 avoiding the goto keyword
/* #include <stdio.h>

int main()
{
   int a = 10;

here:
   printf("%d\n",a);
   a--;
   if( a == 4 )
       goto there;
   if( a > 0 )
       goto here;
there:

   return(0);
} */


//==============================================
// 54.1 prototyping a function
/* #include <stdio.h>

void sum(void)
{
   int a,b;

   a = 91; b = 7;
   printf("%d / %d = %d\n",a,b,a/b);
}

int main()
{
   puts("Calling the sum() function:");
   sum();
   puts("done");

   return(0);
} */


//==============================================
// 54.2 prototyping a function
/* #include <stdio.h>

void sum(void);

int main()
{
   puts("Calling the sum() function:");
   sum();
   puts("done");

   return(0);
}

void sum(void)
{
   int a,b;

   a = 91; b = 7;
   printf("%d / %d = %d\n",a,b,a/b);
} */


//==============================================
// 54.3 prototyping a function
/* #include <stdio.h>

void pressAny(void)
{
   printf("Press any key to continue: ");
   getchar();
}

int main()
{
   puts("Carefully read these directions!");
   pressAny();
   puts("Are you sure you read the directions?");
   pressAny();
   puts("Okay. I'm sure you're sure.");
   pressAny();

   return(0);
} */


//==============================================
// 54.4 prototyping a function
/* #include <stdio.h>

int main()
{
   puts("Carefully read these directions!");
   printf("Press any key to continue: ");
   getchar();
   puts("Are you sure you read the directions?");
   printf("Press any key to continue: ");
   getchar();
   puts("Okay. I'm sure you're sure.");
   printf("Press any key to continue: ");
   getchar();

   return(0);
} */ 


//==============================================
// 55. challenge - writing a function
/* #include <stdio.h>

void line(void);

int main()
{
   puts("How to Fight Off a Robot Attack");
   line();
   puts("A Survival Guide for the 21st Century");
   line();

   return(0);
}

void line(void)
{
   int a;

   for(a=0;a<40;a++)
       putchar('-');
   putchar('\n');
} */


//==============================================
// 57.1 returning a value from a function
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(void)
{
   char r;

   r = rand() % 26;
   r += 'A';

   return(r);
}

int main()
{
   int a;
   
   srand((unsigned)time(NULL) ); // seed the randomizer

   printf("Today's random word: ");
   for(a=0;a<7;a++)
       putchar( randchar() );
   putchar('\n');

   return(0);
} */


//==============================================
// 57.2 returning a value from a function
/* #include <stdio.h>
#include <time.h>

void greetings(void)
{
   time_t now;
   struct tm *today;

   time(&now);
   today = localtime(&now);

   if(today->tm_hour > 16)
   {
       puts("Good Evening");
       return;
   }
   puts("It's not evening");
}

int main()
{
   greetings();

   return(0);
} */

//==============================================
// 57.3 returning a value from a function
/* #include <stdio.h>
#include <time.h>

void printCurrentTime(void)
{
   time_t now;
   struct tm *today;

   time(&now);
   today = localtime(&now);   

   printf("%s\n", ctime(today));
   printf("%02d:%02d:%02d\n", today->tm_hour, today->tm_min, today->tm_sec);
}

int main()
{
   printCurrentTime();

   return(0);
} */


//==============================================
// 58. challenge - returning a value
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(void)
{
   int r;

   r = rand() % 6;
   r += 1;

   return(r);
}

int main()
{
   int dice1,dice2,dice3;

   srand((unsigned)time(NULL)); // seed the randomizer

   dice1 = roll();
   dice2 = roll();
   dice3 = roll();
   printf("You rolled %d - %d - %d\n",dice1,dice2,dice3);

   return(0);
} */


//==============================================
// 60.1 passing arguments to a function
/* #include <stdio.h>

void repeat(int count)
{
   int x;

   for(x=0; x<count; x++)
       printf("Blah ");
   putchar('\n');
}

int main()
{
   printf("Chris said: ");
   repeat(1);
   printf("Pat said: ");
   repeat(3);

   return(0);
} */


//==============================================
// 60.2 passing arguments to a function
/* #include <stdio.h>

float average(float a, float b, float c)
{
   float avg;

   avg = ( a + b + c ) / 3;

   return(avg);
}

int main()
{
   float a;

   a = average( 29.0, 37.0, 30.2 );
   printf("The average of 29.0, 37.0 and 30.2 is %.2f\n",a);

   return(0);
} */


//==============================================
// 61. challenge - passing values
/* #include <stdio.h>

void line(int length, char c)
{
   int a;

   for( a=0; a<length; a++)
       putchar(c);
   putchar('\n');
}

int main()
{
   puts("Report on Extraterrestrial Activity");
   line(35,'-');

   return(0);
} */


//==============================================
// 63.1 retaining values in a function
/* #include <stdio.h>

void funct(void)
{
   int a = 16;

   printf("In funct(), A = %d\n",a);
}

int main()
{
   int a = 10;

   printf("In main(), A = %d\n",a);
   funct();
   printf("In main(), A = %d\n",a);

   return(0);
} */


//==============================================
// 63.2 retaining values in a function
/* #include <stdio.h>

int funct(void)
{
   // int a = 0;
   static int a = 0;

   a += 16;
   printf("In funct(), A = %d\n",a);

   return(a);
}

int main()
{
   int a;

   a = funct();
   printf("In main(), A = %d\n",a);
   a = funct();
   printf("In main(), A = %d\n",a);
   a = funct();
   printf("In main(), A = %d\n",a);

   return(0);
} */


//==============================================
// 64.1 creating recursive functions
/* #include <stdio.h>

void recurse(int a)
{
   a++;
   printf("%d\n",a);
   if(a==5)
       return;
   recurse(a);
}

int main()
{
   recurse(0);

   return(0);
} */


//==============================================
// 64.2 creating recursive functions
/* #include <stdio.h>

void recurse(int v)
{
   int a;

   for(a=0;a<v;a++)
       putchar('-');
   puts("-> Wind-up!");

   if( v == 10 )
       return;

   recurse(v+1);

   for(a=0;a<v;a++)
       putchar('-');
   puts("-< Unwinding");
}

int main()
{
   recurse(0);

   return(0);
} */


//==============================================
// 64.3 creating recursive functions, star pattern
/* #include <stdio.h>

void recurse(int v)
{
   int a;

   for(a=0;a<v;a++)
       putchar('*');
   putchar('\n');

   if( v == 10 )
       return;

   recurse(v+1);

   for(a=0;a<v;a++)
       putchar('*');
   putchar('\n');
}

int main()
{
   recurse(0);

   return(0);
} */


//==============================================
// 64.3 creating recursive functions
#include <stdio.h>

int factorial(int f)
{
    if(f == 1)
        return f;
    return  f * factorial(f-1);
}

int main()
{
    int a,b;

    printf("Enter a positive value: ");
    scanf("%d",&a);
    if( a < 1 )
    {
        printf("%d is not a positive value\n",a);
        return(1);
    }
    b = factorial(a);
    printf("The factorial of %d is %d\n",a,b);

    return(0);
}
