// Program that organizes F1 team information into structs
#include "./f1teams.h"  // Include header with F1 team structs
#include <stdio.h>
#include <string.h>

// Function for displaying a given team's info:
void displayTeam (struct F1Team team)
{
    printf("Full Team Name: %s\n", team.full_team_name);
    printf("Base: %s\n", team.base);
    printf("Team Chief: %s\n", team.team_chief->full_name);
    printf("Technical Chief(s): %s\n", team.technical_chiefs->full_name);
    printf("Chassis: %s\n", team.chassis->name);
    printf("Power Unit: %s\n", team.power_unit->name);
    printf("First Team Entry: %d\n", team.first_team_entry);
    printf("World Championships: %d\n", team.world_championships);
    printf("Highest Race Finish: %d(x%d)\n", team.highest_race_finish, team.highest_race_finish_multiplier);
    printf("Pole Positions: %d\n", team.num_of_pole_positions);
    printf("Fastest Laps: %d\n", team.fastest_laps);
}

// MAIN PROGRAM
int main(int argc, char* argv[])
{
    // Create Team "Ferrari":
    struct F1Team ferrari;

    // Add full team name to Ferrari:
    strcpy(ferrari.full_team_name, "Scuderia Ferrari HP");
    strcpy(ferrari.base, "Maranello, Italy");

    // Create Ferrari Team Chief and link to Ferrari Team:
    struct TeamChief fredvasseur;
    strcpy(fredvasseur.full_name, "Frédéric Vasseur");
    ferrari.team_chief = &fredvasseur;

    // Create Ferrari Technical Chiefs and link to Ferrari Team:
    struct TechnicalChief ferrari_technical_chief;
    strcpy(ferrari_technical_chief.full_name, "Loic Serra / Enrico Gualtieri");
    ferrari.technical_chiefs = &ferrari_technical_chief;

    // Create Ferrari Chassis and link to Ferrari Team:
    struct Chassis ferrari_chassis;
    strcpy(ferrari_chassis.name, "SF-24");
    ferrari.chassis = &ferrari_chassis;

    // Create Ferrari Power Unit and link to Ferrari Team:
    struct PowerUnit ferrari_pu;
    strcpy(ferrari_pu.name, "Ferrari");
    ferrari.power_unit = &ferrari_pu;

    // Add Ferrari info to Ferrari Team:
    ferrari.first_team_entry = 1950;
    ferrari.world_championships = 16;
    ferrari.highest_race_finish = 1;
    ferrari.highest_race_finish_multiplier = 249;
    ferrari.num_of_pole_positions = 253;
    ferrari.fastest_laps = 263;

    // Display Ferrari Team info:
    displayTeam(ferrari);
    
    return 0;
}