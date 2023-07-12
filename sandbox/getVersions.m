function versions = getVersions()
    stm32.compiler.name = 'mbd_gcc_arm_cube';
    stm32.compiler.version = '1.5.0';
    stm32.programmer.name = 'mbd_prog_stm32';
    stm32.programmer.version = '2.11.0';
    stm32.dfp.name = 'mbd_dfp_stm32';
    stm32.dfp.version = '0.1.0';
    
    same70.compiler.name = 'mbd_gcc_xc32';
    same70.compiler.version = '3.01';
    same70.programmer.name = 'mbd_prog_mplab';
    same70.programmer.version = '5.45';
    same70.dfp.name = 'mbd_dfp_same70';
    same70.dfp.version = '0.1.1';

    versions = getMap(stm32, same70);
end

function versions = getMap(stm32, same70)
    versions = containers.Map({'arm-none-eabi - v1.5.0','xc32 - v3.01'},[{stm32}, {same70}]);
end