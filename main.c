/* p6_13 p6_13_errors */ 


/*
                                                             v  v
a) missing ampersand and out of bound reference: scanf("%d",  a[5]) ; 
																						   v
b) out of bound reference: printf("%d%d%d\n", a[0][1], a[0][2], a[0][3]);
																 v      v      	
c) semicolon should be comma:  double f[3] = {1.1; 10.01; 100.001, }; => double f[3] = {1.1, 10.01, 100.001, };
																	 v
d) index should be written in diffent brackets : d[2, 4] = 2.345 => d[2][4] = 2.345
*/


