#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return -1;
    }

    if (text_content != NULL) {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
