
double calculateDeliveryFee(double subtotal, int uniqueRestaurantCount) {
    if (subtotal >= 50.00) {
        return 0.00;
    }

    return 5.00 * uniqueRestaurantCount;
}
