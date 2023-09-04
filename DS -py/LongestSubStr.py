n=5
arr=[-1,0,3,8,-8]
csum=sum=0
for i in range(0,n):
    csum=csum+arr[i]
    if csum<0:
        csum=0
    sum=max(sum,csum)
print("Longest Subsequnt sum: ",sum)
