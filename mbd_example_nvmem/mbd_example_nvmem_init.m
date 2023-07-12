% Selected SystemTargetFile
mbd_cfg_family = getParamFromConfig(bdroot, 'mbd_cfg_family');
mbd_cfg_device = getParamFromConfig(bdroot, 'mbd_cfg_device');
mbd_cfg_configurator = getParamFromConfig(bdroot, 'mbd_cfg_configurator');

% Select Variant
VAR_MBD_STM32F446 = Simulink.Variant('mbd_cfg_device=="STM32F446" && mbd_cfg_configurator=="on"');
VAR_MBD_STM32L452 = Simulink.Variant('mbd_cfg_device=="STM32L452" && mbd_cfg_configurator=="on"');

% Modify Target Specific Parameters 
if (mbd_cfg_family=="STM32")
    Peripheral_Clock_Hz = 72000000;
    Programmable_Clock_Hz = Peripheral_Clock_Hz;
    Slow_Clock_Hz = Peripheral_Clock_Hz;
    Clock_Divider0 = 100;
    Clock_Divider1 = 1000;
    Clock_Divider2 = 10000;

    % Diagnostic Communication Settings
    MBDDiag_Comm_USB_On = 1;
    MBDDiag_Comm_Module = [2 3];
    MBDDiag_Comm_Type = [1 1];   % 0=UART, 1=USART, 2=LPUART
    MBDDiag_Comm_Speed  = [921600 921600];    
else
    error 'Invalid target configuration';
end

Comm_Hz = 2000;
Comm_period_cycles = (Programmable_Clock_Hz/Clock_Divider1)/Comm_Hz;
Comm_clock_divider = Clock_Divider1-1;
T_s_COMM = 1/Comm_Hz;

LED1_Hz = 2;
LED2_Hz = 1;
LED1_period_cycles = (Slow_Clock_Hz/Clock_Divider1)/LED1_Hz;
LED2_period_cycles = (Slow_Clock_Hz/Clock_Divider1)/LED2_Hz;
LED1_clock_divider = Clock_Divider1-1;
LED2_clock_divider = Clock_Divider1-1;
T_s_LED1 = 1/LED1_Hz;
T_s_LED2 = 1/LED2_Hz;

%% Diagnostic block sampling rate
MBDPortal_CommonSampleRate = T_s_COMM;
MBDSnap_CommonSampleRate = T_s_COMM;

%% NVMEM device specific parameters
if (mbd_cfg_device=="STM32F446")
    NVMEM_DATA_ADDRESS = 0x8060000;
    NVMEM_ERASE_OFFSET = 7;
    NVMEM_ERASE_VOLTAGE = 2;
elseif (mbd_cfg_device=="STM32L452")
    NVMEM_DATA_ADDRESS = 0x807F800;
    NVMEM_ERASE_OFFSET = 255;
    NVMEM_ERASE_VOLTAGE = 0;
else
    error 'Invalid target configuration';
end