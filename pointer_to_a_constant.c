int a = 5, b = 10;
const int *ptr = &a;
// *ptr = 20;  //  Not allowed
ptr = &b;      //  Allowed
