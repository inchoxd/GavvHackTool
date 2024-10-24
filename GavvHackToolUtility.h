// Pin Assignments
#define MOSI 6  // S3:5 -> MCP4251:3
#define MISO 8  // S3:8 -> MCP4251:13
#define SCK 7   // S3:7 -> MCP4251:2
#define CS 5    // S3:5 -> MCP4251:1

// RrLists
#define RrA62k 255
#define RrA47k 183
#define RrA39k 142
#define RrA30k 101
#define RrA24k 77
#define RrA20k 62
#define RrA16k 49
#define RrA12k 35
#define RrA10k 29
#define RrA8_2k 23
#define RrA6_8k 19
#define RrA5_6k 16

#define RrB62k 255
#define RrB47k 181
#define RrB39k 141
#define RrB30k 102
#define RrB24k 78
#define RrB20k 63
#define RrB16k 50
#define RrB12k 36
#define RrB10k 29
#define RrB8_2k 23
#define RrB6_8k 19
#define RrB5_6k 16

// detail of gochizo
typedef struct GochizoDetails {
    int id;
    int type;
    char name[64];
    int RrA;
    int RrB;
    char imgName[5];
} gochizo_dtl;

gochizo_dtl data_gochizo[144] {
    {17, 0, "PoppinGummy", RrA62k, RrB62k, "G017"},
    {18, 0, "KickinGummy", RrA62k, RrB47k, "G018"},
    {19, 0, "PunchinGummy", RrA62k, RrB39k, "G019"},
    {20, 0, "", RrA62k, RrB30k, "G000"},
    {21, 0, "", RrA62k, RrB24k, "G000"},
    {22, 0, "", RrA62k, RrB20k, "G000"},
    {23, 0, "ZakuZakuChips", RrA62k, RrB16k, "G023"},
    {24, 0, "", RrA62k, RrB12k, "G000"},
    {25, 0, "", RrA62k, RrB10k, "G000"},
    {26, 0, "", RrA62k, RrB8_2k, "G000"},
    {27, 0, "", RrA62k, RrB6_8k, "G000"},
    {28, 0, "", RrA62k, RrB5_6k, "G000"},
    {29, 0, "", RrA47k, RrB62k, "G000"},
    {30, 0, "", RrA47k, RrB47k, "G000"},
    {31, 0, "", RrA47k, RrB39k, "G000"},
    {32, 0, "", RrA47k, RrB30k, "G000"},
    {33, 0, "", RrA47k, RrB24k, "G000"},
    {34, 0, "Fuwamallow", RrA47k, RrB20k, "G034"},
    {35, 0, "", RrA47k, RrB16k, "G000"},
    {36, 0, "VroCan", RrA47k, RrB12k, "G036"},
    {37, 0, "", RrA47k, RrB10k, "G000"},
    {38, 0, "", RrA47k, RrB8_2k, "G000"},
    {39, 0, "", RrA47k, RrB6_8k, "G000"},
    {40, 0, "", RrA47k, RrB5_6k, "G000"},
    {41, 0, "", RrA39k, RrB62k, "G000"},
    {42, 0, "", RrA39k, RrB47k, "G000"},
    {43, 0, "", RrA39k, RrB39k, "G000"},
    {44, 0, "", RrA39k, RrB30k, "G000"},
    {45, 0, "", RrA39k, RrB24k, "G000"},
    {46, 0, "", RrA39k, RrB20k, "G000"},
    {47, 0, "", RrA39k, RrB16k, "G000"},
    {48, 0, "", RrA39k, RrB12k, "G000"},
    {49, 0, "", RrA39k, RrB10k, "G000"},
    {50, 0, "", RrA39k, RrB8_2k, "G000"},
    {51, 0, "", RrA39k, RrB6_8k, "G000"},
    {52, 0, "", RrA39k, RrB5_6k, "G000"},
    {53, 0, "", RrA30k, RrB62k, "G000"},
    {54, 0, "", RrA30k, RrB47k, "G000"},
    {55, 0, "", RrA30k, RrB39k, "G000"},
    {56, 0, "", RrA30k, RrB30k, "G000"},
    {57, 0, "", RrA30k, RrB24k, "G000"},
    {58, 0, "", RrA30k, RrB20k, "G000"},
    {59, 0, "", RrA30k, RrB16k, "G000"},
    {60, 0, "", RrA30k, RrB12k, "G000"},
    {61, 0, "", RrA30k, RrB10k, "G000"},
    {62, 0, "", RrA30k, RrB8_2k, "G000"},
    {63, 0, "", RrA30k, RrB6_8k, "G000"},
    {64, 0, "", RrA30k, RrB5_6k, "G000"},
    {65, 0, "", RrA24k, RrB62k, "G000"},
    {66, 0, "", RrA24k, RrB47k, "G000"},
    {67, 0, "", RrA24k, RrB39k, "G000"},
    {68, 0, "", RrA24k, RrB30k, "G000"},
    {69, 0, "", RrA24k, RrB24k, "G000"},
    {70, 0, "", RrA24k, RrB20k, "G000"},
    {71, 0, "", RrA24k, RrB16k, "G000"},
    {72, 0, "", RrA24k, RrB12k, "G000"},
    {73, 0, "", RrA24k, RrB10k, "G000"},
    {74, 0, "", RrA24k, RrB8_2k, "G000"},
    {75, 0, "", RrA24k, RrB6_8k, "G000"},
    {76, 0, "", RrA24k, RrB5_6k, "G000"},
    {77, 0, "", RrA20k, RrB62k, "G000"},
    {78, 0, "", RrA20k, RrB47k, "G000"},
    {79, 0, "", RrA20k, RrB39k, "G000"},
    {80, 0, "", RrA20k, RrB30k, "G000"},
    {81, 0, "", RrA20k, RrB24k, "G000"},
    {82, 0, "", RrA20k, RrB20k, "G000"},
    {83, 0, "", RrA20k, RrB16k, "G000"},
    {84, 0, "", RrA20k, RrB12k, "G000"},
    {85, 0, "", RrA20k, RrB10k, "G000"},
    {86, 0, "", RrA20k, RrB8_2k, "G000"},
    {87, 0, "", RrA20k, RrB6_8k, "G000"},
    {88, 0, "", RrA20k, RrB5_6k, "G000"},
    {89, 0, "", RrA16k, RrB62k, "G000"},
    {90, 0, "", RrA16k, RrB47k, "G000"},
    {91, 0, "", RrA16k, RrB39k, "G000"},
    {92, 0, "", RrA16k, RrB30k, "G000"},
    {93, 0, "", RrA16k, RrB24k, "G000"},
    {94, 0, "", RrA16k, RrB20k, "G000"},
    {95, 0, "Kuuga", RrA16k, RrB16k, "G000"},
    {96, 0, "Agito", RrA16k, RrB12k, "G000"},
    {97, 0, "Ryuki", RrA16k, RrB10k, "G000"},
    {98, 0, "555", RrA16k, RrB8_2k, "G000"},
    {99, 0, "Blade", RrA16k, RrB6_8k, "G000"},
    {100, 0, "Hibiki", RrA16k, RrB5_6k, "G000"},
    {101, 0, "Kabuto", RrA12k, RrB62k, "G000"},
    {102, 0, "Den-O", RrA12k, RrB47k, "G000"},
    {103, 0, "Kiva", RrA12k, RrB39k, "G000"},
    {104, 0, "Decade", RrA12k, RrB30k, "G000"},
    {105, 0, "W", RrA12k, RrB24k, "G000"},
    {106, 0, "OOO", RrA12k, RrB20k, "G000"},
    {107, 0, "Fourze", RrA12k, RrB16k, "G000"},
    {108, 0, "Wizard", RrA12k, RrB12k, "G000"},
    {109, 0, "Gaim", RrA12k, RrB10k, "G000"},
    {110, 0, "Drive", RrA12k, RrB8_2k, "G000"},
    {111, 0, "Ghost", RrA12k, RrB6_8k, "G000"},
    {112, 0, "Ex-Aid", RrA12k, RrB5_6k, "G000"},
    {113, 0, "Build", RrA10k, RrB62k, "G000"},
    {114, 0, "Zi-O", RrA10k, RrB47k, "G000"},
    {115, 0, "", RrA10k, RrB39k, "G000"},
    {116, 0, "", RrA10k, RrB30k, "G000"},
    {117, 0, "", RrA10k, RrB24k, "G000"},
    {118, 0, "", RrA10k, RrB20k, "G000"},
    {119, 0, "", RrA10k, RrB16k, "G000"},
    {120, 0, "", RrA10k, RrB12k, "G000"},
    {121, 0, "", RrA10k, RrB10k, "G000"},
    {122, 0, "", RrA10k, RrB8_2k, "G000"},
    {123, 0, "", RrA10k, RrB6_8k, "G000"},
    {124, 0, "", RrA10k, RrB5_6k, "G000"},
    {125, 0, "", RrA8_2k, RrB62k, "G000"},
    {126, 0, "", RrA8_2k, RrB47k, "G000"},
    {127, 0, "", RrA8_2k, RrB39k, "G000"},
    {128, 0, "", RrA8_2k, RrB30k, "G000"},
    {129, 0, "", RrA8_2k, RrB24k, "G000"},
    {130, 0, "", RrA8_2k, RrB20k, "G000"},
    {131, 0, "", RrA8_2k, RrB16k, "G000"},
    {132, 0, "", RrA8_2k, RrB12k, "G000"},
    {133, 0, "", RrA8_2k, RrB10k, "G000"},
    {134, 0, "", RrA8_2k, RrB8_2k, "G000"},
    {135, 0, "", RrA8_2k, RrB6_8k, "G000"},
    {136, 0, "", RrA8_2k, RrB5_6k, "G000"},
    {137, 0, "", RrA6_8k, RrB62k, "G000"},
    {138, 0, "", RrA6_8k, RrB47k, "G000"},
    {139, 0, "", RrA6_8k, RrB39k, "G000"},
    {140, 0, "", RrA6_8k, RrB30k, "G000"},
    {141, 0, "", RrA6_8k, RrB24k, "G000"},
    {142, 0, "", RrA6_8k, RrB20k, "G000"},
    {143, 0, "", RrA6_8k, RrB16k, "G000"},
    {144, 0, "", RrA6_8k, RrB12k, "G000"},
    {145, 0, "", RrA6_8k, RrB10k, "G000"},
    {146, 0, "", RrA6_8k, RrB8_2k, "G000"},
    {147, 0, "", RrA6_8k, RrB6_8k, "G000"},
    {148, 0, "", RrA6_8k, RrB5_6k, "G000"},
    {149, 0, "", RrA5_6k, RrB62k, "G000"},
    {150, 0, "", RrA5_6k, RrB47k, "G000"},
    {151, 0, "", RrA5_6k, RrB39k, "G000"},
    {152, 0, "", RrA5_6k, RrB30k, "G000"},
    {153, 0, "", RrA5_6k, RrB24k, "G000"},
    {154, 0, "", RrA5_6k, RrB20k, "G000"},
    {155, 0, "", RrA5_6k, RrB16k, "G000"},
    {156, 0, "", RrA5_6k, RrB12k, "G000"},
    {157, 0, "", RrA5_6k, RrB10k, "G000"},
    {158, 0, "", RrA5_6k, RrB8_2k, "G000"},
    {159, 0, "", RrA5_6k, RrB6_8k, "G000"},
    {160, 0, "", RrA5_6k, RrB5_6k, "G000"}
};

