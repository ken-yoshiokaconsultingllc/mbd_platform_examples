classdef MaskTest
    %UNTITLED Summary of this class goes here
    %   Detailed explanation goes here

    properties
        value
    end

    methods
        function obj = MaskTest(cb)
            %UNTITLED Construct an instance of this class
            %   Detailed explanation goes here
            disp('MaskTest -> initialize');
            disp(cb);
            disp(gcb);

            this = Simulink.Mask.get(cb);

        end

        function icon(~,cb)
            disp('MaskTest -> icon');
            disp(cb);
            disp(gcb);
        end

        function callback(~,cb)
            %METHOD1 Summary of this method goes here
            %   Detailed explanation goes here
            disp('MaskTest -> callback');
            disp(cb);
            disp(gcb);
        end

    end
end