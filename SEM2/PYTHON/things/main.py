





from PyQt5.QtWidgets import QApplication, QWidget, QLineEdit, QHBoxLayout, QLabel, QPushButton
import numpy as np 





def check (min , max, n) :
    if min <= n <= max : 
        return True 
    
    return False 
import numpy as np


def pgcd(x, y):
    
    def is_prime(x):
        if x <= 1:
            return False
        for i in range(2, x // 2):
            if x % i == 0:
                return False
        return True
        
    def factorize(x):
        f = {}
        i = 2
        while x > 1:
            if x % i == 0:
                f[i] = f.get(i, 0) + 1
                x = x // i
            else:
                i += 1
                while not(is_prime(i)):
                    i += 1
        return f
        
    fx = factorize(x)
    fy = factorize(y)
    
    _gcd = 1
    for i in fx.keys():
        
        print()
        factor = i ** min(fx.get(i, 0), fy.get(i, 0))
        _gcd *= factor
    return _gcd
    
    



def Calculate(a, b) :
    if check(2, a, 100) and check(2, b, a) : 
        #set result text 
        result.setText("PGCD(a,b) = " + str(pgcd(a,b))) 
    else :
        result.setText("PGCD(a,b) = ERROR (Invalid a number or b number)")



app = QApplication([])
global a , b ,result 

window = QWidget()


a_title = QLabel("Enter Number A")
b_title = QLabel("Enter Number B")

a = QLineEdit()
b = QLineEdit()
result = QLabel("PGCD(a,b) = ")
button = QPushButton("PGCD IS ")
button.clicked.connect(lambda : Calculate(int(a.text()), int(b.text())))


layout = QHBoxLayout()

resultLayout = QHBoxLayout()


layout.addWidget(a_title)
layout.addWidget(a)
layout.addWidget(b_title)
layout.addWidget(b)
layout.addWidget(button)
layout.addWidget(result)







window.setLayout(layout)
window.show()

app.exec()