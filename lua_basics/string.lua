-- ---------- STRINGS ----------
quote = "I changed my password everywhere to 'incorrect.' That way when I forget it,it always reminds me, 'Your password is incorrect.'"

io.write("Quote Length : ", string.len(quote), "\n")

-- Return the string after replacing
io.write("Replace I with me : ", string.gsub(quote, "I", "me"), "\n")

-- Find the index of a matching String
io.write("Index of password : ", string.find(quote, "password"), "\n")

-- Set characters to upper and lowercase
io.write("Quote Upper : ", string.upper(quote), "\n")
io.write("Quote Lower : ", string.lower(quote), "\n")
