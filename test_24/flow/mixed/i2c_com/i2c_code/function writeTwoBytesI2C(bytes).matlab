function writeTwoBytesI2C(bytes)
    %board = 'Uno';%'Nucleo L476RG';
    %arduinoObj = arduino('COM4', board, 'Libraries', 'I2C');
    deviceAddress = hex2dec('40');
    
    % Data to write %
    %dataToWrite = uint8([0x10, 0x00]);
    dataToWrite = uint8(bytes);
    
    % Write data to I2C bus %
    %write(arduinoObj, deviceAddress, dataToWrite, 'uint8');

    %=======================================================%
    % Create a serial port object %
    s = serialport("COM4", 9600); % baud rate = Hardware bus speed 100000?
    
    % Write data %
    %writeline(s, "0x10 0x00"); % for example
    %writeline(s, dataToWrite);
    write(s, dataToWrite);

    %=======================================================%
    %target = 'Nucleo L476RG'; ???
    %dev = device(target,'deviceAddress','0x55');

    %dataIn = [0 1 2 3 4 5];
    %write(dev,dataIn);
end