# Linux BMP280

This is the Linux implementation of the official Bosch BMP280 examples
available at https://github.com/BoschSensortec/BMP280_driver .

Tested under Debian GNU/Linux 10 and a Raspberry Pi 4 .

## Building

```
$ make
```

## Running

```
$ ./build/temperature
UT: 524288, T32: 2495, T: 24.950590
UT: 542776, T32: 3063, T: 30.631387
UT: 542776, T32: 3063, T: 30.631387
UT: 542776, T32: 3063, T: 30.631387
^C
```

```
$ ./build/pressure
UP: 524288, P32: 64555, P64: 16525345, P64N: 64552, P: 64552.135062
UP: 387216, P32: 86664, P64: 22184980, P64N: 86660, P: 86660.081704
UP: 387216, P32: 86664, P64: 22184980, P64N: 86660, P: 86660.081704
UP: 387216, P32: 86664, P64: 22184980, P64N: 86660, P: 86660.081704
^C
```
