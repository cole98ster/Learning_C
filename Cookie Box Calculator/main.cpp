#include <cstdio>
#include <cmath>
/* Creating a program to determine the dimensions of a box (cookie box) and find values (cost, price, how many cookies can fit)
 * associated with those initial input.
 */
int main() {
    //asking the user for the dimensions of the box
    printf("Input the length, width and height of the cookie box in cm:\n");

    //initializing each variable
    int length, width, height;

    //The user inputs their variables on a new line and the program confirm the variables
    scanf("%d %d %d", &length, &width, &height);

    //initializing the cost
    float costCardboard = 0.002;

    //The cost of the box in cm^2 is calculated and stored into the variable surfaceArea
    float surfaceArea = 2*(length*height + width*length + height*width);

    //The cost of the cookie is printed to the user and saving this value for a later calculation
    printf("The cost of cardboard for the box is $%0.2f\n",surfaceArea * costCardboard);
    float TotalCardboardCost = surfaceArea * costCardboard;

    // Declaring each variables count of cookies they can fit in that dimension and the product of that step
    int CookieCount,HeightCount, WidthCount, LengthCount;

    // Calculating each variable count and the total count
    HeightCount = height/1.25;
    WidthCount = width/5.5;
    LengthCount = length/5.5;
    CookieCount = LengthCount*HeightCount*WidthCount;

    //printing the amount of cookies that fit into the box
    printf("%d cookies fit in the box\n", CookieCount);

    //defining each variable and assigning values
    float RadiusOfCookie = 2.75, HeightOfCookie = 1.25, TotalCostOfCookies, CostOfCookie,volumeCookie;

    //calculating the volume of the cookie
    volumeCookie = M_PI * pow(RadiusOfCookie, 2) * HeightOfCookie;

    //Calculating the cost of a cookie
    CostOfCookie = volumeCookie*0.012;

    //Calculating the cost of all of our cookies and telling the user this information
    TotalCostOfCookies = CostOfCookie*CookieCount;
    printf("The cost to make the cookies is $%.2f\n",TotalCostOfCookies);

    //Printing the total cost of The cookies and saving the value for a later step
    printf("The total cost of the cookies is $%0.2f\n",TotalCostOfCookies + TotalCardboardCost);
    float TotalBoxCost = TotalCostOfCookies + TotalCardboardCost;

    //Printing the price the box of cookies should be sold for
    printf("The box of cookies should be sold for $%0.2f",TotalBoxCost * 1.10);
}
