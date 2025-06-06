Carvans: (link : https://www.codechef.com/LRNDSA01/problems/CARVANS?tab=statement)

Most problems on CodeChef highlight chef's love for food and cooking but little is known about his love for racing sports. He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder how many cars were moving at their maximum speed.
Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight segment is infinitely long.

Count the number of cars which were moving at their maximum speed on the straight segment.

Input
The first line of the input contains a single integer T denoting the number of test cases to follow. Description of each test case contains 2 lines. The first of these lines contain a single integer N, the number of cars. The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.

Output
For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.

Constraints
1 ≤ T ≤ 100
1 ≤ N ≤ 10,000
All speeds are distinct positive integers that fit in a 32 bit signed integer.
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size.

WARNING! The input files are very large. Use faster I/O.

Sample 1:
Input: 

3

1

10

3

8 
3
6

5

4
5
1
2 
3

Output: 
1
2
2
Explanation:
Test case 
1
1: There is only 
1
1 car. Thus, it can move at its maximum speed.

Test case 
2
2: The first car moves at speed 
8
8. The second car can move at speed 
3
3 without colliding with the first car. For the third car, if it moves at speed 
6
6, it would collide with the second car after some finite amount of time. The maximum speed at which the third car can move avoiding any collision is 
3
3. Thus, 
2
2 cars can move at their maximum speed.

Test case 
3
3: Following are the maximum speeds of all the cars.

The first car moves at a maximum speed of 
4
4.
The maximum speed at which the second car can move without colliding is 
4
4.
The third car can move at its maximum speed which is 
1
1.
The maximum speed at which the fourth car can move without colliding is 
1
1.
The maximum speed at which the fifth car can move without colliding is 
1
1.
Thus, two cars can move at their maximum speed. These cars are car 
1
1 and 
3
3.

accepted
Accepted
405
total-Submissions
Submissions
63913
accuracy
Accuracy
0.78
Did you like the problem statement?
37 users found this helpful
More Info
Time limit3 secs
Memory limit1.5 GB
Source Limit50000 Bytes
C++

}

