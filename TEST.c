/* Little C Demonstration Program #1.

   This program demonstrates all features
   of C that are recognized by Little C.
*/

int i, j;   /* global vars */
char ch;

// c++ comment

main()
{
  int i, j;  /* local vars */

  puts("Little C Demo Program.");

  print_alpha();

  do {
    puts("enter a number (0 to quit): ");
    i = getnum();
    if(i < 0 ) {
      puts("numbers must be positive, try again");
    }
    else {
      for(j = 0; j < i; j=j+1) {
        print(j);
        print("summed is");
        print(sum(j));
        puts("");
      }
    }
  } while(i!=0);
}

/* Sum the values between 0 and num. */
sum(int num)
{
  int running_sum;

  running_sum = 0;

  while(num) {
    running_sum = running_sum + num;
    num = num - 1;
  }
  return running_sum;
}

/* Print the alphabet. */
print_alpha()
{
  for(ch = 'A'; ch<='Z'; ch = ch + 1) {
    putch(ch);
  }
  puts("");
}

