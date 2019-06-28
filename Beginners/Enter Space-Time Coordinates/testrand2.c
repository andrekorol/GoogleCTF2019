#include <time.h>

time_t time(time_t * __timer) {
    time_t tVar1;

    tVar1 = time(__timer);
    return tVar1;
}

int main(void)
{
    seed = time((time_t *)0x0);
    
    return 0;
}
