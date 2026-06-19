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

MBR Extractor is a simple yet powerful command-line utility that allows you to extract the Master Boot Record (MBR) from physical devices such as hard drives and save it to a binary file. The tool supports both Windows and Linux platforms with appropriate device path handling for each operating system.

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

#### Windows Example

```bash
mbrextractor.exe \\.\PhysicalDrive0 mbr.bin
```

#### Linux Example

```bash
./mbrextractor /dev/sda mbr.bin
```

#### Behavior

- If run without arguments or with incorrect arguments, the program displays usage instructions
- The program prompts for confirmation before extracting the MBR
- Extraction saves the first 512 bytes to the specified output file

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

MBR Extractor es una utilidad de línea de comandos simple pero poderosa que le permite extraer el Registro de Arranque Maestro (MBR) de dispositivos físicos como discos duros y guardarlo en un archivo binario. La herramienta es compatible con plataformas Windows y Linux con manejo apropiado de rutas de dispositivos para cada sistema operativo.

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

#### Ejemplo en Windows

```bash
mbrextractor.exe \\.\PhysicalDrive0 mbr.bin
```

#### Ejemplo en Linux

```bash
./mbrextractor /dev/sda mbr.bin
```

#### Comportamiento

- Si se ejecuta sin argumentos o con argumentos incorrectos, el programa muestra instrucciones de uso
- El programa solicita confirmación antes de extraer el MBR
- La extracción guarda los primeros 512 bytes en el archivo de salida especificado

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
