import math

phy_scores = [15,12,8,8,7,7,7,6,5,3]
his_scores = [10,25,17,11,13,17,20,13,9,15]
phy_his = []
phy_sqr = []
his_sqr = []
phy_his_sum = 0
phy_sum = 0
his_sum = 0
phy_sqr_sum = 0
his_sqr_sum = 0
for i in range(0, 10):
    phy_his.append(phy_scores[i]*his_scores[i])
    phy_sqr.append(phy_scores[i]**2)
    his_sqr.append(his_scores[i]**2)
    
for i in range(0, 10):
    phy_his_sum += phy_his[i]
    phy_sum += phy_scores[i]
    his_sum += his_scores[i]
    phy_sqr_sum += phy_sqr[i]
    his_sqr_sum += his_sqr[i]
    
carl_coeff = (10*phy_his_sum - (phy_sum)*(his_sum)) / math.sqrt( (10*phy_sqr_sum - math.pow(phy_sum,2))*(10*his_sqr_sum - math.pow(his_sum,2)) )
print "%.3f" % carl_coeff

