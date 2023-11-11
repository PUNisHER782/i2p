//Write a c program to calculate the discount amount by taking the price of the product as a input from the user if the discount is greater than 10% but less than 50%,18% GST is to be added to the total bill and if it is more than 50% but less than 100%,2% GST will be applied.
#include <stdio.h>

int main() {
    float amt, dis, bill, gst;

    printf("Enter the amount: ");
    scanf("%f", &amt);

    printf("Enter the discount: ");
    scanf("%f", &dis);

    if (dis >= 10 && dis <= 50) {
        gst = 18.0 / 100.0;
    } else if (dis > 50 && dis <= 100) {
        gst = 2.0 / 100.0;
    } else {
        printf("ERROR: Invalid discount value\n");
        return 1;
    }
    bill = amt - (amt * (dis / 100)) + (amt * (dis / 100) * gst);
    printf("Bill = %f\n", bill);

}
