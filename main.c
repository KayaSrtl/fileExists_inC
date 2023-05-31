#include <stdio.h>
#include <sys/stat.h>


int main() {
    if (access("abc.txt", F_OK) == 0) {
        printf("File exists.");
    } else {
        printf("File not exists.");
    }
}
