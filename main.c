// p2_6

/*

a) printf("The value is %d\n", &number);

-> & should not be there 

=> printf("The value is %d\n", number);



b) scanf("%d%d", &number1, number2);

-> second arg must contain & to its prefix

=> scanf("%d%d", &number1, &number2);



c)  

if (c < 7);{
    puts("C is less than 7");
} 

-> semicolon after closing parenthesis of if must not be present 

=>

if (c < 7){
    puts("C is less than 7");
} 



d)

if (c => 7) {
    puts("C is greater than or equal to 7");
}

-> relational operator is wrong.

=> 

if (c >= 7) {
    puts("C is greater than or equal to 7");
}

*/
