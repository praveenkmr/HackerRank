ar1 = [15  ,12 , 8 ,  8 ,  7,   7,   7,   6 ,  5  , 3]
ar2=[10  ,25 , 17 , 11  ,13 , 17  ,20  ,13  ,9  , 15]
sx=0;sy=0;sxy=0;sx2=0;n=len(ar1)
for i in range (len(ar1)):
    sx=sx+ar1[i]
    sy=sy+ar2[i]
    sxy=sxy+ ar1[i]*ar2[i]
    sx2=sx2 + ar1[i]**2
m=((n*sxy - sx*sy)/(n*sx2 - sx**2))
c = (sy*(sx2) - sx*sxy)/(n*sx2 - sx**2)
print (format((m*10 + c),'.3f'))