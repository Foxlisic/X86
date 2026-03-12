int check = 123;

int main()
{
    unsigned char* m = (unsigned char*) 0xA0000;

    for (int i = 0; i < 1024; i++) { m[i] = ++check; }

    return 0;
}
