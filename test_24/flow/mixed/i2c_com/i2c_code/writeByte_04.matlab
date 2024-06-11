function writeByteToSTM32
    deviceAddress = '0x40';
    byteToWrite = uint8(16); % 0x10

    % Create an I2C object
    i2cObj = i2c('COM4', hex2dec(deviceAddress));

    % Open the connection
    fopen(i2cObj);

    % Write the byte
    fwrite(i2cObj, byteToWrite);

    % Close and delete the object
    fclose(i2cObj);
    delete(i2cObj);
end
