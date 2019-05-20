/*Author para_sf*/
/* Long integer */
/*The use of 16 bit machine, shows that values greater than 32767 are not properly stored on 16 bit machine.
However, when they are qualified as long integer, the values are correctly stored */
#include <stdio.h>

main()
{
    printf("Integer values \n \n");
    printf("%d %d %d\n, 32767,32767 + 1,32767 + 10");
    printf("\n");
    printf("Long integer values \n\n");
    printf("%ld %ld %ld \n",32767L, 32767L + 1L, 32767L + 10L);
    


}
