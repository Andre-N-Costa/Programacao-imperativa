//1

float multInt1(int n, float m){
    int r = 0;
    while (n > 0){
        r = r + m;
        n--;
    }
    return r;
}

int main() {
    int x;
    float y;
    assert(scanf("%d%f",&x,&y)== 2);
    printf("%f",multInt1(x,y));
    return 0;
}


//2

float multInt2 (int n, float m){
    int r = 0;
    while (n >= 1){
        if ((n % 2) == 0) ((n = n/2) && (m = m * 2));
        else ((r = r + m) && (n = n/2) && (m = m * 2));
    }
return r;
}

int main() {
    int x;
    float y;
    scanf("%d%f",&x,&y);
    printf("%f",multInt2(x,y));
}

//3

int max(int x, int y) {
    if (x > y) return x;
    else return y;
}
int mdc1 (int a, int b){
    int r;
    for ((r = max(a,b));((a % r != 0) || (b % r != 0));r--){}
    return r;
}
int main() {
int x,y;
scanf("%d%d", &x,&y);
printf("%d",mdc1(x,y));
}

//4

int mdc2(int x, int y){
    while ((x != 0) && (y != 0)) {
        if (x > y) (x=x-y);
        else (y = y - x);
    }
    if (x == 0) return y;
    else return x;
}

int main() {
int x,y;
scanf("%d%d",&x,&y);
printf("%d",mdc2(x,y));
}

//5

int fib1 (int n){
    if (n == 0) return 0;
    else if (n < 2) return 1;
    else return (fib1(n - 1) + fib1(n - 2));
    }

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",fib1(n));
}
