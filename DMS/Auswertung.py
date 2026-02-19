import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

### VORGEGEBENE WERTE ###
U_0 = 5 
R = 350
k = 2.0 #evtl auch 2.2

### AUSWERTUNG ###
data = pd.read_csv('DMS_Daten.txt', sep='\s+',header=None)
data = pd.DataFrame(data)
Zeit = data[0]
U_B = data[1]
delta_R = []
Errechnete_Dehnung = []

def del_R(U_B, U_0, R):
    return (((2*U_B)/U_0)*(2*R))/(1-((2*U_B)/U_0))

def Dehnung(delta_R, R, k):
    return delta_R/(R*k) 

for i in range(len(Zeit)):
    delta_R.append(del_R(U_B[i], U_0, R))
    Errechnete_Dehnung.append(Dehnung(delta_R[i], R, k))

Max_Dehnung = max(Errechnete_Dehnung)
Max_Dehnung_Zeit = Errechnete_Dehnung.index(Max_Dehnung)


plt.figure(figsize=(8, 5))
plt.plot(Zeit, U_B, color='green', label="Brueckenspannung")
plt.plot(Max_Dehnung_Zeit, Max_Dehnung, color='yellow', marker='o', label="Brueckenspannung Maximum")
plt.plot(Zeit, delta_R, color='red', label="delta_R")
plt.plot(Zeit, Errechnete_Dehnung, color='orange', label="Errechnete_Dehnung")
plt.xlabel("Zeit")
plt.ylabel("Dehnung")
plt.title("Dehnung ueber Zeit")
plt.xticks(range(0, len(Zeit), 10), Zeit[::10], rotation = 90)
plt.legend()
plt.show()





