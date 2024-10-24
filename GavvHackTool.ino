#include <SPI.h>
#include <M5GFX.h>
#include <M5Unified.h>
#include "GavvHackToolUtility.h"
#include "GochizoImg.h"

int i = 0;

void AtomS3Config() {
    auto cfg = M5.config();
    M5.begin(cfg);
}

void SPIConfig() {
    pinMode(CS, OUTPUT);
    SPI.begin(SCK, MISO, MOSI, CS);
}

void DisplayConfig() {
    M5.Display.setRotation(1);
    M5.Display.setTextSize(4);
    M5.Display.startWrite();
    M5.Display.setCursor(0, 0);
    M5.Display.printf("%03ld", 0);
    M5.Display.endWrite();
}

void ShowID(int id) {
    M5.Display.startWrite();
    M5.Display.fillScreen(BLACK);
    M5.Display.setCursor(0, 0);
    M5.Display.printf("%03ld", id);
    M5.Display.endWrite();
}

const unsigned short *GetImgData(char *imgName) {
    if(strcmp(imgName, "G017") == 0) return G017;
    else if(strcmp(imgName, "G018") == 0) return G018;
    else if(strcmp(imgName, "G019") == 0) return G019;
    else if(strcmp(imgName, "G023") == 0) return G023;
    else if(strcmp(imgName, "G034") == 0) return G034;
    else if(strcmp(imgName, "G036") == 0) return G036;
    else return nullptr;
}

void ShowImg(char *imgName) {
    Serial.println(imgName);
    const unsigned short *imgData = GetImgData(imgName);
    M5.Display.startWrite();
    M5.Display.fillScreen(BLACK);
    M5.Display.setCursor(0, 0);
    M5.Display.drawBitmap(0, 0, 128, 128, imgData);
    M5.Display.endWrite();
}

void RegistorInit() {
    digitalWrite(CS, LOW);
    SPI.transfer(0b00000000);
    SPI.transfer(0);
    digitalWrite(CS, HIGH);
    delay(10);
    digitalWrite(CS, LOW);
    SPI.transfer(0b00010000);
    SPI.transfer(0);
    digitalWrite(CS, HIGH);
}

void ChangeRegistorVal(int RrA, int RrB) {
    digitalWrite(CS, LOW);
    SPI.transfer(0b00000000);
    SPI.transfer(RrA);
    digitalWrite(CS, HIGH);
    delay(10);
    digitalWrite(CS, LOW);
    SPI.transfer(0b00010000);
    SPI.transfer(RrB);
    digitalWrite(CS, HIGH);
}

gochizo_dtl GetGochizoDetail(int i) {
    return data_gochizo[i];
}

void setup() {
    Serial.begin(115200);
    AtomS3Config();
    SPIConfig();
    DisplayConfig();
    RegistorInit();
}

void loop() {
    M5.update();
    if(M5.BtnA.wasClicked()) {
        gochizo_dtl gochizo = GetGochizoDetail(i);
        int id = gochizo.id;
        int RrA = gochizo.RrA;
        int RrB = gochizo.RrB;
        char imgName[5];
        strcpy(imgName, gochizo.imgName);

        Serial.printf("id: %03ld, RrA: %02ld, RrB: %02ld", id, RrA, RrB);
        Serial.println();

        if(strcmp(imgName, "G000") == 0) ShowID(id);
        else ShowImg(imgName);
        ChangeRegistorVal(RrA, RrB);

        i++;
    }
}
