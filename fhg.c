/*In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all citizens in Berland by the expense of the state treasury.

Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles (burle is the currency in Berland).

You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. The king can only give money, he hasn't a power to take away them.

Input
The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.
The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 106) — the welfare of the i-th citizen.

Output
In the only line print the integer S — the minimum number of burles which are had to spend.

example:
input:
4
1 2 3 4
ouput : 6
*/


#include<stdio.h>
int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    int total = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        total += max - arr[i];
    }

    printf("%d", total);
    return 0;
}
