// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int i = 0;
  int j = size;
  int mid;
  int k = 1;
  while (i <= j) {
    mid = (i + j) / 2;
    if (arr[mid] == value) {
      ++count;
      while ((arr[mid - k] == value) || (arr[mid + k] == value)) {
        if (arr[mid - k] == value) {
          ++count;
        }
        if (arr[mid + k] == value) {
          ++count;
        }
        ++k;
      }
      if (k > 1)
        return count;
    }
    if (arr[mid] > value) {
      j = mid - 1;
    }
    else {
      i = mid + 1;
    }
  }
  return count;
}
