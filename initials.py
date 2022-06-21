# Initials of name
# eg: John Cannedy J.C

name = 'Khan Raquib Husain'
initial = ""
for item in name.split(' '):
    initial += (item[0])
    initial += '.'

print(initial) # length way

# list comprehension way
print('.'.join([item[0] for item in name.split(' ')]))