    #include <iostream>
    #include <cstdlib>
    using namespace std; 
    int main()
    {
       string dice_choice;
       int Red_dice[6] = {1,4,4,4,4,4}; // List of numbers on the different faces of dice
       int Green_dice[6] = {2,2,2,5,5,5};
       int Blue_dice[6]={6,3,3,3,3,3};
       char player_1; // The dice chose by player 1 
       char player_2; // The dice chose by player 2
       int valueOfp1; // The random value of face chosen on dice of player 1's choice
       int valueOfp2; // The random value of face chosen on dice of player 2's choice
       int randValue; 
       int scoreOfplayer1 =0; // The score of player 1 which increases if player 1 value is greater than player 2 value
       int scoreOfplayer2 =0; // The score of player 1 which increases if player 2 value is greater than player 1 value
       int moveNumber =1;

        cout << "Class: CS 141\n" << "System: C++ in codio.com\n" 
            << "Author: Bhavana Laxmi Radharapu\n"
            << "Welcome to the dice game, where you and your opponent each choose\n"
            << "one of the red, green or blue dice and roll them.\n\n";
       cout << "The dice contain the following sides:\n Red: 1 4 4 4 4 4\n Green: 2 2 2 5 5 5\n Blue: 6 3 3 3 3 3\n";  
       cout << "Ender die color(R,G or B): ";  
       cin >> dice_choice; // The dice choice of the User


        if (dice_choice.length()==1) // if the user is single player that the dice chosen by player 1 would have only one character
       { 
        randValue = rand()%6; // Generates a random value between 0-6 which is chosen as the face side
        if (dice_choice =="R" || dice_choice == "r") // if the user chose red dice
        {
          cout<< "Value: " << Red_dice[randValue] <<endl;
        }
        else if (dice_choice =="G" || dice_choice == "g") 
        {
          cout<< "Value: " << Green_dice[randValue] <<endl;     
        }
        else if (dice_choice == "B" || dice_choice == "b") 
        {
          cout << "Value: " << Blue_dice[randValue] <<endl;
        }
       }        
      else if (dice_choice.length()==2) // if the user is choosing to play multiplayer
      {
        player_1 = dice_choice.at(0); // The choice of player 1
        player_2 = dice_choice.at(1); // The choice of player 2
        while ( moveNumber <= 50 ) // To loop through 50times
        {
          if(player_1 == 'R' || player_1 =='r')
          {
           randValue = rand()%6; // generates random number between 0-6
           valueOfp1 = Red_dice[randValue]; //The random number between 0-6 id choosen as the index of face value to be generated
          }  
          if(player_2 == 'R' || player_2 == 'r')
          {
           randValue = rand()%6;
           valueOfp2 = Red_dice[randValue];
          }
          if(player_1 == 'B' || player_1 =='b')
          {
            randValue = rand()%6;
            valueOfp1 = Blue_dice[randValue]; 
          } 
          if(player_2 == 'B' || player_2 == 'b')
          {
           randValue = rand()%6;
           valueOfp2 = Blue_dice[randValue];
          }
          if (player_1 == 'G' || player_1 == 'g')
          {
           randValue = rand()%6;
           valueOfp1 = Green_dice[randValue];  
          }
          if(player_2 == 'G'|| player_2 == 'g')
          {
            randValue = rand()%6;
            valueOfp2 = Green_dice[randValue]; 
          }
          if (valueOfp1 > valueOfp2) // To check if the Value of Player1 is greater than Player2 and the score increases by greater value
          {
            scoreOfplayer1 += 1;
          }
          else if (valueOfp2 > valueOfp1)
          {
            scoreOfplayer2 += 1;
          }
          cout << moveNumber<< ". "<< player_1<<": "<< valueOfp1 << " " << player_2<<": "<< valueOfp2 << ", " << " Score:  " 
               << scoreOfplayer1 << " to " << scoreOfplayer2 << endl;
          moveNumber +=1;
       }
      }
      return 0;
    }
