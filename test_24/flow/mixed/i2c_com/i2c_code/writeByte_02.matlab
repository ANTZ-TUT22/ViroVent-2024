function writeByteToSTM32()
    % Constants
    deviceAddress = uint8(hex2dec('40'));
    byteToWrite = uint8(hex2dec('10'));
    port = 'COM4';

    % Create serial object
    s = serialport(port, 'BaudRate', 9600);
    
    % Open the serial connection
    fopen(s);

    % Send command to switch to I2C mode
    fprintf(s, 'I2C_MODE');

    % Wait for the device to be ready
    pause(0.1);

    % Send the write command, followed by the device address and the byte to write
    fprintf(s, 'I2C_WRITE');
    fwrite(s, deviceAddress);
    fwrite(s, byteToWrite);

    % Close the serial connection
    fclose(s);

    % Delete the serial object
    delete(s);
end