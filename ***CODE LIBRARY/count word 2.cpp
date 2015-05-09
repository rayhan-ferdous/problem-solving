int words(const char *s)
{
    const char *sep = " \t\n\r\v\f";
    int word = 0;
    size_t len;

    s += strspn(s, sep);

    while ((len = strcspn(s, sep)) > 0) {
        ++word;
        s += len;
        s += strspn(s, sep);
    }
    return word;
}