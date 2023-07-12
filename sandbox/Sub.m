classdef Sub < Base
    %UNTITLED2 Summary of this class goes here
    %   Detailed explanation goes here

    properties
        Property2
    end

    methods
        function obj = Sub(inputArg1,inputArg2)
            %UNTITLED2 Construct an instance of this class
            %   Detailed explanation goes here
            obj@Base(inputArg1, inputArg2);
            obj.Property2 = inputArg1 * inputArg2;
        end

        function outputArg = method1(obj,inputArg)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            outputArg = obj.Property2 * inputArg;
        end
        function outputArg = method2(obj,inputArg)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            outputArg = obj.Property2 * inputArg;
        end
    end
end