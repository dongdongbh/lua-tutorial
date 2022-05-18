-- ---------- TABLES ----------
-- Tables take the place of arrays, dictionaries, tuples, etc.

-- Create a Table
aTable = {}

-- Add values to a table
for i = 1, 10 do
  aTable[i] = i
end

-- Access value by index
io.write("First Item : ", aTable[1], "\n")

-- Items in Table
io.write("Number of Items : ", #aTable, "\n")

-- Insert in table, at index, item to insert
table.insert(aTable, 1, 0)

-- Combine a table as a String and seperate with provided seperator
print(table.concat(aTable, ", "))

-- Remove item at index
table.remove(aTable, 1)
print(table.concat(aTable, ", "))

-- Sort items in reverse
table.sort(aTable, function(a,b) return a>b end)
print(table.concat(aTable, ", "))

-- Create a multidimensional Table
aMultiTable = {}

for i = 0, 9 do
  aMultiTable[i] = {}
  for j = 0, 9 do
    aMultiTable[i][j] = tostring(i) .. tostring(j)
  end
end

-- Access value in cell
io.write("Table[1][2] : ", aMultiTable[1][2], "\n")

-- Cycle through and print a multidimensional Table
for i = 0, 9 do
  for j = 0, 9 do
    io.write(aMultiTable[i][j], " : ")
  end
  print()
end
