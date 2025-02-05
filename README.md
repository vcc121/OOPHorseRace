# OOPHorseRace
include <iostream>
include <random>

Horse class:
  -int position
  -int trackLength
  -int id
  +Horse() 
  +init(int id, int trackLength)
    this is needed because Horse should have null parameters due to the way c++ works 
  +advance()
    performs a "coin flip" (random 0 or 1) to decide if the horse moves forward
    if '1' (heads), increase horse position by 1
    if '0' (tails), horse stays in the same position
    does not return a value, just updates horse's position

  printLane()
    use a for loop to print the race track
      loop from 0 to TRACK_LENGTH (15)
      if i matches horse's position, print horse number
      otherwise, print a dot
    print a newline after each lane

  +bool isWinner()
    checks if horse has reached or passed TRACK_LENGTH
    if true, print winner message and return true
    else return false

Race class:
  -Horse horses[]
    creates an array of horses with 5 elements, all set to 0 (starting positions)
  -set TRACK_LENGTH constant to 15
  -set HORSES_NUMBER constant to 5
  +Race()
  +run()
  
  

main function
  set keepGoing to true
  while keepGoing is true
    for each horse (loop from 0 to HORSES_NUMBER-1)
      call advance function with horse index and horses array
      call printLane function to display updated position
      if isWinner returns true, set keepGoing to false
    wait for user to press enter before continuing next round
