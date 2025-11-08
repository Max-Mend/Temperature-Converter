# Temperature Converter

A simple command-line temperature converter written in C that converts between Celsius and Fahrenheit with range validation.

## Features

- **Bidirectional Conversion**
  - Celsius to Fahrenheit (°C → °F)
  - Fahrenheit to Celsius (°F → °C)

- **Range Validation**
  - Celsius: Normal range 0°C to 50°C
  - Fahrenheit: Normal range 32°F to 122°F
  - Warns when temperatures are outside normal ranges

- **Interactive Loop**
  - Continuous conversion until user quits
  - Simple input format: `number unit`
  - Type `q` to exit

## Installation

Compile the program using any C compiler:

```bash
gcc main.c -o tempconv
```

Or using clang:

```bash
clang main.c -o tempconv
```

## Usage

Run the program:

```bash
./tempconv
```

### Input Format

Enter a number followed by the unit:
- `c` for Celsius
- `f` for Fahrenheit
- `q` to quit

### Examples

```
Enter number followed by unit ('c', 'f') or 'q' to quit:
25 c
Fahrenheit: 77.00

100 f
Celsius: 37.78

-10 c
Fahrenheit: 14.00
Celsius out of range, below normal

60 c
Fahrenheit: 140.00
Fahrenheit out of range, higher than normal

q
```

## How It Works

### Conversion Formulas

- **Celsius to Fahrenheit:** `F = C × 9/5 + 32`
- **Fahrenheit to Celsius:** `C = (F - 32) × 5/9`

### Normal Temperature Ranges

| Unit | Min | Max |
|------|-----|-----|
| Celsius | 0°C | 50°C |
| Fahrenheit | 32°F | 122°F |

These ranges represent typical comfortable ambient temperatures. The program will notify you when converted values fall outside these ranges.

## Error Handling

- **Unknown unit:** Program will display an error and prompt for new input
- **Invalid input:** Program will display an error and continue
- **Out of range:** Program displays a warning but still shows the converted value

## Requirements

- C compiler (GCC, Clang, MSVC, etc.)
- Standard C library
- C99 or higher (uses `stdbool.h`)

## Platform Support

Works on all major platforms:
- ✅ Windows
- ✅ Linux
- ✅ macOS
- ✅ Any system with a C compiler

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contributing

Contributions are welcome! Feel free to submit issues or pull requests.

## Author

**Max-Mend**

---
