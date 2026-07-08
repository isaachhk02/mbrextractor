# MBR Extractor

<div align="center">

**[English](#-english) | [Español](#-español)**

A lightweight command-line tool for extracting the Master Boot Record (MBR) from physical devices on Windows and Linux.

![C](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-green)

</div>

---

## 🇬🇧 English

### About

MBR Extractor is a simple yet powerful command-line utility that allows you to extract the Master Boot Record (MBR) from physical devices such as hard drives and save it to a binary file. The tool provides a straightforward interface for accessing low-level disk information with proper safety confirmations.

### 💡 Use Cases

This utility can be used for:

- **Data Recovery & Backup**: Create backups of the MBR for disaster recovery purposes
- **Forensic Analysis**: Extract MBR data for security investigations and digital forensics
- **System Diagnostics**: Analyze boot sector information to troubleshoot boot problems
- **Disk Imaging**: Capture the boot sector as part of comprehensive disk imaging workflows
- **System Maintenance**: Save MBR copies before performing system updates or migrations
- **Educational Purposes**: Learn about disk structure and boot processes at a low level
- **Partition Table Analysis**: Examine partition information stored in the MBR

### ✨ Features

- **Cross-platform support**: Works on Windows and GNU/Linux
- **Efficient extraction**: Extracts the first 512 bytes of the MBR from specified devices
- **Platform-specific paths**: 
  - Windows: `\\.\PhysicalDrive0`
  - Linux: `/dev/sda`
- **User-friendly**: Clear error messages and confirmation prompts
- **Minimal dependencies**: Pure C implementation with no external libraries
- **Lightweight**: Small executable with low resource consumption

### 📋 Requirements

- `gcc` compiler (available in system PATH)
- Administrator or root privileges to access physical devices
- A POSIX-compliant system (Windows or Linux)

### 🔨 Build Instructions

To build the executable, use the provided Makefile:

```bash
make build
```

**Output:**
- Windows: `mbrextractor.exe`
- Linux/Other: `mbrextractor`

### 📖 Usage

Run the executable with the device path and output file path as arguments:

```
mbrextractor <device_path> <output_file>
```

#### Basic Examples

**Windows - Extract MBR from first physical drive:**
```bash
mbrextractor.exe \\.\PhysicalDrive0 mbr.bin
```

**Windows - Extract MBR from second physical drive:**
```bash
mbrextractor.exe \\.\PhysicalDrive1 mbr_drive1.bin
```

**Linux - Extract MBR from /dev/sda:**
```bash
sudo ./mbrextractor /dev/sda mbr.bin
```

**Linux - Extract MBR from /dev/sdb:**
```bash
sudo ./mbrextractor /dev/sdb mbr_disk2.bin
```

#### Real-World Examples

**Windows (with admin privileges):**
```bash
# Open Command Prompt as Administrator, then run:
mbrextractor.exe \\.\PhysicalDrive0 C:\backup\mbr_backup.bin
mbrextractor.exe \\.\PhysicalDrive0 D:\forensics\mbr_image.bin
```

**Linux (with sudo):**
```bash
# Extract MBR with timestamp in filename
sudo ./mbrextractor /dev/sda ~/backup/mbr_$(date +%Y%m%d).bin

# Extract from multiple drives
sudo ./mbrextractor /dev/sda ./mbr_sda.bin
sudo ./mbrextractor /dev/sdb ./mbr_sdb.bin
```

#### Program Behavior

1. Run the program with device path and output file path
2. The program displays the device path and output file path for confirmation
3. You will be prompted to confirm the extraction operation
4. If confirmed, the first 512 bytes (MBR) are read from the device
5. The MBR data is written to the specified output file
6. A success message is displayed with the output file path

**Example output:**
```
Device:      \\.\PhysicalDrive0
Output file: mbr.bin
Proceed with extraction? (y/n): y
MBR successfully extracted to: mbr.bin
```

### ⚠️ Disclaimer

- **Requires elevated privileges**: Run with administrator (Windows) or root (Linux) permissions
- **Handle with care**: Incorrect usage may affect system stability
- **Backup first**: Consider backing up important data before using this tool
- **Read-only operation**: This tool only reads from devices; it does not modify any data

### 👤 Author

Created by [isaachhk02](https://github.com/isaachhk02)

---

## 🇪🇸 Español

### Acerca de

MBR Extractor es una utilidad de línea de comandos simple pero potente que le permite extraer el Registro de Arranque Maestro (MBR) de dispositivos físicos como discos duros y guardarlo en un archivo binario. La herramienta proporciona una interfaz directa para acceder a información de bajo nivel del disco con confirmaciones de seguridad apropiadas.

### 💡 Casos de Uso

Esta utilidad puede ser utilizada para:

- **Recuperación de Datos y Copias de Seguridad**: Crear copias de seguridad del MBR para propósitos de recuperación ante desastres
- **Análisis Forense**: Extraer datos del MBR para investigaciones de seguridad e informática forense
- **Diagnóstico del Sistema**: Analizar información del sector de arranque para resolver problemas de inicio
- **Imaging de Discos**: Capturar el sector de arranque como parte de flujos de trabajo de imaging de discos completo
- **Mantenimiento del Sistema**: Guardar copias del MBR antes de realizar actualizaciones del sistema o migraciones
- **Propósitos Educativos**: Aprender sobre la estructura del disco y los procesos de arranque a nivel bajo
- **Análisis de Tabla de Particiones**: Examinar la información de particiones almacenada en el MBR

### ✨ Características

- **Soporte multiplataforma**: Funciona en Windows y GNU/Linux
- **Extracción eficiente**: Extrae los primeros 512 bytes del MBR de dispositivos especificados
- **Rutas específicas de plataforma**:
  - Windows: `\\.\PhysicalDrive0`
  - Linux: `/dev/sda`
- **Interfaz amigable**: Mensajes de error claros y solicitudes de confirmación
- **Dependencias mínimas**: Implementación pura en C sin librerías externas
- **Ligero**: Ejecutable pequeño con bajo consumo de recursos

### 📋 Requisitos

- Compilador `gcc` (disponible en la ruta del sistema)
- Privilegios de administrador o root para acceder a dispositivos físicos
- Un sistema compatible con POSIX (Windows o Linux)

### 🔨 Instrucciones de Compilación

Para compilar el ejecutable, use el Makefile proporcionado:

```bash
make build
```

**Salida:**
- Windows: `mbrextractor.exe`
- Linux/Otros: `mbrextractor`

### 📖 Uso

Ejecute el programa con la ruta del dispositivo y la ruta del archivo de salida como argumentos:

```
mbrextractor <ruta_dispositivo> <archivo_salida>
```

#### Ejemplos Básicos

**Windows - Extraer MBR de la primera unidad física:**
```bash
mbrextractor.exe \\.\PhysicalDrive0 mbr.bin
```

**Windows - Extraer MBR de la segunda unidad física:**
```bash
mbrextractor.exe \\.\PhysicalDrive1 mbr_disco1.bin
```

**Linux - Extraer MBR de /dev/sda:**
```bash
sudo ./mbrextractor /dev/sda mbr.bin
```

**Linux - Extraer MBR de /dev/sdb:**
```bash
sudo ./mbrextractor /dev/sdb mbr_disco2.bin
```

#### Ejemplos del Mundo Real

**Windows (con privilegios de administrador):**
```bash
# Abra Símbolo del sistema como administrador, luego ejecute:
mbrextractor.exe \\.\PhysicalDrive0 C:\copia_seguridad\mbr_backup.bin
mbrextractor.exe \\.\PhysicalDrive0 D:\forense\mbr_imagen.bin
```

**Linux (con sudo):**
```bash
# Extraer MBR con fecha y hora en el nombre del archivo
sudo ./mbrextractor /dev/sda ~/copia_seguridad/mbr_$(date +%Y%m%d).bin

# Extraer de múltiples discos
sudo ./mbrextractor /dev/sda ./mbr_sda.bin
sudo ./mbrextractor /dev/sdb ./mbr_sdb.bin
```

#### Comportamiento del Programa

1. Ejecute el programa con la ruta del dispositivo y la ruta del archivo de salida
2. El programa muestra la ruta del dispositivo y la ruta del archivo de salida para confirmación
3. Se le pedirá que confirme la operación de extracción
4. Si confirma, se leen los primeros 512 bytes (MBR) del dispositivo
5. Los datos del MBR se escriben en el archivo de salida especificado
6. Se muestra un mensaje de éxito con la ruta del archivo de salida

**Ejemplo de salida:**
```
Device:      \\.\PhysicalDrive0
Output file: mbr.bin
Proceed with extraction? (y/n): y
MBR successfully extracted to: mbr.bin
```

### ⚠️ Descargo de Responsabilidad

- **Requiere privilegios elevados**: Ejecute con permisos de administrador (Windows) o root (Linux)
- **Manéjelo con cuidado**: El uso incorrecto puede afectar la estabilidad del sistema
- **Haga una copia de seguridad primero**: Considere hacer una copia de seguridad de datos importantes antes de usar esta herramienta
- **Operación de solo lectura**: Esta herramienta solo lee desde dispositivos; no modifica ningún dato

### 👤 Autor

Creado por [isaachhk02](https://github.com/isaachhk02)

---

<div align="center">

Made with ❤️

</div>
