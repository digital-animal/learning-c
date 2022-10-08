//====================================================
//============= Learning C - Dan Gookin ==============
//====================================================
// 04. compiling a sample program
/* #include <stdio.h>

int main() {
   printf("Hello, World!\n");
   return 0;
} */


//================================
// 06. introducing c code
/* int main()
{
   return 0;
} */


//================================
// 07. sending text to output
/* #include <stdio.h>

int main()
{
   puts("Welcome to C Programming");

   return 0;
} */


//================================
// 08. challenge - add a puts() statement
/* @Zahidul Islam
 * August 15, 2020 */
/* #include <stdio.h>

int main()
{
   puts("Welcome to C Programming");
   puts("C is a very powerful programming language");

   return 0;
} */


//====================================
// 11. exploring the printf() function
/* #include <stdio.h>

int main()
{
   printf("Welcome to C Programming\n");
   printf("C is a very powerful programming language");

   return 0;
} */


//====================================
// 12. challenge - add a new line
/* #include <stdio.h>

int main()
{
   printf("Welcome to C Programming\nI love to code in C");

   return 0;
} */


//====================================
// 14. working with escape sequence
/* #include <stdio.h>

int main()
{
   printf("This is line 1.\nThis is line 2.\n");
   printf("The word \"quote\" is escaped.\n");
   printf("C:\\Users\\Jewel81\\Desktop\\__C_CPP__\n");
   return 0;
} */


//====================================
// 15. challenge - use escape sequences
/* #include <stdio.h>

int main()
{
   printf("Animesh asked, \"Do you know where \'Madhabi\' is now?\"\n"
          "I could not reply.\n");

   return 0;
} */


//====================================
// 17. working with values and placeholders
/* #include <stdio.h>

int main()
{
   printf("Here is a string: 27\n");
   printf("Here is a value: %d\n", 27);
   printf("Everyone knows that %d+%d=%d\n", 2, 2, 2+2);
   printf("I am a %c %s\n", 'C', "Programmer");

   return 0;
} */


//====================================
// 19. experimenting with variables
/* #include <stdio.h>

int main()
{
   int age;
   char x,y,z;
   float pi;

   age=30;
   printf("The C language is over %d years old\n", age);
   age=35;
   printf("The C language is over %d years old\n", age);
   printf("\n");

   x='A';
   y='B';
   z='C';

   printf("It's as easy as %c%c%c\n",x,y,z);
   printf("\n");

   pi=22.0/7.0;
   printf("The ancients calculated PI as %.2f\n", pi);

   return 0;
} */


//====================================
// 20.1 using character i/o, getchar() and putchar()
/* #include <stdio.h>

int main()
{
   int c;

   printf("Type a character: ");
   c=getchar();

   // printf("You typed '%c' and it's ASCII code is %d\n", c, c);

   printf("You typed ");
   putchar(c);


   printf(" and it's ASCII code is %d", c);
   putchar('\n');

   return 0;
} */


//====================================
// 20.2 using character i/o, character stream
/* #include <stdio.h>

int main()
{
   int a, b;

   printf("Type two character: ");

   a=getchar();
   b=getchar();

   printf("You typed ");
   putchar(a);
   printf(" and ");
   putchar(b);

   putchar('\n');

   return 0;
} */


//====================================
// 20.3 using character i/o, stream buffer
/* #include <stdio.h>

int main()
{
   int a, b, c;

   printf("Type three character: ");
   
   a=getchar();
   putchar(a);
   putchar('-');

   b=getchar();
   putchar(b);
   putchar('-');

   c=getchar();
   putchar(c);

   putchar('\n');

   return 0;
} */

// stream output is buffered. computer waits until the buffer is full
// flushed before it actually send out the characters
// note: character i/o like getchar(), putchar()
// are stream oriented. they are not
// interactive alike scanf(), printf()


//====================================
// 21. exploring the scanf() function
/* #include <stdio.h>

int main()
{
   // int x;
   // float x;
   char x;

   // printf("Type an integer: ");
   // printf("Type a number: ");
   printf("Type a character: ");

   // scanf("%d", &x);
   // scanf("%f", &x);
   scanf("%c", &x);

   // printf("You've entered %d\n", x);
   // printf("You've entered %.2f\n", x);
   printf("You've entered %c\n", x);

   return 0;
} */


//====================================
// 22.1 working with strings
/* #include <stdio.h>

int main()
{
   // char password[]="p@ssword";
   char *password="p@ssword";

   printf("The password is '%s'\n",password);

   return 0;
} */


//====================================
// 22.2 string input
/* #include <stdio.h>
#include <string.h>

int main()
{
   char name[64]; // 63 characters + null(/0)

   printf("Enter your name: ");
   // scanf("%s", name); // buffer overflow
   // gets(name); // buffer overflow
   fgets(name,64,stdin); // safe, no buffer overflow

   // printf("Your name: '%s'\n", name);
   puts("Your name: ");
   puts(name);
   return 0;
} */

// note: the final character of a string is the..
// ..null character. null escape sequence is \0


//====================================
// 24. doing math
/* #include <stdio.h>
#include <math.h>

int main()
{
   int a;
   int b=5;

   printf("Input an integer: ");
   scanf("%d",&a);
   printf("%d+%d=%d\n",a,b,a+b);
   printf("%d-%d=%d\n",a,b,a-b);
   printf("%dx%d=%d\n",a,b,a*b);
   printf("%d/%d=%d\n",a,b,a/b);
   printf("%d%%%d=%d\n",a,b,a%b); // escaping modulus by '%'

   return 0;
} */


//====================================
// 25. making more calculations
/* #include <stdio.h>
#include <math.h>

int main()
{
   float r;
   float p;

   r=sqrt(2.0);
   // p=pow(2,8);
   p=pow(2.0,8.0);

   printf("The square root of 2 is %f\n",r);
   printf("2 to the 8th power is %f\n",p);

   return 0;
} */


//====================================
// 26. challenge - math quiz
/* #include <stdio.h>
#include <math.h>

int main()
{
   float a;
   float b;

   printf("Enter two numbers: ");
   scanf("%f %f",&a,&b);

   printf("%f+%f=%f\n",a,b,a+b);
   printf("%f-%f=%f\n",a,b,a-b);
   printf("%fx%f=%f\n",a,b,a*b);
   printf("%f/%f=%.2f\n",a,b,a/b);
   printf("%f^%f=%f\n",a,b,pow(a,b));
   printf("sqrt(%f)=%f\n",a,sqrt(a));
   printf("sqrt(%f)=%f\n",b,sqrt(b));

   return 0;
} */


//====================================
// 28. making a decision with if
/* #include <stdio.h>

int main()
{
   int a;
   printf("Enter an integer>> ");
   scanf("%d", &a);

   if(a>10)
   {
       printf("%d is greater than 10\n",a);
   }
   else if(a==10)
   {
       printf("%d is equal to 10\n",a);
   }
   else if(a<10)
   {
       printf("%d is less than 10\n",a);
   }

   return 0;
} */


//====================================
// 29. making multiple decisions
/* #include <stdio.h>

int main()
{
   char a;
   printf("Enter your choice (A,B,C)>> ");
   scanf("%c", &a);

   switch (a)
   {
       case 'A':
       case 'a':
           puts("Excellent choice!");
           break;
       case 'B':
       case 'b':
           puts("This is the most common choice.");
           break;
       case 'C':
       case 'c':
           puts("I question your decision.");
           break;
       default:
           puts("That's not a valid choice.");
   }

   return 0;
} */


//====================================
// 30. challenge - make a decision
/* #include <stdio.h>

int main()
{
   int choice;
   printf("Enter your choice (1,2,3)>> ");
   scanf("%d", &choice);

   switch (choice)
   {
       case 1:
           puts("Red");
           break;
       case 2:
           puts("Green");
           break;
       case 3:
           puts("Blue");
           break;
       default:
           puts("That's not a valid choice.");
   }

   return 0;
} */


//====================================
// 32.1 looping with while
/* #include <stdio.h>

int main()
{
   int x;
   x=1;

   while (x<=10)
   {
       printf("%d\n",x);
       x++;
   }
   return 0;
} */


//====================================
// 32.2 looping with do..while
/* #include <stdio.h>

int main()
{
   char ch;
   ch='A';

   do
   {
       putchar(ch);
       ch++;
   } while (ch!='Z');
   printf("\n");

   return 0;
} */


//====================================
// 32.3 infinite while loop
/* #include <stdio.h>

int main()
{
   while (1)
   {
       printf("I'm endlessly looping\n");
   }
   return 0;
} */


//====================================
// 32.4 while loop with break
/* #include <stdio.h>

int main()
{
   int i=0;
   while (1)
   {
       puts("Here I go..!");
       i++;
       if(i>10)
           break;
   }
   return 0;
} */


//========================================
// 33. representing chunks of code with for
/* #include <stdio.h>

int main()
{
   int i;

   for(i=0;i<10;i++)
   {
       printf("%d\n",i);
   }
   return 0;
} */


//========================================
// 34. challenge - output a series of numbers
/* #include <stdio.h>

int main()
{
   int i, k=-10;

   for(i=1;i<=20;i++)
   {
       printf("%d ",i);
   }
   printf("\n");

   while(k<=10)
   {
       printf("%d ",k);
       k+=2;
   }
   printf("\n");

   return 0;
} */


//========================================
// 36.1 nested loops - for loop
/* #include <stdio.h>

int main()
{
   char alpha;
   int numeric;

   for(alpha='A';alpha<'K';alpha++)
   {
       for(numeric=0;numeric<10;numeric++)
       {
           printf("%c-%d\t",alpha,numeric);
       }
       putchar('\n');
   }

   return 0;
} */


//========================================
// 36.2 nested loops - while loop
/* #include <stdio.h>

int main()
{
   char alpha;
   int numeric;

   alpha='A';
   while(alpha<'K')
   {
       numeric=0;
       while (numeric<10)
       {
           printf("%c-%d\t",alpha,numeric);
           numeric++;
       }
       putchar('\n');
       alpha++;
   }

   return 0;
}*/


//========================================
// 38. adding a function
/* #include <stdio.h>

void blorf(void);
void cheers(void);

void soup(void )
{
   puts("Soup!");
}

int main()
{
   puts("The main() function always runs first");
   blorf();
   puts("Thanks, blorf()");
   blorf();

   soup();
   putchar('\n');
   cheers();
   return 0;
}

void blorf(void)
{
   puts("\tThe blorf() function runs when it's called");
}

void cheers(void)
{
   int x;
   for(x=0;x<3;x++)
       printf("Huzzah!");
   putchar('\n');
} */


//========================================
// 39.1 passing values to a function
/* #include <stdio.h>

void repeat(int count);

int main()
{
   int a,b;
   a=1;
   b=5;

   puts("At first the raven was like..");
   // repeat(1);
   repeat(a);
   puts("But then he was all..");
   // repeat(5);
   repeat(b);

   return 0;
}

void repeat(int count)
{
   int x;
   for(x=0;x<count;x++)
       puts("Nevermore!");
} */


//========================================
// 39.2 passing multiple values to a function
/* #include <stdio.h>

void product(float x, float y, float z);

int main()
{
   float a,b,c;
   printf("Enter three numbers: ");
   scanf("%f %f %f",&a,&b,&c);
   product(a,b,c);

   return 0;
}

void product(float x, float y, float z)
{
   float f;
   f = x*y*z;
   printf("%.2f x %.2f x %.2f = %.2f \n", x, y, z, f);
} */


//========================================
// 39.3 different types of arguments
/* #include <stdio.h>

void bar(char c, int count);

int main()
{
   int x;
   for(x=1;x<11;x++)
      bar('*', x*2);

   return 0;
}

void bar(char c, int count)
{
   int x;
   for(x=0;x<count;x++)
       putchar(c);
   putchar('\n');
} */


//========================================
// 40. challenge - evaluate a number
/* #include <stdio.h>

void evaluate(int num);

int main()
{
   int x;
   printf("Enter a number: ");
   scanf("%d",&x);
   evaluate(x);

   return 0;
}

void evaluate(int num)
{
   if(num>10)
       printf("%d > 10\n", num);
   else if(num==10)
       printf("%d == 10\n", num);
   else if(num<10)
       printf("%d < 10\n", num);
} */


//========================================
// 42.1 return a value from a function
/* #include <stdio.h>

char gimmeAnA(void)
{
   return 'A';
}

int main()
{
   char grade;
   grade=gimmeAnA();
   printf("On this test you received an %c.\n",grade);

   return 0;
} */


//========================================
// 42.2 return product of numbers
/* #include <stdio.h>

float product(float x, float y, float z)
{
   return x*y*z;
}

int main()
{
   float a,b,c,result;

   printf("Enter three numbers: ");
   scanf("%f %f %f",&a,&b,&c);
   result = product(a,b,c);

   printf("%.2f x %.2f x %.2f = %.2f \n", a, b, c, result);

   return 0;
} */


//========================================
// 42.3 return maximum of two numbers
/* #include <stdio.h>

int max(int x,int y)
{
   if(x>y)
       return x;
   return y;
}

void isLarger(int big)
{
   printf("%d is larger\n", big);
}

int main()
{
   int a,b,result;

   printf("Enter two integers: ");
   scanf("%d %d",&a,&b);

   result = max(a,b);
   isLarger(result);

   return 0;
} */


//========================================
// 43.1 manipulating single character
/* #include <stdio.h>
#include <ctype.h>

int main()
{
   int ch='a';
   // char ch='a';

   printf("Original %c\n",ch);
   printf("Lowercase %c\n",tolower(ch));
   printf("Uppercase %c\n",toupper(ch));
   printf("Original %c\n",ch);
   printf("\n");

   printf("Original %d\n",ch);
   printf("Lowercase %d\n",tolower(ch));
   printf("Uppercase %d\n",toupper(ch));
   printf("Original %d\n",ch);

   return 0;
} */


//========================================
// 43.2 manipulating single character -  do..while loop
/* #include <stdio.h>
#include <ctype.h>

int main()
{
   int c;
   do
   {
       c=getchar();
       c=toupper(c);
       putchar(c);
   } while (c!='\n');

   return 0;
} */


//========================================
// 43.3 manipulating single character -  isalpha()
/* #include <stdio.h>
#include <ctype.h>

int main()
{
   int c;
   do
   {
       c=getchar();
       if(isalpha(c))
           putchar(c);

   } while (c!='\n');

   return 0;
} */


//========================================
// 43.3 manipulating single character -  isdigit()
/* #include <stdio.h>
#include <ctype.h>

int main()
{
   int c;
   do
   {
       c=getchar();
       if(isdigit(c))
           putchar(c);

   } while (c!='\n');

   return 0;
} */


//========================================
// 44. using logical operators
/* #include <stdio.h>

int iscaps(int ch)
{
   if(ch<65 || ch>90)
         return 0;
   else
         return 1;
}

int main()
{
   char c;
   do {
         c = getchar();
         if(iscaps(c))
            putchar(c);

   } while (c!='\n');

   return 0;
} */


//========================================
// 45.1 manipulating strings
/* #include <stdio.h>
#include <string.h>

int main()
{
   // char string[]="Just how long am I?";
   // char *string="Just how long am I?";
   const char *string="Just how long am I?";
   int len;

   len=strlen(string);
   printf("'%s' is %d characters long.\n", string, len);

   return 0;
} */


//========================================
// 45.2 string buffer, fgets()
/* #include <stdio.h>
#include <string.h>

int main()
{
   char input[64];
   int len;

   printf("Enter instructions: ");
   fgets(input, 64, stdin);
   len=strlen(input);

   printf("You typed %d characters of instructions.\n", len);

   return 0;
} */


//========================================
// 45.3 string concatenation
/* #include <stdio.h>
#include <string.h>

int main()
{
   char first[]="I would like to go ";
   char second[]="from here to there\n";
   char buffer[128];

   strcpy(buffer, first);
   strcat(buffer, second);
   // printf("%s\n", buffer);
   puts(buffer);

   return 0;
} */


//========================================
// 46. challenge - build a string
/* #include <stdio.h>
#include <string.h>

int main()
{
   char buffer[128];
   char str1[50];
   char str2[50];

   printf("Enter 1st string: ");
   fgets(str1, 50, stdin);
   printf("Enter 2nd string: ");
   fgets(str2, 50, stdin);

   strcpy(buffer, str1);
   strcat(buffer, str2);

   puts(buffer);
   printf("%lu\n",strlen(buffer));

   return 0;
} */


//========================================
// 48. exploring constant expressions
/* #include <stdio.h>

#define INPUT_MAX 128

int main()
{
   char input[INPUT_MAX];

   printf("Instructions: ");
   fgets(input, INPUT_MAX, stdin);
   puts("Thank you! here are your instructions: ");
   puts(input);

   return 0;
} */


//========================================
// 49.1 understanding arrays - why array
/* #include <stdio.h>

int main()
{
   float temp1, temp2, temp3, temp4;

   temp1=32.1;
   temp2=36.5;
   temp3=33.4;
   temp4=29.6;

   printf("Local temperatures: \n");
   printf("Station 1: %.1f\n", temp1);
   printf("Station 2: %.1f\n", temp2);
   printf("Station 3: %.1f\n", temp3);
   printf("Station 4: %.1f\n", temp4);

   return 0;
} */


//========================================
// 49.2 understanding arrays - using array
/* #include <stdio.h>

int main()
{
   float temp[4] = {32.1, 36.5, 33.4, 29.6};
   int i;

   printf("Local temperatures: \n");
   for(i=0;i<4;i++)
         printf("Station %d: %.1f\n",i+1, temp[i]);

   return 0;
} */


//========================================
// 49.3 understanding arrays - using array
/* #include <stdio.h>

#define MEALS 3

int main()
{
   int calories[MEALS];
   int i,total;

   total=0;

   puts("Calories Counter");
   for(i=0;i<MEALS;i++)
   {
       printf("Calories at meal %d: ",i+1);
       scanf("%d",&calories[i]);
       total += calories[i];

   }
   printf("You had a total of %d calories.\n", total);

   return 0;
} */


//========================================
// 49.4 character arrays - strings
/* #include <stdio.h>

int main()
{
   char text[] = "I am a string";
   puts(text);

   return 0;
} */


//========================================
// 49.5 character arrays - strings
/* #include <stdio.h>

int main()
{
   char text[] = {
           'I',' ', 'a', 'm',' ', 'a', ' ',
           's', 't', 'r', 'i', 'n', 'g', '\0'
   };
   puts(text);

   return 0;
} */


//========================================
// 49.6 character arrays - strings
/* #include <stdio.h>

int main()
{
   char text[] = "Greetings, human!\n";
   int n;

   n=0;

   while (text[n]!='\0')
   {
       putchar(text[n++]);
   }

   return 0;
} */


//========================================
// 50.1 creating multidimensional arrays
/* #include <stdio.h>

int main()
{
   char grid[3][3];
   int row, col;

   for(row=0;row<3;row++)
   {
       for(col=0;col<3;col++)
       {
           grid[row][col]=0;
       }
   }

   grid[1][1]=1;

   for(row=0;row<3;row++)
   {
       for(col=0;col<3;col++)
       {
           printf("%d ",grid[row][col]);
       }
       putchar('\n');
   }

   return 0;
} */


//========================================
// 50.2 multidimensional character arrays
/* #include <stdio.h>

int main()
{
   // char names[4][6] = {
   //         "Anna",
   //         "Alex",
   //         "Lee",
   //         "Cooper"
   // };   
   
   // char names[][6] = {
   //         "Anna",
   //         "Alex",
   //         "Lee",
   //         "Cooper"
   // };   
   
   const char *names[4] = {
           "Anna",
           "Alex",
           "Lee",
           "Cooper"
   };

   int i;

   for(i=0;i<4;i++)
   {
       printf("%s\n", names[i]);
   }

   return 0;
} */


//========================================
// 53.1 understanding structures
/* #include <stdio.h>

int main()
{
   struct Bank {
       int account;
       float balance;
   };
   
   // struct Bank checking;
   // struct Bank savings;   
   
   typedef struct Bank Bank; // giving alias 'struct Bank' => 'Bank'

   Bank checking;
   Bank savings;

   checking.account = 1234;
   checking.balance = 567.89;

   savings.account = 4923;
   savings.balance = 578.16;

   printf("Checking account %d has a balance of %.2f\n",
          checking.account, checking.balance);

   printf("Savings account %d has a balance of %.2f\n",
          savings.account, savings.balance);

   return 0;
} */


//========================================
// 53.2 structure initialization
/* #include <stdio.h>
#include <string.h>

int main()
{
   struct Person {
       char name[32];
       int age;
   };
   
   typedef struct Person Person;

   Person president = {
           "George Washington",
           67
   };

   printf("%s was %d years old\n",president.name, president.age);

   Person chancellor;
   strcpy(chancellor.name, "Adolf Hitler");
   chancellor.age = 49;

   printf("%s was %d years old\n",chancellor.name, chancellor.age);

   return 0;
} */


//========================================
// 53.3 multiple and nested structures
/* #include <stdio.h>
#include <string.h>

int main()
{
   struct Date {
       int year;
       int month;
       int day;
   };
   typedef struct Date Date;

   struct Person {
       char name[32];
       // struct Date birthday;
       Date birthday;
   };
   typedef struct Person Person;

   Person president;

   strcpy(president.name, "George Washington");
   president.birthday.year = 1732;
   president.birthday.month = 2;
   president.birthday.day = 22;

   printf("President %s was born on %d/%d/%d\n",
             president.name,
             president.birthday.day,
             president.birthday.month,
             president.birthday.year);

   return 0;
} */


//========================================
// 54.1 exploring variables
/* #include <stdio.h>

int main()
{
   char a;
   short b;
   int c;
   long d;
   float e;
   double f;

   printf("An char variable occupies %lu bytes of storage\n", sizeof(a));
   printf("An short variable occupies %lu bytes of storage\n", sizeof(b));
   printf("An int variable occupies %lu bytes of storage\n", sizeof(c));
   printf("An long variable occupies %lu bytes of storage\n", sizeof(d));
   printf("An float variable occupies %lu bytes of storage\n", sizeof(e));
   printf("An double variable occupies %lu bytes of storage\n", sizeof(f));

   return 0;
} */


//========================================
// 54.2 structure variables
/* #include <stdio.h>

int main()
{
   struct stuff {
       int a;
       float b;
       char c[32];
   };

   printf("The structure 'stuff' occupies %lu bytes of storage\n",
          sizeof(struct stuff));

   return 0;
} */


//========================================
// 54.3 memory location of variables variables
/* #include <stdio.h>

int main()
{
   int a;
   char b;
   float c;

   puts("Memory locations: ");
   printf("a is at %p\n", &a);
   printf("a is at %d\n", &a);
   printf("\n");
   printf("b is at %p\n", &b);
   printf("b is at %d\n", &b);
   printf("\n");
   printf("c is at %p\n", &c);
   printf("c is at %d\n", &c);

   return 0;
} */


//========================================
// 55. understanding pointers
/* #include <stdio.h>

int main()
{
   int pokey;   
   int *p;

   pokey=987;
   p=&pokey;

   printf("The address of 'pokey' is %p\n", &pokey);
   printf("The address stored in pointer 'p' is %p\n", p);

   printf("The value of 'pokey' is %d\n", pokey);
   printf("The value pointer 'p' is pointing to %d\n", *p);

   printf("The address of 'p' itself is %p\n", &p);

   return 0;
} */


//========================================
// 56.1 using pointers
/* #include <stdio.h>

int main() {
   int a, b;
   int *ptr;

   a = 1234;
   ptr = &a;
   b = *ptr;
   printf("a is %d and b is %d\n", a, b);
   printf("address of a is %p\n", &a);
   printf("address of b is %p\n", &b);

   return 0;
} */


//========================================
// 56.2 assigning pointers
/* #include <stdio.h>

int main()
{
   int a,b;
   int *ptr;

   ptr=&a;
   *ptr=1234;
   ptr=&b;
   *ptr=4567;

   printf("a is %d and b is %d\n",a,b);

   return 0;
} */


//========================================
// 56.3 pointer initialization
/* #include <stdio.h>

int main()
{
   float price, *ptr;
   ptr=&price;
   *ptr=99.98;

   printf("The price is %.2f\n",price);

   return 0;
} */


//========================================
// 57. challenge - create a char pointer
/* #include <stdio.h>

int main()
{
   char a,b,c;
   char *p;

   a='A';
   p=&a;
   b=*p;
   p=&c;
   *p='Z';

   // printf("a = %d, b = %d, c = %d\n",a,b,c);
   printf("a = %c, b = %c, c = %c\n",a,b,c);

   return 0;
} */


//========================================
// 59.1 array and pointer
/* #include <stdio.h>

int main()
{
   int array[] = {4, 9, 2, 3, 5};
   int x;

   for(x=0;x<5;x++)
   {
         // printf("Element %d = %d\n",x+1,array[x]);
         printf("Element %d = %d\n", x+1, *(array+x));
   }

   return 0;
} */


//========================================
// 59.2 accessing array with pointers
/* #include <stdio.h>

int main()
{
   int array[] = {4, 9, 2, 3, 5};
   int x;
   int *aptr;

   // aptr=&array[0];
   aptr=array;

   for(x=0;x<5;x++)
   {
       printf("Element %d = %d\n", x+1, *aptr);
       aptr++;
   }

   return 0;
} */


//========================================
// 60.1 creating a pointer functions
/* #include <stdio.h>

void minus10(int *v)
{
   *v=*v-10;
}

int main()
{
   int value = 100;
   printf("Value is %d\n", value);
   minus10(&value);
   printf("Value is %d\n", value);

   return 0;
} */


//========================================
// 60.2 creating a pointer functions
/* #include <stdio.h>
#include <string.h>

char *longer(char *s1, char *s2)
{
   int len1, len2;
   len1 = strlen(s1);
   len2 = strlen(s2);

   if(len1>len2)
         return s1;
   else if(len2>len1)
         return s2;
}

int main()
{
   char string1[] = "Constantinople";
   char string2[] = "Byzantium";
   char *result;

   result = longer(string1, string2);
   printf("String '%s' is longer.\n", result);

   return 0;
} */


//========================================
// 60.3 string manipulation using pointer
/* #include <stdio.h>
#include <ctype.h>

void shouting(char *input)
{
   while (*input)
   {
      *input=toupper(*input);
      input++;
   }
}

int main()
{
   char string[64];
   printf("Enter some text: ");
   fgets(string, 64, stdin);

   printf("You typed: %s\n", string);
   shouting(string);
   printf("If you were shouting, you'd typed: %s\n", string);

   return 0;
} */


//========================================
// 60.4 returning character pointer
/* #include <stdio.h>
#include <ctype.h>

char *encrypt(char *input)
{
   static char output[64]; // of not declared static 'output' will be lost as soon as the encrypt call ends
   int x=0;
   while (*input)
   {
       if(isalpha(*input))
           output[x++]=*input+1;
       else
           output[x++]=*input;
       input++;
   }
   return output;
}

int main()
{
   char *instructions = "Deliver the package to Berlin";
   char *encrypted;
   encrypted=encrypt(instructions);

   // printf("Here are your secret instructions: %s\n", encrypt(instructions));
   printf("Here are your secret instructions: %s\n", encrypted);

   return 0;
} */


//========================================
// 61.1 working with pointer arrays
/* #include <stdio.h>

int main()
{
   char *months[12] = {
           "January",
           "February",
           "March",
           "April",
           "May",
           "June",
           "July",
           "August",
           "Septmber",
           "October",
           "November",
           "December"
   };

   int x;
   for(x=0;x<12;x++)
   {
      //  printf("%s\n", months[x]);
       printf("%s\n", *(months+x));
      //  printf("%p\n", *(months+x));
   }

   return 0;
} */


//========================================
// 61.2 working with pointer arrays
/* #include <stdio.h>

int main()
{
   char *presidents[5] = {
           "Washington",
           "Adams",
           "Jefferson",
           "Madison",
           "Monroe"
   };

   int x;
   char *ptr;

   for(x=0;x<5;x++)
   {
      //  ptr=presidents[x];
       ptr=*(presidents+x);

       while (*ptr!='\0')
       {
         //   putchar(*ptr++);
           putchar(*ptr);
           ptr++;
       }
       printf("\n");
   }

   return 0;
} */


//========================================
// 62.1 allocating memory
/* #include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
   char *sto;

   sto=(char*)malloc(sizeof(char)*SIZE);
   
   if(sto==NULL)
   {
       puts("Memory error");
       return 1;
   }
   else
   {
       printf("%d bytes of memory allocated at %p\n", SIZE, sto);
   }

   return 0;
} */


//========================================
// 62.2 dynamic memory allocation
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
   int *scores, x;

   scores=(int*)malloc(sizeof(int)*4);
   if(scores==NULL)
   {
       puts("Unable to allocate memory");
       return 1;
   }

   *(scores+0) = 100;
   *(scores+1) = 97;
   *(scores+2) = 105;
   *(scores+3) = 110;

   for(x=0;x<4;x++)
   {
       printf("Score %d: %d\n",x+1, *(scores+x));
   }

   return 0;
} */


//========================================
// 63. challenge - write a hello program
#include <stdio.h>
#include <stdlib.h>

#define N 32

int main()
{
    char *name;

    name=(char*)malloc(sizeof(char)*N);

    if(name==NULL)
    {
        puts("Unable to allocate meory");
        return 1;
    }
    printf("Enter your name: ");
    fgets(name, N, stdin);
    printf("Welcome. Please to meet you %s\n", name);

    return 0;
}