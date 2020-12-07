// Author: Gavin R Lafferty
// Github: https://github.com/TheRealGavin/homework_09
// December 06, 2020
// CSIS 113A

#include <iostream>

// Define a struct called player that holds
// two primitive types, a char and a double
// that will hold the characters of the player's
// name and their average score
struct player{
  char name[50];
  double average;
};

// Call two functions that will be passed the player_info
// struct, get_player_average will be passed a pointer to the struct
void get_player_average(player *player_info);
void print_player_average(player player_info);

int main() {
  // Create a constant integer to be used for the # of players to
  // run through the functions
  const int kNumberOfPlayers = 2;

  // Call the player struct, defining it as an array
  // and pass through it the const containing an integer
  // of the number of players
  player player_information[kNumberOfPlayers];

  // Utilize a for loop to move through the # of players
  for(int i = 0; i < kNumberOfPlayers; ++i) {
    // Call the get_player_average and print_player_average
    // functions while passing them an array of player_information
    // with the array size being defined by a const integer
    get_player_average(&player_information[kNumberOfPlayers]);
    print_player_average(player_information[kNumberOfPlayers]);
  }
  return 0;
}


// This function takes in the player struct and uses pointers to
// fill the primitive types within that struct while prompting the
// user for information
void get_player_average(player *player_info){
  std::cout << "Enter the player's name ";
  std::cin >> (player_info->name);

  std::cout << "Enter the player's average " << std::endl;
  std::cin >> player_info->average;
}


// This struct is passed the player struct and prints the individual data
// from the struct within a cout statement
void print_player_average(player player_info){
  std::cout << player_info.name << " is hitting " << player_info.average
  << std::endl;
}
