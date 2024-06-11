#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "stm32l4xx.h"
#include "MW_MbedPinInterface.h"
#include "SysTickScheduler.h"
#include "arm_cortex_m_multitasking.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE STM32 Nucleo L476RG
#define MW_CONNECTIONINFO_SERIAL_BAUDRATE 115200
#define MW_CONNECTIONINFO_SERIAL_COMPORT COM4
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 1
#define MW_EXTMODE_CONFIGURATION serial
#define MW_EXTMODE_SIGNALBUFFERSIZE 2000.000000
#define MW_EXTMODE_USEREALTIMESTAMPLOGGING 1
#define MW_EXTMODE_RUNNING on
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_HOSTDRIVE_SET_HOST_DRIVE 0
#define MW_HOSTDRIVE_DRIVE F:
#define MW_HOSTCOMPORT_COM_PORT_NUMBER COM1
#define MW_SIMULINKIO_TRANSPORTLAYERTYPE 0
#define MW_SIMULINKIO_MODELTRANSPORTDATAFCN codertarget.simulinkIO.stmnucleo.getModelTransportInfo
#define MW_SIMULINKIO_SERVERDEPLOYFCN codertarget.simulinkIO.stmnucleo.updateServer
#define MW_CLOCKING_CPUCLOCKRATEMHZ 80
#define MW_I2C0_BUSSPEEDHZ 100000
#define MW_I2C0_SCL_INDEX 0
#define MW_I2C0_SDA_INDEX 0
#define MW_I2C0_SCL D15
#define MW_I2C0_SDA D14
#define MW_I2C2_BUSSPEEDHZ 100000
#define MW_I2C2_SCL_INDEX 0
#define MW_I2C2_SDA_INDEX 0
#define MW_I2C2_SCL D6
#define MW_I2C2_SDA PB_11
#define MW_I2C3_BUSSPEEDHZ 100000
#define MW_I2C3_SCL_INDEX 0
#define MW_I2C3_SDA_INDEX 0
#define MW_I2C3_SCL A5
#define MW_I2C3_SDA A4
#define MW_SPI0_BUSSPEEDHZ 1000000
#define MW_SPI0_MOSIPIN_INDEX 1
#define MW_SPI0_MISOPIN_INDEX 1
#define MW_SPI0_SCKPIN_INDEX 1
#define MW_SPI0_MOSIPIN D11
#define MW_SPI0_MISOPIN D12
#define MW_SPI0_SCKPIN D13
#define MW_SPI2_BUSSPEEDHZ 1000000
#define MW_SPI2_MOSIPIN_INDEX 0
#define MW_SPI2_MISOPIN_INDEX 0
#define MW_SPI2_SCKPIN_INDEX 0
#define MW_SPI2_MOSIPIN PB_15
#define MW_SPI2_MISOPIN PB_14
#define MW_SPI2_SCKPIN PB_13
#define MW_SPI3_BUSSPEEDHZ 1000000
#define MW_SPI3_MOSIPIN_INDEX 0
#define MW_SPI3_MISOPIN_INDEX 0
#define MW_SPI3_SCKPIN_INDEX 0
#define MW_SPI3_MOSIPIN PC_12
#define MW_SPI3_MISOPIN PC_11
#define MW_SPI3_SCKPIN PC_10
#define MW_SCI1_BAUDRATE 115200
#define MW_SCI1_RXPIN_INDEX 0
#define MW_SCI1_TXPIN_INDEX 0
#define MW_SCI1_DATABITS 8
#define MW_SCI1_PARITY 0.000000
#define MW_SCI1_STOPBITS 1.000000
#define MW_SCI1_RXPIN D2
#define MW_SCI1_TXPIN D10
#define MW_SCI0_BAUDRATE 115200
#define MW_SCI0_RXPIN_INDEX 0
#define MW_SCI0_TXPIN_INDEX 0
#define MW_SCI0_DATABITS 8
#define MW_SCI0_PARITY 0.000000
#define MW_SCI0_STOPBITS 1.000000
#define MW_SCI0_RXPIN D0
#define MW_SCI0_TXPIN D1
#define MW_SCI3_BAUDRATE 115200
#define MW_SCI3_RXPIN_INDEX 0
#define MW_SCI3_TXPIN_INDEX 0
#define MW_SCI3_DATABITS 8
#define MW_SCI3_PARITY 0.000000
#define MW_SCI3_STOPBITS 1.000000
#define MW_SCI3_RXPIN PC_11
#define MW_SCI3_TXPIN D6
#define MW_SCI4_BAUDRATE 115200
#define MW_SCI4_RXPIN_INDEX 0
#define MW_SCI4_TXPIN_INDEX 0
#define MW_SCI4_DATABITS 8
#define MW_SCI4_PARITY 0.000000
#define MW_SCI4_STOPBITS 1.000000
#define MW_SCI4_RXPIN A1
#define MW_SCI4_TXPIN A0
#define MW_SCI5_BAUDRATE 115200
#define MW_SCI5_RXPIN_INDEX 0
#define MW_SCI5_TXPIN_INDEX 0
#define MW_SCI5_DATABITS 8
#define MW_SCI5_PARITY 0.000000
#define MW_SCI5_STOPBITS 1.000000
#define MW_SCI5_RXPIN PD_2
#define MW_SCI5_TXPIN PC_12
#define MW_RS485_RS485_SERIAL 0
#define MW_RS485_RS485_DEPIN 8
#define MW_RS485_RS485_REPIN 9
#define MW_MODBUS_MODBUS_COMMS 0
#define MW_MODBUS_MODBUS_MODE 0
#define MW_MODBUS_MODBUS_SERVERID 1
#define MW_MODBUS_MODBUS_CONFIGCOIL 49
#define MW_MODBUS_MODBUS_COILADDR 0
#define MW_MODBUS_MODBUS_COILNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUT 49
#define MW_MODBUS_MODBUS_INPUTADDR 0
#define MW_MODBUS_MODBUS_INPUTNUM 1
#define MW_MODBUS_MODBUS_CONFIGHOLDINGREG 49
#define MW_MODBUS_MODBUS_HOLDINGREGADDR 0
#define MW_MODBUS_MODBUS_HOLDINGREGNUM 1
#define MW_MODBUS_MODBUS_CONFIGINPUTREG 49
#define MW_MODBUS_MODBUS_INPUTREGADDR 0
#define MW_MODBUS_MODBUS_INPUTREGNUM 1
#define MW_MODBUS_MODBUS_CLIENTTIMEOUT 100
#define MW_PIL_INTERFACE 0
#define MW_PIL_COMPORT COM4
#define MW_SENSOR_FILELOCATION codertarget.mbed.internal
#define MW_DATAVERSION 2016.02
#define MW_IOBLOCKSMODE deployed

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
