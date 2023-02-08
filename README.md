# Wokwi-Chip-1-of-8-Decoder
## Description

This chip provides eight mutually exclusive outputs. The Select range control enables and sets the active-high output.

![image](https://user-images.githubusercontent.com/63488701/217451722-7d1f1ef6-e5df-45c5-a461-72c7272306c6.png)

| Select | D8   | D7   | D6   | D5   | D4   | D3   | D2   | D1   |
| ------ | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 0      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 0    |
| 1      | 0    | 0    | 0    | 0    | 0    | 0    | 0    | 1    |
| 2      | 0    | 0    | 0    | 0    | 0    | 0    | 1    | 0    |
| 3      | 0    | 0    | 0    | 0    | 0    | 1    | 0    | 0    |
| 4      | 0    | 0    | 0    | 0    | 1    | 0    | 0    | 0    |
| 5      | 0    | 0    | 0    | 1    | 0    | 0    | 0    | 0    |
| 6      | 0    | 0    | 1    | 0    | 0    | 0    | 0    | 0    |
| 7      | 0    | 1    | 0    | 0    | 0    | 0    | 0    | 0    |
| 8      | 1    | 0    | 0    | 0    | 0    | 0    | 0    | 0    |

## Usage

To use this chip in your project, include it as a dependency in your `diagram.json` file:

```json
  "dependencies": {
    "chip-1-of-8-Decoder": "github:Dlloydev/Wokwi-Chip-1-of-8-Decoder@1.0.1"
  }
```

Then, add the chip to your circuit by adding a `chip-1-of-8-Decoder` item to the `parts` section of `diagram.json`:

```json
  "parts": {
    ...,
    { "type": "chip-1-of-8-Decoder", "id": "chip-1-of-8-Decoder1" }
  },
```

The actual source code for the chip lives in [src/main.c](https://github.com/Dlloydev/Wokwi-Chip-1-of-8-Decoder/blob/main/src/main.c), and the pins are described in [chip.json](https://github.com/Dlloydev/Wokwi-Chip-1-of-8-Decoder/blob/main/chip.json).

## Example

[![Wokwi_badge](https://user-images.githubusercontent.com/63488701/212449119-a8510897-c860-4545-8c1a-794169547ba1.svg)](https://wokwi.com/projects/356076142332534785) 1 of 8 Decoder Example

## License

This project is licensed under the MIT license. See the [LICENSE](https://github.com/Dlloydev/Wokwi-Chip-1-of-8-Decoder/blob/main/LICENSE) file for more details.
