
string decrypt(string encrypted, int k) {
    k = k % 26;

    for (int i = 0; i < encrypted.length(); i++) {
        encrypted[i] = 'A' + (encrypted[i] - 'A' - k + 26) % 26;
    }

    return encrypted;
}
