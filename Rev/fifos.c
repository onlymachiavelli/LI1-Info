#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    char *fifo_name = "/tmp/myfifo";
    char buffer[100];
    int fd;

    // Create the FIFO
    mkfifo(fifo_name, 0666);

    // Open the FIFO for writing
    fd = open(fifo_name, O_WRONLY);

    // Write data to the FIFO
    write(fd, "Hello, world!", 13);

    // Close the FIFO
    close(fd);

    // Open the FIFO for reading
    fd = open(fifo_name, O_RDONLY);

    // Read data from the FIFO
    read(fd, buffer, sizeof(buffer));

    // Print the data to the console
    printf("Received message: %s\n", buffer);

    // Close the FIFO
    close(fd);

    // Remove the FIFO from the file system
    unlink(fifo_name);

    return 0;
}
