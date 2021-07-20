/*!
 *  @brief Example shows basic setup of sensor which includes following
 *      Initialization of the interface.
 *      performing the sensor initialization.
 */

#include "stdio.h"
#include "bmp280/bmp280.h"
#include "linux/i2cutils.h"
#include "utils.h"

int main(void)
{
    int8_t rslt;
    struct bmp280_dev bmp;

    /* Map the delay function pointer with the function responsible for implementing the delay */
    bmp.delay_ms = delay_ms;

    /* Assign device I2C address based on the status of SDO pin (GND for PRIMARY(0x76) & VDD for SECONDARY(0x77)) */
    bmp.dev_id = BMP280_I2C_ADDR_PRIM;

    /* Select the interface mode as I2C */
    bmp.intf = BMP280_I2C_INTF;

    /* Map the I2C read & write function pointer with the functions responsible for I2C bus transfer */
    bmp.read = i2c_reg_read;
    bmp.write = i2c_reg_write;

    rslt = bmp280_init(&bmp);
    print_rslt(" bmp280_init status", rslt);

    return 0;
}

/* Local Variables:  */
/* mode: c           */
/* c-basic-offset: 4 */
/* End:              */
