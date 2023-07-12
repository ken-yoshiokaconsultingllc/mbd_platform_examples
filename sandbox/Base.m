classdef Base
    %UNTITLED Summary of this class goes here
    %   Detailed explanation goes here

    properties
        Property1
        basePath
    end

    methods
        function obj = Base(inputArg1,inputArg2)
            %UNTITLED Construct an instance of this class
            %   Detailed explanation goes here
            obj.Property1 = inputArg1 + inputArg2;
            obj.basePath = fileparts(fileparts(mfilename('fullpath')));

        end

        function outputArg = method1(obj,inputArg)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            outputArg = obj.Property1 + inputArg;
        end
    end
end