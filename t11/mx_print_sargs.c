int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int arg, char *args[]){
    for (int i = 1; i < arg; i++) {
        for (int j = 1; j < arg; j++) {
            if (mx_strcmp(args[i], args[j]) < 0) {
                char *c = args[i];
                args[i] = args[j];
                args[j] = c;

            }
        }
    }
    for (int i = 1; i < arg; i++) {
         mx_printstr(args[i]);
         mx_printchar('\n');
    }
}



