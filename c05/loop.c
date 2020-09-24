// 低效率循环
void lower(char *s) {
    for (int i = 0; i < strlen(s); i++) {
        // todo
    }
}

void normal(char *s) {
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        // todo
    }
}

int strlen(const char *s) {
    int length = 0;
    while (*s != '\0')
    {
        s++;
        length++;
    }
    return length;    
}