print("Hello World")
-- Here is a comments

--[[mutil-line
comments]]

-- variables
name = "A String"

io.write("Size of string ", #name, "\n")

name = 4

longString = [[
    I amm a very very long
    string that goes on
    forever.]]

io.write(longString, "\n")

NewString = "Mike"

-- combining string
longString = longString .. NewString

io.write(longString, "\n")

isAbleToDrive = true

io.write(type(isAbleToDrive), "\n")

