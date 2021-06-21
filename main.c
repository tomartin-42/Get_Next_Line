#include "get_next_line.h"

int main(void)
{
	int	fd1;
	int		r;
	char	*line;

	line = NULL;
//	fd1 = open ("/Users/tomartin/getnextlinepruebas/Get_Next_Line_Tester/test/normal.txt", O_RDONLY);
	//fd1 = open ("/Users/tomartin/getnextlinepruebas/Get_Next_Line_Tester/test/normal.txt", O_RDONLY);
	fd1 = open ("/Users/tomartin/getnextlinepruebas/Get_Next_Line_Tester/ejemplo.txt", O_RDONLY);
	//fd1 = open ("ejemplo.txt", O_RDONLY);
//	 get_next_line(fd1, &line);
	while ((r = get_next_line(fd1, &line)) ==1)
	{
		printf("%s\n", line);
//		free(line);
//		line = NULL;
	}
	printf("%s", line);
//	free(line);
//	line = NULL;
}

