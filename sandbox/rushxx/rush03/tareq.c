/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tareq.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:14:25 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/15 21:15:54 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define FILE_SIZE 1000

size_t strlen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    int fd;              // File descriptor
    char* buffer;        // Buffer to store the file content
    off_t fileSize;      // File size
    // Open the file in read-only mode
    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        char errorMessage[] = "Error opening the file\n";
        write(STDERR_FILENO, errorMessage, strlen(errorMessage));
        return 1;
    }
    // Set the file size to 1000 bytes
    fileSize = FILE_SIZE;
    // Allocate memory to store the file content
    buffer = (char*)malloc(fileSize + 1); // Add 1 for the null terminator
    if (buffer == NULL) {
        char errorMessage[] = "Error allocating memory\n";
        write(STDERR_FILENO, errorMessage, strlen(errorMessage));
        close(fd);
        return 1;
    }
    // Read the file content into the buffer
    ssize_t bytesRead = read(fd, buffer, fileSize);
    if (bytesRead == -1) {
        char errorMessage[] = "Error reading the file\n";
        write(STDERR_FILENO, errorMessage, strlen(errorMessage));
        free(buffer);
        close(fd);
        return 1;
    }
    buffer[bytesRead] = '\0'; // Null-terminate the buffer
    // Write the file content to the standard output
    write(STDOUT_FILENO, "File Content:\n", strlen("File Content:\n"));
    write(STDOUT_FILENO, buffer, bytesRead);
    write(STDOUT_FILENO, "\n", 1);
    // Clean up and close the file
    free(buffer);
    close(fd);
    return 0;
}
