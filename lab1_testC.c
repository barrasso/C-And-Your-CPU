
// SOLUTION FILE
#import <stdio.h>

main()
{
  int var_int;                    // 2
  float var_float;
  long var_long;
  char var_char;
  short var_short;

  unsigned char uchar1, uchar2;   // 3
  signed char schar1, schar2;

  int x, y;                       // 4

  char i;                         // 5
  char ii;
  char shift_char;

  int a[10] = {0,10,20,30,40,50,60,70,80,90};    // 6

  int b[10], c[10];               // 7
  int *ip, *ip2;
  int j, k;

  char AString[] = "HAL";           // 8

  // 1 -- change "World" to your name
  printf("\n\n PART 1 ---------\n");

  // Changed to Hello Mark!
  printf("\n Hello Mark! \n");

  // 2 -- find sizes of the other C datatypes
  printf("\n\n PART 2 ----------\n");

  printf("\n size of data type int = %lu ", sizeof(var_int));

  // Some other C data type sizes
  printf("\n size of data type float = %lu ", sizeof(var_float));
  printf("\n size of data type long = %lu ", sizeof(var_long));
  printf("\n size of data type char = %lu ", sizeof(var_char));
  printf("\n size of data type short = %lu ", sizeof(var_short));


  // 3 -- explore signed versus unsigned datatypes and their interactions
  printf("\n\n PART 3 ----------\n");

  uchar1 = 0xFF;
  uchar2 = 0xFE;
  schar1 = 0xFF;
  schar2 = 0xFE;
    
  // uchar1 and schar1 were assigned the same values but different outputs because,
  // they are guaranteed to be unsigned and signed values respectively
    
  // Compare uchar1 and uchar2, print larger of both
  if (uchar1 > uchar2)
      printf("\n uchar1 = %d ", uchar1);
  else
      printf("\n uchar2 = %d ", uchar2);
    
  // Compare schar1 and schar2, print larger of both
  if (schar1 > schar2)
      printf("\n schar1 = %d ", schar1);
  else
      printf("\n schar2 = %d ", schar2);
    
  // Print sum of schar1 and schar2
  printf("\n The sum of schar 1 and schar2 is: %d", (schar1 + schar2));
    
  // Print sum of uchar1 and uchar2
  printf("\n The sum of uchar1 and uchar2 is: %d", (uchar1 + uchar2));
    
  // Added schar1 and uchar1, and they added normally
  printf("\n This is what happens when adding schar1 and uchar1: %d",(schar1 + uchar1));
    

  // 4 -- Booleans
  printf("\n\n PART 4 ----------\n");

  x = 1; y = 2;
    
  // Compare and print boolean flags
  printf("\n y is greater than x: %i", (y > x));
  printf("\n y is less than x: %i", (y < x));
    
  // Print sizeof boolean data type
  printf("\n Size of boolean data type = %i",(2 > 1));
    
  // Compare & and && operands
  printf("\n Result of (x & y): %i", (x & y));
  printf("\n Result of (x && y): %i", (x && y));
    
  // Compare ! and ~ operands
  printf("\n Result of !(x > y): %i", !(x > y));
  printf("\n Result of ~(x > y): %i", ~(x > y));


  // 5 -- shifts
  printf("\n\n PART 5 ----------\n");

  shift_char = 15;
  i = 1;
  ii = 2;

  // Shift char to the left << 1
  printf("\n shift_char << %d = %d", i, shift_char << i);
    
  // Shift char to the right >> 2
  printf("\n shift_char >> %d = %d", ii, shift_char >> ii);
    
  // Shift char to the left << 4
  printf("\n shift_char << %d = %d", (ii+i), shift_char << (i+ii));
  // Shifting to the left more than 3 spaces increased the resulting value
    
  // Shift char to the left << 10
  printf("\n shift_char << %d = %d", (ii * 5), shift_char << (ii * 5));
  // Shifting to the left more than 8 spaces increased the resulting value even further

  // 6 -- pointer basics
  printf("\n\n PART 6 ----------\n");

  ip = a;
  printf("\nstart %d %d %d %d %d %d %d \n",
	 a[0], *(ip), *(ip+1), *ip++, *ip, *(ip+3), *(ip-1));
    
  printf("\Changed to: %d %d %d %d %d %d %d \n",
    // Changed to output to 10 10 20 10 20 50 10
    a[1], *(ip+1), *(ip+2), *(ip+1), *(ip+2), *(ip+5), *(ip+1));
    
  // Size of integer pointer data type
  printf("\n The size of the integer point data type: %lu", sizeof(ip));
   
  // Print all pointer values
  for (int i = 0; i < 10; i++) {
      // The difference between ip and ip+1 is not 1 because they are comparing memory locations
      // They are not comparing actual integers, just the hex values of the memory location per value
      printf("\n pointer value ip + %i : %x", i, ip+i);
  }
  ip = a;
  
    
  // 7 -- programming with pointers
  printf("\n\n PART 7 ----------\n");

  // First array reversal method using conventional array indicies
  // Init a count variable
  int countB = 9;
  // Loop through all of b array
  for (int i = 0; i < 10; i++) {
      // Create temp int
      int temp = 0;
      // Set temp equal to index of a at count
      temp = a[countB];
      // Put temp value in b array
      b[i] = temp;
      // Decrement count
      countB--;
  }
  // Print Output of b array
  printf("\nb[]: %d %d %d %d %d %d %d %d %d %d \n",
               b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9]);
        
        
  // Second array reversal method using pointers
  // Init a count variable
  int countC = 9;
  // Loop through all of c array
  for (int i = 0; i < 10; i++) {
      // Create temp int
      int temp = 0;
      // Set temp equal to dereferenced pointer location
      temp = *(ip+countC);
      // Put temp value into c array
      c[i] = temp;
      // Decrement count
      countC--;
  }
  // Print output of c array
  printf("\nc[]: %d %d %d %d %d %d %d %d %d %d \n",
           c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
    

  // 8 -- strings
  printf("\n\n PART 8 ----------\n");

  printf("\n %s \n", AString);

  // NEW CODE
  for (k = 0; k < 4; k++) printf("\n %d", AString[k]);

  for (k = 0; k < 3; k++) AString[k] += 1;
  printf("\n My name is %s. \n", AString);

  AString[3] += 60;
  printf("\n %s \n", AString);

  for (k = 0; k < 10; k++) printf("\n %d", AString[k]);

  // 9 -- address calculation
  for (k = 0; k < 10; k++) b[k] = a[k];         // direct reference to array element

  ip = a;
  ip2 = b;
  for (k = 0; k < 10; k++) *ip2++ = *ip++;     // indirect reference to array element

  // all done
  printf("\n\n ALL DONE\n");
}
