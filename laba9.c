#include <stdio.h>

int min_steps(int x, int y) {
    if (x == y) {
        return 0;
    }

    int steps = 1;
    int current_position = x + 1;
    int step_length = 1;

    while (current_position < y) {
        if (current_position + step_length + 1 <= y) {
            step_length += 1;
        } else if (current_position + step_length <= y) {
            step_length = step_length;
        } else {
            step_length -= 1;
        }

        current_position += step_length;
        steps += 1;
    }

return steps;
}

int main() {
    int x, y;

    printf("Znachennya x: ");
    scanf("%d", &x);
    printf("Znachennya y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("Znachennya x mae buti menshe abo doricnuvati znachennu y.\n");
        return 1;
    }

    int steps = min_steps(x, y);
    printf("Minimalna kilkist krokiv vid %d do %d: %d\n", x, y, steps);

    return 0;
}
