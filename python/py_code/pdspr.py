import pandas as pd 

ttn_df = pd.read_csv('train.csv')
print('titanic 변수 type:', type(ttn_df))
ttn_df.head(3)


