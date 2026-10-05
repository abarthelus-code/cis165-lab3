# cis165-lab3


Plan for "diamond.cpp"

-use cout and endl to makes a diamond shape.

Plan for "game_time.cpp" 

- list level 1 and 2 minutes given as variables use formulas to calculate the hours and remaining minutes for level 1 and 2. Subtract the given minutes for level 2 and 1 and use the same formulas to find the difference in time.


Program/test	               Values or pattern checked	    Expected result before running	    Actual output	    Match or correction
diamond.cpp	                   Seven required lines	          1s3s5s7s5s3s1s  (s = star)        1s3s5s7s5s3s1s          Match
game_time.cpp — assigned values	78 and 144 minutes		        1hr18m 2hr24m 1hr6m             1hr18m 2hr24m 1hr6m	      Match
game_time.cpp — changed values	90 and 198 minutes	    	    1hr30m 3hr18m 1hr48m            1hr30m 3hr18m 1hr48m      Match
All values tested.

For diamond.cpp, explain how your output statements create the required shape. How did you check spaces that are difficult to see?
- I used the "endl" to space and go to the next line each time to form the shape and used "" to make the diamond.

For game_time.cpp, explain how integer division and the remainder operator convert total minutes into hours and remaining minutes.
- integer division is the reason that dividing the minutes by 60 gives a 1,2,3 to display the hours, if double was used it would produce a decimal. The remainder operator is important because it helps show the remaining minutes by using it with 60.

Trace the assigned Level 1 and Level 2 values through your variables, including the calculation of the difference.
- Level1hours = 78/60. Level2hours = 144/60 . level1mins = 78%60. level2mins = 144%60. difference = 144 - 78 = 66. hour_difference = 66/60. minute_difference = 66%60.

Explain why the assignment asks you to store calculations in variables before using cout
- Makes the final cout expression more neat and seamless to use with different values.

  To run upload files in onlineGDB
