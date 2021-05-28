x = int(input('Enter any Number : '))
if(x < 0):
    print('x is Negative')
    if(x % 2 == 0):
        print('X is even Number')
    else:
        print('x  is odd Number')
else:
    print('x is Positive Number')
    if(x % 2 == 0):
        print('x is even Number')
    else:
        print('x is odd Number')
