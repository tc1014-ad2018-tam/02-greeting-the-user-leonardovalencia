

int main() {
    //Here we will ask the user for the hour
    printf("Hello\n");
    printf("Give me the hour please!\n");

    //Variable declaration
    double hora;
    int flag = 1;
    //Here the user will give us the hour
    scanf("%lf", &hora);
    do {
        if (hora <= 24) {
            flag = 0;
            if (hora <= 12) {
                printf("Good morning\n");
            } else {
                if (hora <= 19) {
                    printf("Good afternoon\n");
                } else {
                    if (hora <= 24) { printf("Good night"); }
                }
            }
        } else {
            printf("Please introduce correctly the hour\n");
            scanf("%lf", &hora);
        }
    } while (flag == 1);
    return 0;
}





















