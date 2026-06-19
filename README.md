# MBR Extractor

MBR Extractor is a simple command-line tool for extracting the Master Boot Record (MBR) from a physical device (such as a hard drive) and saving it to a file. It supports both Windows and GNU/Linux platforms.

## Features

- Extracts the first 512 bytes of the MBR from a specified device.
- Supports Windows device paths (e.g., `\\.\PhysicalDrive0`).
- Supports Linux device paths (e.g., `/dev/sda`).
- Provides informative error messages for common issues.
- Simple and lightweight implementation in C.

## Build Instructions

To build the executable, use the provided Makefile:

```bash
make build
```

- On Windows, this will produce `mbrextractor.exe`.
- On Linux and other systems, this will produce `mbrextractor`.

Make sure you have `gcc` installed and available in your system PATH.

## Usage

Run the executable with the device path and output file path as arguments.

### Windows Example

```bash
mbrextractor.exe \\.\PhysicalDrive0 mbr.bin
```

### Linux Example

```bash
./mbrextractor /dev/sda mbr.bin
```

If you run the program without arguments or with incorrect arguments, it will display usage instructions.

The program will prompt for confirmation before extracting the MBR.

## Author

Created by isaachhk02

## Disclaimer

Run this tool with administrator or root privileges to access the device. Use with caution as improper use may affect system stability.
