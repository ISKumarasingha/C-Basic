void func3(int **ptr1){
    int *ptr2;
    printf("%i %i\n", **ptr1, *ptr2);
    (*ptr1) = malloc(sizeof(int));
    ptr2 = malloc(sizeof(int));
    printf("%i %i\n", **ptr1, * ptr2);
}

void test3(){
    int *ptr1;
    printf("%i\n", *ptr1);
    func3(&ptr1);
    printf("%i\n", *ptr1);
    free(ptr1);
    printf("%i\n", *ptr1);
}