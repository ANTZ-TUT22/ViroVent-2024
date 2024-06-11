# test_24:

## Dedicated test models/simulations:

### flow:

* Test model for flow sensor (SFM3200) with Nucleo + Add-on board, I2C 14-bit input
* **esp32_01** - EPS32 "middle-man" model for passing I2C comms between Ctrl-Board & Flow Snesor
* **flow_sns** - sub-models: flow_sns, i2c_com, i2c_temp, write
* **i2c_com**  - Test model for I2C comms initialise & continuous flow signal read commands
* **i2c_temp** - I2C temperature sensor example; init & continuous signal read 
* **write**    - 

### MF_FiO2:

* Mass Flow (FiO2) control model and simulation 
* Hardware control test --> I2C - DAC - 4/20mA - Mass_Floww
* Various versions of calculated algorithm based on O2 & Air flow rates:
	* **FiO2** - Mass_Flow & FiO2 formula with real-time flow sensor read block (I2C)
	* **mass_flow** - Previous MF & FiO2 formula (Early 2023)
	* **MF_Valve0** - Simple MF Valve control test. Simulated output values repeated
	* **MF_Valve1** - MF/FiO2 conversion factor to I2C value based on both ranges
	* **MF_Valve2** - Flow_Sns Read; MF & FiO2 Algorithm; MF_Valve_Write; HMI_Write
	* **MF_Valve3** - 4 variations (+old) of the FiO2 & MF algorithms (Simulation only)
	* **MF_Valve4** - 6 variations of the latest FiO2 & MF algorithms (Simulation only)
	* **MF_Valve5** - "MF_Valve2" with updated control algorithm (2024-01)

### motor:

#### mtr_test:

* Motor control (I2C_0) with and without input Pressure Sensor (SPI_0)
* PinOuts setup for Control Board's hardware

#### nucleo_mtr

* Motor control (I2C) with and without input Pressure Sensor (SPI)
* PinOuts setup for Nucleo to breakout board

#### pid_tune

* Tested and tuning PID controller (
* Pressure sensor (SPI) + Motor Control (I2C) + Exhale Valve (PWM) + PID Control
* Open/Closed Loop options

### timing

* Synchronising the timing between Inhale/Exhale Pressure_Sns, Motor_Ctrl & Exhale_Valve

### trigger

* Breathing trigger test model
* Trigger on slight spike on the end of the inhale/exhale waveform