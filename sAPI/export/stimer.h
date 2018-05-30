#ifndef STIMER_H__
#define STIMER_H__

//#include <stdio.h>
//#include <sys/time.h>
//#include <signal.h>

int start_timer(int, void (*)(void));

void stop_timer(void);

#endif /* STIMER_H__ */
