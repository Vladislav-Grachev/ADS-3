// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int left = 0, right = size - 1, centrl, g = 0, k = -1;
  while (left <= right) {
    centrl = left + (right - left) / 2;
    if (value == arr[centrl]) {
      g++;
      k = centrl;
      break;
    }
    if (value > arr[centrl]) {
      left = centrl + 1;
    } else {
      right = centrl - 1;
    }
  }
  if (k >= 0) {
    for (int i = 0; i < k; i++) {
      if (value == arr[i])
        g++;
    }
    for (int j = size - 1; j > k; j--) {
      if (value == arr[j])
        g++;
    }
  }
  if (g > 0)
    return g;
  else
    return 0;
}
