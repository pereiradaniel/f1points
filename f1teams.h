// F1 Team Struct
struct F1Team {
    char full_team_name[50];
    char base[50];
    struct TeamChief *team_chief;
    struct TechnicalChief *technical_chiefs;
    struct Chassis *chassis;
    struct PowerUnit *power_unit;
    int first_team_entry;
    int world_championships;
    int highest_race_finish;
    int highest_race_finish_multiplier;
    int num_of_pole_positions;
    int fastest_laps;
};

// F1 Team Chief Struct
struct TeamChief {
    char full_name[50];
};

// F1 Technical Chief Struct
struct TechnicalChief {
    char full_name[100];
};

// F1 Chassis Struct
struct Chassis {
    char name[20];
};

// F1 Power Unit Struct
struct PowerUnit {
    char name[30];
};