/** Jennifer Byrne
    27/09/2017
    Lab 5
    Method of Least Squares of Linear Progression */

/** Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Main function */
int main()
{
    /** Declaring variables, double and integers */
    double slope, intercept, sumx = 0, sumy = 0, Exy = 0, Exx = 0, xavg = 0, yavg = 0;
    int i, n;

    /** Declaring arrays */
    double xarray[100]={0};
    double yarray[100]={0};

    /** Conditions for do while loop
        Ensures n is between 1 and 100 */
    do
    {
        cout << "Enter number of data points : \t";
        cin >> n;
        cout << "\n" ;
    }
    while ((n <= 0) || (n > 100));

    /** Conditions for for loop
        i initialised as 0, i less than n, increment i after each loop
        Allows user to enter values into x and y array */
    for(i = 0; i < n; i++)
    {
        cout << "Enter value for x : \t";
        cin >> xarray[i];
        cout << "Enter value for y : \t";
        cin >> yarray[i];
        cout << "\n" ;
    }

    /** For loop to calculate the sum of x and y */
    for(i = 0; i < n; i++)
    {
        sumx = sumx + xarray[i];
        sumy = sumy + yarray[i];
    }

    /** Display sum of x and y on console */
    cout << "\nSum of x :\t" << sumx << endl;
    cout << "\nSum of y :\t" << sumy << endl;

    /** For loop to calculate sum of the products and sum of x^2 */
    for(i = 0; i < n; i++)
    {
        Exy = Exy + (xarray[i] * yarray[i]);
        Exx = Exx + (xarray[i] * xarray[i]);
    }

    /** Display results from for loop Exx and Exy */
    cout << "\nSum of the products : \t" << Exy << endl;
    cout << "\nSum of x^2 : \t " << Exx << endl;

    /** Equations to calculate the average of the sums of x and y */
    xavg = sumx / n;
    yavg = sumy / n;

    /** Display the average of the sums of x and y on the console */
    cout << "\nAverage x : \t " << xavg << endl;
    cout << "\nAverage y : \t " << yavg << endl;

    /** Equation to calculate slope of the line */
    slope = ((n*Exy) - (sumx*sumy)) / ((n*Exx) - (sumx * sumx));

    /** Display slope on console */
    cout << "\nSlope : \t" << slope;

    /** Equation to calculate intercept of the line */
    intercept = yavg - (slope * xavg);

    /** Display intercept on console */
    cout << "\nIntercept : \t" << intercept << "\n\n";

    /** Terminate main function */
    return 0;
}
