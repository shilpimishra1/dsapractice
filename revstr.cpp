void reverseString(char* s, int sSize) {
    int i, j;
    int* arr = (int*)malloc(sSize * sizeof(int));
    for (i = 0; i < sSize; i++) {
        arr[i] = s[i];
    }
    for (i = 0, j = sSize - 1; i < sSize; i++, j--) {
        s[i] = arr[j];
    }
}
