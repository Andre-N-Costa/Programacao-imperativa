//1.

int main() {
    int x = 1,y = 1;
    while (y != 0) {
        scanf("%d",&y);
        if (x > y) (x = x);
        else if (y == 0) (y = 0);
        else (x = y);
    }
    printf("%d",x);
    return 0;
}

//2.

int main() {
    int x = 0,y = 1,z = 0;
    while (y != 0) {
        scanf("%d",&y);
        z++;
        if (y != 0) (x = x + y);
        else (y = y);
    }
    z--;
    x = (x/z);
    printf("%d",x);
    return 0;
}

//3.

int main() {
    int x=1,y=1,z=0;
    while (x != 0){
        scanf("%d",&x);
        if (x == 0) (y = y);
        else if (z > x) (z = z);
        else if (z < x) {
            if (y < x) ((z = y) && (y = x));
            else (z = x);
}
}
    printf("%d %d",y,z);
    return 0;
}

//4.

int bitsUm (unsigned int x){
    int r=0;
    while (x != 0){
        if ((x % 2) == 1) (r++);
        else (r = r);
        x = (x/2);
    }
    return r;
}

//5.

int trailingZ(unsigned int n) {
    int x = 0;
    while ((n%2) == 0){
        x++;
        n = n/2;
    }
    return x;
}


//6

int qDig (unsigned int n){
    int i=1;
    while ((n/10) > 0){
        n = (n/10);
        i++;
    }
    return i;
}

//7

char *concat (char s1[], char s2[]){
    int i,j;
    for(i = 0; s1[i]; i++);
    for (j = 0; s2[j]; j++){
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

//8

char *mystrcpy(char s1[], const char s2[]) {
    int i = 0;

    while (s2[i] != '\0'){
        s1[i] = s2[i];
        i++;

    }
    s1[i] = 0;

    return s1;
}

//9

int mystrcmp (char s1[], char s2[]){
    int c = 0;
    
    for (int i = 0; ((c != -1) && (c != 1) && s1[i] != '\0'); i++){
        if (s1[i] < s2[i]) (c = -1);
        else if (s1[i] > s2[i]) (c = 1);
        else c = c;
    }
    
    return c;
}

//10

char *mystrstr (char s1[], char s2[]){
    int i,pos = 0, j = 0,indice;
    for (i = 0; s1[i]; i++){
        if (s1[i] != s2[0]);
        else {
            while ((s2[j]) || (s1[pos] == s2[j])) {
                j++;pos++;
            }
            indice = i;
            if (j == strlen(s2)) s1[i] = '\0';
            else {j = 0; pos = 0; indice = 0;}
        }
    }
    char *rtrn;
    if (indice != 0) rtrn = s2;
    else rtrn = "NULL";
return rtrn;
}

//11

void mystrrev (char s[]){
    char tmp[50];
    int j = 0;
    for(int i = (strlen(s) - 1); i >= 0; i--) {
        tmp[j] = s[i];
        j++;
    }
    tmp[j] = '\0';
    strcpy(s,tmp);
}

//12

void strnoV (char s[]){
    int j = 0;
    char tmp[50];
    for(int i = 0; s[i]; i++){
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U'));
        else {tmp[j] = s[i];j++;}
    }
    tmp[j] = '\0';
    strcpy(s,tmp);
}
