
int countIncreasingSegments(vector<int> yCoordinates, int k) {
    int n = yCoordinates.size();

    if (k == 1) {
        return n;
    }

    int count = 0;
    int consecutive = 1;

    for (int i = 1; i < n; i++) {
        if (yCoordinates[i] > yCoordinates[i - 1]) {
            consecutive++;
        } else {
            consecutive = 1;
        }

        if (consecutive >= k) {
            count++;
        }
    }

    return count;
}
