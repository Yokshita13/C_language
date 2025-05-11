void greet() {
    printf("Hello, Yokshita!");
}

int main() {
    void (*ptr)() = greet;
    ptr();  // Output: Hello, Yokshita!
}
