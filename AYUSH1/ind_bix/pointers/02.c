
int main()
{
    void *vp;
    char ch=74, *cp="JACK";
    int j=65;
    vp=&ch;
    printf("%c\n", *(char*)vp);
    vp=&j;
    printf("%c\n", *(int*)vp);
    vp=cp;
    printf("%c\n", *(char*)vp);//* gives the value
    return 0;
}
