import numpy as np
import pandas as pd
import matplolib.pyplot as plt

data = pd.read_csv('DMS_Daten.txt', sep='\s+',header=None)
data = pd.DataFrame(data)


x = data[0]
y = data[1]


