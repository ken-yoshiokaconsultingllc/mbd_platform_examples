function build_all_examples(skip_cubemx)
    models = {'mbd_example_led','mbd_example_pwm','mbd_example_uart','mbd_example_usb','mbd_example_pb','mbd_example_diag','mbd_example_adc','mbd_example_qdec','mbd_example_i2c'};

    if (nargin == 0)
        skip_cubemx = 0;
    end
    for i=1:length(models)
        % Change dir and open model
        cd(models{i});
        open_system(models{i});

        % Select STM32 device and test with and without cubemx
        mbd_set_device('STM32F446', models{i});
        % Find the MBD_Target_Info block
        [block, ~, long_err] = mbd_get_targetConfigBlock(models{i});
        error(long_err);
        % Change Param_cubemx state of block then clean and build
        change_cubemx_build(block, skip_cubemx);
        % Change Param_cubemx state of block then clean and build
        change_cubemx_build(block, skip_cubemx);

        % Select SAME70 device and test
        mbd_set_device('SAME70', models{i});
        mbd_toolstrip_clean;
        mbd_toolstrip_build;

        % Close system and return to root folder
        close_system(models{i});
        cd('..');
    end

end

function change_cubemx_build(block, skip_cubemx)
    % Change Param_cubemx state
    if (isequal(get_param(block,'Param_cubemx'),'off'))
        set_param(block,'Param_cubemx','on');
    else
        set_param(block,'Param_cubemx','off');
    end
    % Clean and build
    if (~skip_cubemx || isequal(get_param(block,'Param_cubemx'),'off'))        
        mbd_toolstrip_clean;
        mbd_toolstrip_build;
    end
end