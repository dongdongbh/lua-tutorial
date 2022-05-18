-- ---------- CONDITIONALS ----------
-- Relational Operators : > < >= <= == ~=
-- Logical Operators : and or not

age = 13

if age < 16 then
    io.write("You can go to school", "\n")
    local localVar = 10
elseif (age >= 16) and (age < 18) then
    io.write("You can drive", "\n")
else
    io.write("You can vote", "\n")
end

-- A variable marked local is local only to this if statement
-- io.write("Local Variable : ", localvar)

if (age < 14) or (age > 67) then io.write("You shouldn't work\n") end

-- Format, convert to string and place boolean value with string.format
print(string.format("not true = %s", tostring(not true)))

-- There is no ternary operator in Lua
-- canVote = age > 18 ? true : false

-- This is similar to the ternary operator
canVote = age > 18 and true or false
io.write("Can I Vote : ", tostring(canVote), "\n")

-- There is no Switch statement in Lua
