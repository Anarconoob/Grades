print ("Welcome to Grade Evaluator!")
name = input("Student: ")
g1 = float(input("Grade 1: "))
g2 = float(input("Grade 2: "))
g3 = float(input("Grade 3: "))
g4 = float(input("Grade 4: "))
FG = (g1 + g2 + g3 + g4) / 4
print("Final Grade: {:.2f}".format(FG))
if FG >= 6.0:
    print("Status: Approved")
elif FG >= 5.0:
    print("Status: In Recovery")
else:
    print("Status: Reproved")