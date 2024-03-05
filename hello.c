//This is funny
char help(char t) {
    if (t == 'd') {
        return 'd';
    }
    return t;
}

int foo(int x, int y) {
    return x + y;
}
int main(void) {
    return foo(3, 3);
}


