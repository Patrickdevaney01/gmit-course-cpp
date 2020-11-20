#include <iostream>

using namespace std;

/* Print the numbers 5 through 9: */
int i=5;
while (i < 10)
{
cout << i;
cout << endl;
i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
sum = 0
while (i <= 20)
{
sum = sum + i;
i = i + 1;
}
cout << "The sum = " << sm;
/* Average a list of grades terminated by -1 */
sum = 0;
count = 0;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
sum = sum + grade;
count = count + 1;
/* Get next grade */
cout << "Enter grade (-1 to end): ";
cin >> grade;
}
if (count > 0)
cout << "Average is " << (double) sum / count;
