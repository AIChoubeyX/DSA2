// 1. Understand the question
// You are given an array of arriving packet sizes. For each packet:
// 1. Add the leftover units from the previous packet.
// 2. Find the largest power of \(2\) that is less than or equal to the combined total.
// 3. Carry the unused units to the next packet.
// 4. Keep track of the largest repackaged packet.
// Powers of two are 1, 2, 4, 8, 16, 32, 64...
// For example, if the combined total is 13, the largest power of two that fits is 8, leaving 5 units.

long long largestRepackaged(const vector<int>& arrivingPackets) {
    long long remaining = 0;
    long long largest = 0;

    for (int i = 0; i < arrivingPackets.size(); i++) {
        long long total = arrivingPackets[i] + remaining;
        long long power = 1;

        while (power <= total / 2) {
            power = power * 2;
        }

        largest = max(largest, power);
        remaining = total - power;
    }

    return largest;
}