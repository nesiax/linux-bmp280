# Makefile

# add -DI2C_DEBUG for debugging
DEFS =

#INC=-Ibmp280/
INC=

all:	build/basic build/pressure build/temperature

build/basic	:	basic.c
	mkdir -p build
	gcc $(DEFS) $(LIB) $(INC) -li2c basic.c utils.c bmp280/bmp280.c linux/i2cutils.c linux/i2cbusses.c -o build/basic

build/pressure	:	pressure.c
	mkdir -p build
	gcc $(DEFS) $(LIB) $(INC) -li2c pressure.c utils.c bmp280/bmp280.c linux/i2cutils.c linux/i2cbusses.c -o build/pressure

build/temperature	:	temperature.c
	mkdir -p build
	gcc $(DEFS) $(LIB) $(INC) -li2c temperature.c utils.c bmp280/bmp280.c linux/i2cutils.c linux/i2cbusses.c -o build/temperature

clean:
	rm -f *.o build/basic build/pressure build/temperature
