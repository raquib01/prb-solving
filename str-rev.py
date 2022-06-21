# if word is >= 5 then reverse of that word else same word
str = "This is my bungalow"
newstr = ''
for word in str.split(' '):
    if len(word) >= 5:
        newstr += word[::-1] + ' '
    else:
        newstr += word + ' '

print(newstr) # lenghty way


# list comprehension way
print(' '.join([word[::-1] if len(word) >=5 else word for word in str.split(' ')]))
