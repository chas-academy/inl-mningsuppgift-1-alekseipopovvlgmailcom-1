#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int amount = 100;
    int sum = 0;
    float average_value;

    int results_storage[amount];
    /*
        the numbers we can get is 1, 2, 3, 4, 5 and 6
        them looks very similar to array's indexes
        so it is possible to use an array to store them 
        we can get the result (1  for example) subtract 1 
        and store the count for 1 in index 0.
        this case there is no unused elements in the array
        this way makes printing out the results looking better also
    */
    int sides_counts[6] = {0, 0, 0, 0, 0, 0};
    
    
    for (int i = 0; i < amount; i += 1) {
        int current_result = (rand() % 6) + 1;
        sum += current_result;
        results_storage[i] = current_result;
        sides_counts[current_result - 1] += 1;
    }

    average_value = (float)sum / amount;

    for (int i = 0; i < 6; i += 1) {
        printf("%d\n", sides_counts[i]);
    }

    printf("%d\n", sum);
    printf("%.1f\n", average_value);

    return 0;
}
