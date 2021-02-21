int main() {
    int x,y;
    scanf("%d", &x);
    y = x;
    x = (x*x);
    while (x != 0){
        if ((x == (y*y)) && ((x % 2) == 0)) (printf ("#") && (x = x -1));
        else if ((x == (y*y)) && ((x % 2) != 0)) (printf ("_") && (x = x -1));
        else if (((x % y) != 0) && (x % 2 == 0)) (printf ("#") && (x = x -1));
        else if (((x % y) != 0) && (x % 2 != 0)) (printf ("_") && (x = x -1));
        else if (((x % y) == 0) && (x % 2 == 0)) (printf("\n#") && (x = x -1));
        else (printf("\n_") && (x = x -1));
    }
    return 0;
    }