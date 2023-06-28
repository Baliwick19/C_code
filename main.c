// p2_7

/*

a) scanf("&d", %value);

-> it should be & not % in prefix of value.

=> scanf("&d", &value);



b) printf("The sum of %c and %c is %c /n", x, y);

-> less argument are specified 

=> printf("The sum of %c and %c is %c /n", x, y, z);



c) a + b + c = sum;

-> order of assignment is incorrect. 

=> sum = a + b + c ;



d) 

if (number >= largest);
    largest == number;

-> semicolon after ) must not be there.

=> 

if (number >= largest)
    largest == number;



e) \\ Program to determine the largest of three integers 

-> commenting is done using forward slash.

=> // Program to determine the largest of three integers




f) scanf("%f", float);

-> & is missing.

=> scanf("%f", &float);



g) printf("Remainder of %d divided by %d is \n", x, y, x / y);

-> too many argument and for remainder we must use % instead of /. 

=> printf("Remainder of %d divided by %d is %d\n", x, y, x % y);



h) 

if (x => y); 
    printf("%d is greater than or equal to %d\n, x, y");


-> incorrect relational operators and argument must outside string literal.


=>

if (x >= y); 
    printf("%d is greater than or equal to %d\n", x, y);


i)  print("The product is &d\n," x * y);

-> incorrect  function name ( should be printf ) and formation specifer prefix must be % not &. 

=>  printf("The product is %d\n," x * y);



j) scanf("%d, %d, %d", &x &y &z);

-> comma shouldn't be inserted. 

=> scanf("%d %d %d", &x &y &z);


*/
