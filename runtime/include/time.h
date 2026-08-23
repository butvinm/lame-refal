#ifndef LAME_TIME_H_
#define LAME_TIME_H_

#define CLOCKS_PER_SEC 1000

typedef unsigned long clock_t;
typedef long time_t;

clock_t clock(void);
time_t time(time_t *timer);
char *ctime(const time_t *timer);

#endif /* LAME_TIME_H_ */
