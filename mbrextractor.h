#define MBREXTRACTOR_H
#ifndef MBREXTRACTOR_H
public:
    int extract_mbr(const char *dev, const char *target_file_path);
private:
    const char *output_file_path;
    const char *dev;
    int option;
    FILE* target_file;
    FILE* output_file;
    char output_mbr[512];
#endif // MBREXTRACTOR_H