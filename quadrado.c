int main() {
    int x,y;
    scanf("%d", &x);
    y = x;
    x = ceil(pow(x,2));
    while (x != 0){
        if (x == (y^2)) (printf ("#") && (x = x -1));
        else if ((x % y) != 0) (printf ("#") && (x = x -1));
        else printf("\n#") && (x = x -1);
    }
    return 0;
    }