
int anagramHalves(string s) {
    int n = s.length();
    int freq[10] = {0};

    for (int i = 0; i < n / 2; i++) {
        freq[s[i] - '0']++;
    }

    for (int i = n / 2; i < n; i++) {
        freq[s[i] - '0']--;
    }

    int changes = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            changes += freq[i];
        }
    }

    return changes;
}
