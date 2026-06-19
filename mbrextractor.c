// MBR Extractor for Windows/GNU Linux created by isaachhk02
#include "mbrextractor.h"
#include <stdio.h>
#include <stdlib.h>
int extract_mbr(const char *dev, const char *target_file_path) {
    FILE* target_file;
    FILE* output_file;
    target_file = fopen(dev,"rb");
    output_file = fopen(target_file_path,"wb");
    char output_mbr[512];
    if (dev == NULL ) {
        printf("ERROR: Invalid device!\n");
        exit(-1);
    }
    if (target_file == NULL) {
        printf("ERROR: Failed to open device %s. Please run as administrator/root or check device path.\n", dev);
        exit(-1);
    }
    if (output_file == NULL) {
        printf("ERROR: Failed to open output file %s for writing.\n", target_file_path);
        fclose(target_file);
        exit(-1);
    }
    printf("INFO: The device %s opened successfully!\n", dev);
    printf("Extracting MBR!\n");
    size_t bytes_read = fread(output_mbr, 1, sizeof(output_mbr), target_file);
    if (bytes_read != sizeof(output_mbr)) {
        printf("ERROR: Failed to read full MBR from device.\n");
        fclose(target_file);
        fclose(output_file);
        exit(-1);
    }
    size_t bytes_written = fwrite(output_mbr, 1, bytes_read, output_file);
    if (bytes_written != bytes_read) {
        printf("ERROR: Failed to write full MBR to file.\n");
        fclose(target_file);
        fclose(output_file);
        exit(-1);
    }
    fclose(target_file);
    fclose(output_file);
    printf("INFO: MBR extracted successfully to %s!\n", target_file_path);
}

int main(int argc, char const *argv[])
{
    int option = 0;
    switch (argc) {
        case 1:
            printf("%s","Created by isaachhk02\nmbrextractor device_path\n Windows Example:\n\nmbrextractor.exe \\.PhysicalDrive0\nLinux example:\nmbrextractor /dev/sda\n");
            break;
        case 2:
            printf("%s","Created by isaachhk02\nmbrextractor device_path target_file_path\n Windows Example:\n\nmbrextractor.exe \\.PhysicalDrive0 mbr.bin\nLinux example:\nmbrextractor /dev/sda mbr.bin\n");
            printf("ERROR: Missing output file path!\n");
            break;
        case 3:
            printf("Are you sure to extract MBR to file?\n Device: %s\n Target file: %s\n", argv[1], argv[2]);
            printf("Write 1 to proceed or 0 for cancel!\n");
            fflush(stdout);
            if (scanf("%d",&option) != 1) {
                printf("Invalid input. Exiting.\n");
                exit(-1);
            }
            if (option == 1)
                extract_mbr(argv[1],argv[2]);
            else
                exit(-1);
            break;
        default:
            printf("%s","Created by isaachhk02\nmbrextractor [device_path] [output_file]\n Windows Example:\n\nmbrextractor.exe \\.PhysicalDrive0 mbr.bin\nLinux example:\nmbrextractor /dev/sda mbr.bin\n");
            break;
    }
    return 0;
}
