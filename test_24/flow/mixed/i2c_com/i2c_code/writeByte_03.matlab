function writeByteToSTM32()
    %arduinoObj = arduino('COM3','Uno','Libraries','I2C');  % ERROR

    board =  'NUCLEO-L476RG';                               % Options: nucleo; / nucleo('COM4');
    %pinMode = configurePin(board,'P10');                   % Get pin config - ERROR
    configurePin(board, 'D14', 'I2C SDA');                  % ERROR: undefined
    configurePin(board, 'D15', 'I2C SCL');                  % ERROR: undefined

    deviceAddress = hex2dec('40');
    byteToWrite = hex2dec('10');

    writeRegister(board, deviceAddress, byteToWrite);       % ERROR: undefined
end