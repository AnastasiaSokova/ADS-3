// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1;
    int k = 0;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] >= value) {
            j = mid;
        } else {
            i = mid + 1;
        }
        if (arr[j] == value) {
            k++;
        }
    }
    return k;
  return 0; // если ничего не найдено
}
