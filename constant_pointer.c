int a = 5, b = 10;
int *const ptr = &a;
*ptr = 20;     // Allowed
// ptr = &b;   //  Not allowed
