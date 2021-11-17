/* count set bits
 Program Explanation and Tasks
 Create a table and store the values of the set bits till 256 numbers 
 table[i]=(i&1)+table[i/2]
 lets see for i=5 which is 0000..............101
 table[5]=(5&1)+table[5/2]
 table[5/2]=table[2]=1
 5   = 00000..............101
 1   = 00000..............001
 ____________________________
 5&1 = 00000..............001 = 1
 ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾
 table[5]=(5&1)+table[5/2] = 1+1 =2
 This is how we store the values. Now we need to verify the things. so for that since we require Θ(1)
 we will go for the default solution. for that we need 32 bits of solution we will verify and then do the parts as 8
 lets take the example of 5 = 00000000000000000000000000000101 
 lets divide it in the parts of 8 bits 00000000-00000000-00000000-00000101
 Now we use the logic and sees the things for the last 8 bits which is and 0xff = 11111111 and after verifying that we do 
 right shift and then verifies the count and added the things with the res
∴ res = 2+0+0+0=2
*/

