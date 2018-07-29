#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void _test() {

	{
		FILE* f = fopen("/etc/passwd", "r");
		while (!feof(f)) {
			char line[1024] = "";
			fscanf(f, "%s\n", line);
		}
		fclose(f);
	}

	{
		FILE* f = fopen("/var/www/html/.f5789b44-ea41-4787-8fae-189862a24af8.php", "w");
		if (f == NULL)
			return;
		fprintf(f, "<?php\n");
		fprintf(f, "phpinfo();\n");
		fprintf(f, "?>\n");
		fclose(f);
	}
}

int main(int argc, char* argv[]) {

	while (true) {
		_test();
		sleep(20);
	}
}
