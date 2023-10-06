# RP 2040 Programming

### Nomenclature:
[RP2040 Documentation](https://www.raspberrypi.com/documentation/microcontrollers/rp2040.html)

- **RP2040**: A microcontroller by Raspberry Pi
- **Raspberry** Pico: An RP2040-based microcontroller board

### SDK (Software Development Kit):
- Arduino   
  [Documentation](https://arduino-pico.readthedocs.io/en/latest/index.html)
    - similar experience to arduino programming
    - not feature complete (may be outdated)
    - easy setup with platformio
- Raspberry Pi Pico C/C++ SDK   
  [Install](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf) page 6/7   
  [Documentation](https://www.raspberrypi.com/documentation/pico-sdk/index_doxygen.html)
- Raspberry Pi Pico Python SDK

(Note: even the manufacturer isn't consistent with the naming)


## Install SDK
Requisites:

Fedora:
```bash
sudo dnf install gcc-arm-linux-gnu \
 arm-none-eabi-gcc-cs-c++ \
 arm-none-eabi-gcc-cs \
 arm-none-eabi-binutils \
 arm-none-eabi-newlib\
 git
```

Debian:
```bash
sudo apt install cmake gcc-arm-none-eabi libnewlib-arm-none-eabi git
```

## Build
`cmake` takes long (6 min) when isn't downloaded.
```bash
# create build folder
mkdir build
cd build

cmake ..        # create make environment (downloads/links sdk)
make -j 4       # build project
```

Too flash copy `main.uf2` to RP2040 and reboot

## Tools
- Serial Monitor: `minicom -D /dev/ttyACM0`   
  Don't forget to enable in CMakeList


# Useful Links:
- [RP 2040 Documentation](https://www.raspberrypi.com/documentation/microcontrollers/rp2040.html#documentation)