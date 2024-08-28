class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
       output =0
       
       for i in hours:
         if i>=target:
          output = output+1
    
       return output
        