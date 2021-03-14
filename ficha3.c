// 2

void swapM (int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

//3

void swap (int v[], int i, int j){
int b;
b = v[i];
v[i] = v[j];
v[j] = b;
}

int main() {
     int i,j,x,v[10];
    x = 0;
    printf("Introduza os elementos do vetor terminando a leitura com um -1\n");
    scanf("%d",&x);
    for (int a = 0;x != -1; a++){
        v[a] = x;
        scanf("%d",&x);
    }
    printf("Introduza as posicoes dos elementos que vai trocar\n");
    scanf("%d%d",&i,&j);
        swap (v,i,j);
    for (int a = 0; a < 7; a++){
        printf("%d ",v[a]);}
    return 0;
}

//4

int soma(int v[],int N){
    int acc = 0;
    for (int i=0; i < N; i++){
        acc += v[i];
    }
    return acc;
}

int main() {
    int x,c=0,v[100];
    printf("Introduza os elementos do vetor terminando a leitura com um -1\n");
    scanf("%d",&x);
    for (int a = 0; x != -1; a++) {
        v[a] = x;
        c++;
        scanf("%d",&x);
    }
    printf("%d",soma(v,c));
    return 0;
}

//5

void inverteArray (int v[], int N){
int acc,a;
for (a = 0; a <= N/2; a++) {
    acc = v[a];
    v[a] = v[(N-1)];
    v[(N-1)] = acc;
    N--;
}
}

int main() {
    int x,c=0,v[100];
    printf("Introduza os elementos do vetor terminando a leitura com um -1\n");
    scanf("%d",&x);
    for (int a = 0; x != -1; a++) {
        v[a] = x;
        c++;
        scanf("%d",&x);
    }
    inverteArray(v,c);
    for(x = 0;x < c; x++){
        printf("%d",v[x]);
    }

    return 0;
}

//6

int maximum (int v[], int N, int *m){
    if (N <= 0) return 1;
    else {
        *m = v[0];
        for (int i = 1; i < N; i++) {
            if (v[i] > *m) (*m = v[i]);
        }
        return 0;
    }

}

int main() {
    int x,c=0,v[100],m;
    printf("Introduza os elementos do vetor terminando a leitura com um -1\n");
    scanf("%d",&x);
    for (int a = 0; x != -1; a++) {
        v[a] = x;
        c++;
        scanf("%d",&x);
    }
    maximum(v,c,&m);
    printf("%d",m);
    return 0;
}

//7

void quadrados(int q[], int N){
    for (int i = 0; i <= N; ++i) {
       q[i] = i * i;
    }

}

int main() {
    int q[100],n;
    printf("Deve ser calculado o quadrado de quantos naturais?\n");
    scanf("%d",&n);
    quadrados(q,n);
    for (int i = 0; i < n; i++){
        printf("%d ",q[i]);
}
}