#include "get_next_line.h"
int main()
{
	char *s;
	int fd = open("ophen", O_RDONLY);
	while((s = get_next_line(fd)))
		printf("%s", s);

}
