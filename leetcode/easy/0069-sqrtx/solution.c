double mySqrt(double x) {
    int y=0.5;
    double result = 1.0;
    if(x<=1)
    return x;

    else{

    while (y > 0) {
        if (y % 2 == 1) {
            result *= x;
        }

        x *= x;
        y /= 2;
    }

    return result;
}
}