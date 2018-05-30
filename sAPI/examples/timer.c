/*!
 * \file timer.c
 */

#include <stdio.h>

#include "../export/stimer.h"

int var = 0;

void timer_cb()
{
    printf("Timer_cb called[%d]\n", var++);
    return;
}

static int timer_example()
{
    start_timer(1000, &timer_cb);

    while (1) {
        if (var > 5) {
            break;
        }
    }

    stop_timer();

    return 0;
}

int main()
{
    timer_example();
    return 0;
}
