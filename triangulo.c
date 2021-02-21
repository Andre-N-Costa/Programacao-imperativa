void triangulo (int n);

main () {
    triangulo (5);
    return 0;
}




  /*vertical*/

int main() {
    int x,y,z,w;
    scanf("%d",&x);
    y = x;
    for (z = 1;(z < (x * 2)); z++){
        (w = z);
        while ((w > 1) && (w < ((x*2)-1))) {
            if (w < x) (printf ("#") && (w--));
            else (printf("#") && (w++));
        }
        printf("#\n");
    }
    return 0;
}


  /*horizontal*/

int main() {
    int x,y,z,w,a,b;
    scanf("%d",&x);
    y = (x - 1);
    w = y;
    a = 1;
    b = a;
    for ((z = x); (z > 0);z--) {
        while (y != 0) {
            (printf(" ") && (y--));
        }
        w--;
        while (a > 0) {
        printf("#");
        a--;
        }
        printf("\n");
        b=b+2;
        y = w;
        a = b;
    }
    return 0;
}
