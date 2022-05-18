-- ---------- MODULES ----------
-- A Module is like a library full of functions and variables

-- Use require to gain access to the functions in the module
convertModule = require("convert")

-- Execute the function in the module
print(string.format("%.3f cm", convertModule.ftToCm(12)))

