# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np
phy_scores = [15,12,8,8,7,7,7,6,5,3]
his_scores = [10,25,17,11,13,17,20,13,9,15]

phy_his = np.multiply(phy_scores,his_scores)
phy_sqr = np.power(phy_scores, 2)
his_sqr = np.power(his_scores, 2)

phy_his_sum = np.sum(phy_his)
phy_sum = np.sum(phy_scores)
his_sum = np.sum(his_scores)
phy_sqr_sum = np.sum(phy_sqr)
his_sqr_sum = np.sum(his_sqr)

carl_coeff = (10*phy_his_sum - (phy_sum)*(his_sum)) / np.sqrt( (10*phy_sqr_sum - np.power(phy_sum,2))*(10*his_sqr_sum - np.power(his_sum,2)) )
print "%.3f" % carl_coeff